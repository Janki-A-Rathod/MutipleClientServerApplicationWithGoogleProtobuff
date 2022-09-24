#include <sys/types.h>
#include <sys/socket.h>
#include <bits/stdc++.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <thread>
#include <mutex>
#define port 6100
#define MAX 500
using namespace std;
#include "clientserver.pb.h"
// This function fills in a Person message based on user input.
#include <chrono>
void Send_Data_To_Server(int y)
{

	string s;
	int id;
	string name;
	tutorial::TxRxData person;
	cout << "Enter Client Name: ";
	cin >> name;
	person.set_name(name);
	cout << "Enter Client Id :";
	cin >> id;
	person.set_id(id); 
	char input[MAX];
	while (1)
	{
		cout << name << ":";
		cin >> s;
		person.set_msg(s);
		send(y, person.SerializeAsString().c_str(), person.ByteSize() + 1, 0);
	}
}
void Get_Data_From_Server(int x)
{
	char receiveMessage[MAX];
	while (1)
	{
		int rMsgSize = recv(x, receiveMessage, MAX, 0);
		tutorial::TxRxData person;
		person.ParseFromArray(receiveMessage, sizeof(receiveMessage));
		if (rMsgSize < 0)
		{
			cout << "Packet recieve failed." << endl;
		}
		else if (rMsgSize == 0)
		{
			cout << "Server is off." << endl;
		}
		if (person.msg() == "bye")
		{
			cout << "\nConnection ended... take care bye bye... ";
			exit(0);
		}
		cout << "Sended By Client :" << person.id() << "   " << person.name() << ":  " << person.msg() << endl;
	}
}
int main()
{
	/*First Process is to create a clientSocket*/
	/*Function take 3 argument int family, int type, int protocol*/
	/*Family Contains ipv4 ipv6 and varities of family . Here we are using AF_INET->IPv4 protocols*/
	/*type − It specifies the kind of socket you want like stream socket,Datagram socket etc.Here we are using SOCK_STREAM (StreamSocket)
	used for TCP for data Transmission*/
	/*protocol − The argument should be set to the specific protocol type like TCP transport protocol,UDp transport Protocol.Here we are using 0 to select the system's default for the given combination of family and type */
	int clientSocket = socket(AF_INET, SOCK_STREAM, 0);
	// creating a socket and assigning it to the socket handler
	if (clientSocket < 0)
	{
		// socket methode return -1 if the creation was not successful
		cout << "Client Socket creation has failed.";
		exit(0);
	}
	/*sin_family = specifies the address family, usually the constant AF_INET*/
	/*sin_addr = holds the IP address returned by inet_addr() to be used in the socket connection.*/
	/*sin_port = specifies the port number and must be used with htons() function that converts the host byte order to network byte order so that it can be transmitted and routed properly when opening the socket connection. The reason for this is that computers and network protocols order their bytes in a non-compatible fashion*/
	struct sockaddr_in serverAddr, clientAddr;
	serverAddr.sin_family = AF_INET;
	serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1");
	serverAddr.sin_port = htons(port);
	/*serv_addr − It is a pointer to struct sockaddr that contains destination IP address and port.*/
	if (connect(clientSocket, (struct sockaddr *)&serverAddr, sizeof(serverAddr)) < 0)
	{
		cout << "Connection Error..." << endl;
		exit(0);
	}
	else
	{
		cout << "\t\tConnection Established..." << endl;
		printf("client :connection in %s port %d\n",
			   inet_ntoa(clientAddr.sin_addr), ntohs(clientAddr.sin_port));
	}
	while (true)
	{
		thread th2(Send_Data_To_Server, clientSocket);
		thread th1(Get_Data_From_Server, clientSocket);
		th1.join();
		th2.join();
	}
	close(clientSocket);
	exit(0);
}
