#include <sys/types.h>
#include <sys/socket.h>
#include <bits/stdc++.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <thread>
#define port 6100
#define MAX 500
using namespace std;
#include "clientserver.pb.h"
#define MAX_CLIENT 20
int socket_fd_array[MAX_CLIENT];
int client_connected = 0;
void Send_Data_To_Other_clients(char buf[MAX], int x)
{   
	int i;
	for (i = 1; i < client_connected; i++)
	{
		if (x == i)
		{
			continue;
		}
		write(socket_fd_array[i], buf, MAX);
	}
}
void initialize_socket_fd_array()
{
	int i;
	for (i = 0; i < MAX_CLIENT; i++)
	{
		socket_fd_array[i] = -1;
	}
}

void insert_fd(int fd)
{
	int i;
	for (i = 0; i < MAX_CLIENT; i++)
	{
		if (socket_fd_array[i] != -1)
		{
			continue;
		}
		else
		{
			socket_fd_array[i] = fd;
			break;
		}
	}
	client_connected++;
}
void refresh(fd_set *readfd)
{
	int i;
	FD_ZERO(readfd);
	for (i = 0; i < MAX_CLIENT; i++)
	{
		if (socket_fd_array[i] != -1)
		{
			FD_SET(socket_fd_array[i], readfd);
		}
	}
}
int get_max_fd()
{
	int i;
	int max = -1;
	for (i = 0; i < MAX_CLIENT; i++)
	{
		if (socket_fd_array[i] > max)
		{
			max = socket_fd_array[i];
		}
	}
	return max;
}
void Get_Data_From_Client(fd_set *x)
{
	int rMsgSize;
	char buff[MAX];
	for (int i = 0; i < MAX_CLIENT; i++)
	{
		if (FD_ISSET(socket_fd_array[i], x))
		{
			if ((rMsgSize = recv(socket_fd_array[i], buff, MAX, 0)) > 0)
			{
				tutorial::TxRxData person;
				person.ParseFromArray(buff, sizeof(buff));
				cout << "Sended By Client :" << person.id() <<"   "<< person.name() << ":  " << person.msg() << person.has_last_updated()<< endl;
				thread senddata(Send_Data_To_Other_clients,buff, i);
				senddata.join();
				if (person.msg() == "bye")
				{
					cout << "Server : Bye bro" << endl;
					cout << "\nConnection ended... take care bye bye...\n";
					send(socket_fd_array[i], buff, strlen(buff) + 1, 0);
					exit(0);
				}
			}
		}
	}
}
void Handle_Connections_Requests(int sock, fd_set *readfd)
{
	if (FD_ISSET(sock, readfd))
	{
		int connection;
		cout << "New Connection Request..... \n";
		connection = accept(sock, NULL, NULL);
		if (connection == -1)
		{
			cout << "Server didn't accept the request." << endl;
			// return 0;
		}
		else
		{
			cout << "client connected..........\n"
				 << endl;
			insert_fd(connection);
		}
	}
}
int main()
{
	initialize_socket_fd_array();
	/*First Process is to create a ServerSocket*/
	/*Function take 3 argument int family, int type, int protocol*/
	/*Family Contains ipv4 ipv6 and varities of family . Here we are using AF_INET->IPv4 protocols*/
	/*type − It specifies the kind of socket you want like stream socket,Datagram socket etc.Here we are using SOCK_STREAM (StreamSocket)
	used for TCP for data Transmission*/
	/*protocol − The argument should be set to the specific protocol type like TCP transport protocol,UDp transport Protocol.Here we are using 0 to select the system's default for the given combination of family and type */
	int serverSocket = socket(AF_INET, SOCK_STREAM, 0);
	// creating a socket and assigning it to the socket handler
	if (serverSocket < 0)
	{
		// socket methode return -1 if the creation was not successful
		cout << "Server Socket creation has failed.";
		return 0;
	}
	insert_fd(serverSocket);
	// specifying address and type for the server to operate under
	/*It represents an address family. In most of the Internet-based applications, we use AF_INET.*/
	/*sin_port	Service Port	A 16-bit port number in Network Byte Order.*/
	/*sin_addr	IP Address	A 32-bit IP address in Network Byte Order.*/
	/*INADDR_ANY value for IP address means the server's IP address will be assigned automatically.*/
	struct sockaddr_in serverAddr;
	serverAddr.sin_family = AF_INET;
	serverAddr.sin_port = htons(port);
	serverAddr.sin_addr.s_addr = htonl(INADDR_ANY);
	/*The bind function assigns a local protocol address to a socket.
	 With the Internet protocols, the protocol address is the combination of either a 32-bit IPv4 address or a 128-bit IPv6 address,
	along with a 16-bit TCP or UDP port number. This function is called by TCP server only.*/
	/*(struct sockaddr*) & serverAddr->It is a pointer to struct sockaddr that contains the local IP address and port.*/
	int bindStatus = bind(serverSocket, (struct sockaddr *)&serverAddr, sizeof(serverAddr));
	if (bindStatus < 0)
	{
		cout << "Socket binding has failed" << endl;
		return 0;
	}
	/* Now start listening for the clients, here process will go in sleep mode and will wait for the incoming connection*/
	/*The listen function is called only by a TCP server and it performs two actions −
	1.The listen function converts an unconnected socket into a passive socket,
	indicating that the kernel should accept incoming connection requests directed to this socket.
	2.The second argument to this function specifies the maximum number of connections the kernel should queue for this socket.*/
	/*serverSocket-> It is a socket descriptor returned by the socket function.*/
	/*5->It is the number of allowed connections.*/
	int listenStatus;
	listenStatus = listen(serverSocket, 10);
	if (listenStatus < 0)
	{ // when queue is full listen fails
		cout << "Listner has failed" << endl;
		// return 0;
	}
	cout << "\t\t...Waiting for connections... \n\n";
	while (true)
	{
		fd_set readfd;
		refresh(&readfd);
		select(get_max_fd() + 1, &readfd, nullptr, nullptr, nullptr);
		thread connectionReqThread(Handle_Connections_Requests, serverSocket, &readfd);
		connectionReqThread.join();
		thread getmsgs(Get_Data_From_Client, &readfd);
		getmsgs.join();
	}
	close(serverSocket);
	return 0;
}