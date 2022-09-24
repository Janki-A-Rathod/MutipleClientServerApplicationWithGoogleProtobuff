// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: clientserver.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_clientserver_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_clientserver_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3020000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3020000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/timestamp.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_clientserver_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_clientserver_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_clientserver_2eproto;
namespace tutorial {
class TxRxData;
struct TxRxDataDefaultTypeInternal;
extern TxRxDataDefaultTypeInternal _TxRxData_default_instance_;
class clientserver;
struct clientserverDefaultTypeInternal;
extern clientserverDefaultTypeInternal _clientserver_default_instance_;
}  // namespace tutorial
PROTOBUF_NAMESPACE_OPEN
template<> ::tutorial::TxRxData* Arena::CreateMaybeMessage<::tutorial::TxRxData>(Arena*);
template<> ::tutorial::clientserver* Arena::CreateMaybeMessage<::tutorial::clientserver>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace tutorial {

// ===================================================================

class TxRxData final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:tutorial.TxRxData) */ {
 public:
  inline TxRxData() : TxRxData(nullptr) {}
  ~TxRxData() override;
  explicit PROTOBUF_CONSTEXPR TxRxData(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  TxRxData(const TxRxData& from);
  TxRxData(TxRxData&& from) noexcept
    : TxRxData() {
    *this = ::std::move(from);
  }

  inline TxRxData& operator=(const TxRxData& from) {
    CopyFrom(from);
    return *this;
  }
  inline TxRxData& operator=(TxRxData&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const TxRxData& default_instance() {
    return *internal_default_instance();
  }
  static inline const TxRxData* internal_default_instance() {
    return reinterpret_cast<const TxRxData*>(
               &_TxRxData_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TxRxData& a, TxRxData& b) {
    a.Swap(&b);
  }
  inline void Swap(TxRxData* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(TxRxData* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  TxRxData* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<TxRxData>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const TxRxData& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const TxRxData& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(TxRxData* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tutorial.TxRxData";
  }
  protected:
  explicit TxRxData(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 2,
    kMsgFieldNumber = 3,
    kLastUpdatedFieldNumber = 4,
    kIdFieldNumber = 1,
  };
  // optional string name = 2;
  bool has_name() const;
  private:
  bool _internal_has_name() const;
  public:
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // optional string msg = 3;
  bool has_msg() const;
  private:
  bool _internal_has_msg() const;
  public:
  void clear_msg();
  const std::string& msg() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_msg(ArgT0&& arg0, ArgT... args);
  std::string* mutable_msg();
  PROTOBUF_NODISCARD std::string* release_msg();
  void set_allocated_msg(std::string* msg);
  private:
  const std::string& _internal_msg() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_msg(const std::string& value);
  std::string* _internal_mutable_msg();
  public:

  // .google.protobuf.Timestamp last_updated = 4;
  bool has_last_updated() const;
  private:
  bool _internal_has_last_updated() const;
  public:
  void clear_last_updated();
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& last_updated() const;
  PROTOBUF_NODISCARD ::PROTOBUF_NAMESPACE_ID::Timestamp* release_last_updated();
  ::PROTOBUF_NAMESPACE_ID::Timestamp* mutable_last_updated();
  void set_allocated_last_updated(::PROTOBUF_NAMESPACE_ID::Timestamp* last_updated);
  private:
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& _internal_last_updated() const;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_last_updated();
  public:
  void unsafe_arena_set_allocated_last_updated(
      ::PROTOBUF_NAMESPACE_ID::Timestamp* last_updated);
  ::PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_last_updated();

  // optional int32 id = 1;
  bool has_id() const;
  private:
  bool _internal_has_id() const;
  public:
  void clear_id();
  int32_t id() const;
  void set_id(int32_t value);
  private:
  int32_t _internal_id() const;
  void _internal_set_id(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:tutorial.TxRxData)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr msg_;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* last_updated_;
  int32_t id_;
  friend struct ::TableStruct_clientserver_2eproto;
};
// -------------------------------------------------------------------

class clientserver final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:tutorial.clientserver) */ {
 public:
  inline clientserver() : clientserver(nullptr) {}
  ~clientserver() override;
  explicit PROTOBUF_CONSTEXPR clientserver(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  clientserver(const clientserver& from);
  clientserver(clientserver&& from) noexcept
    : clientserver() {
    *this = ::std::move(from);
  }

  inline clientserver& operator=(const clientserver& from) {
    CopyFrom(from);
    return *this;
  }
  inline clientserver& operator=(clientserver&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const clientserver& default_instance() {
    return *internal_default_instance();
  }
  static inline const clientserver* internal_default_instance() {
    return reinterpret_cast<const clientserver*>(
               &_clientserver_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(clientserver& a, clientserver& b) {
    a.Swap(&b);
  }
  inline void Swap(clientserver* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(clientserver* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  clientserver* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<clientserver>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const clientserver& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const clientserver& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(clientserver* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tutorial.clientserver";
  }
  protected:
  explicit clientserver(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTotalclientsFieldNumber = 1,
  };
  // repeated .tutorial.TxRxData totalclients = 1;
  int totalclients_size() const;
  private:
  int _internal_totalclients_size() const;
  public:
  void clear_totalclients();
  ::tutorial::TxRxData* mutable_totalclients(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tutorial::TxRxData >*
      mutable_totalclients();
  private:
  const ::tutorial::TxRxData& _internal_totalclients(int index) const;
  ::tutorial::TxRxData* _internal_add_totalclients();
  public:
  const ::tutorial::TxRxData& totalclients(int index) const;
  ::tutorial::TxRxData* add_totalclients();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tutorial::TxRxData >&
      totalclients() const;

  // @@protoc_insertion_point(class_scope:tutorial.clientserver)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tutorial::TxRxData > totalclients_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_clientserver_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TxRxData

// optional int32 id = 1;
inline bool TxRxData::_internal_has_id() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool TxRxData::has_id() const {
  return _internal_has_id();
}
inline void TxRxData::clear_id() {
  id_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline int32_t TxRxData::_internal_id() const {
  return id_;
}
inline int32_t TxRxData::id() const {
  // @@protoc_insertion_point(field_get:tutorial.TxRxData.id)
  return _internal_id();
}
inline void TxRxData::_internal_set_id(int32_t value) {
  _has_bits_[0] |= 0x00000004u;
  id_ = value;
}
inline void TxRxData::set_id(int32_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:tutorial.TxRxData.id)
}

// optional string name = 2;
inline bool TxRxData::_internal_has_name() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool TxRxData::has_name() const {
  return _internal_has_name();
}
inline void TxRxData::clear_name() {
  name_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& TxRxData::name() const {
  // @@protoc_insertion_point(field_get:tutorial.TxRxData.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void TxRxData::set_name(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:tutorial.TxRxData.name)
}
inline std::string* TxRxData::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:tutorial.TxRxData.name)
  return _s;
}
inline const std::string& TxRxData::_internal_name() const {
  return name_.Get();
}
inline void TxRxData::_internal_set_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.Set(value, GetArenaForAllocation());
}
inline std::string* TxRxData::_internal_mutable_name() {
  _has_bits_[0] |= 0x00000001u;
  return name_.Mutable(GetArenaForAllocation());
}
inline std::string* TxRxData::release_name() {
  // @@protoc_insertion_point(field_release:tutorial.TxRxData.name)
  if (!_internal_has_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  auto* p = name_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (name_.IsDefault()) {
    name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void TxRxData::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  name_.SetAllocated(name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (name_.IsDefault()) {
    name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:tutorial.TxRxData.name)
}

// optional string msg = 3;
inline bool TxRxData::_internal_has_msg() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool TxRxData::has_msg() const {
  return _internal_has_msg();
}
inline void TxRxData::clear_msg() {
  msg_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& TxRxData::msg() const {
  // @@protoc_insertion_point(field_get:tutorial.TxRxData.msg)
  return _internal_msg();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void TxRxData::set_msg(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000002u;
 msg_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:tutorial.TxRxData.msg)
}
inline std::string* TxRxData::mutable_msg() {
  std::string* _s = _internal_mutable_msg();
  // @@protoc_insertion_point(field_mutable:tutorial.TxRxData.msg)
  return _s;
}
inline const std::string& TxRxData::_internal_msg() const {
  return msg_.Get();
}
inline void TxRxData::_internal_set_msg(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  msg_.Set(value, GetArenaForAllocation());
}
inline std::string* TxRxData::_internal_mutable_msg() {
  _has_bits_[0] |= 0x00000002u;
  return msg_.Mutable(GetArenaForAllocation());
}
inline std::string* TxRxData::release_msg() {
  // @@protoc_insertion_point(field_release:tutorial.TxRxData.msg)
  if (!_internal_has_msg()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  auto* p = msg_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (msg_.IsDefault()) {
    msg_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void TxRxData::set_allocated_msg(std::string* msg) {
  if (msg != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  msg_.SetAllocated(msg, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (msg_.IsDefault()) {
    msg_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:tutorial.TxRxData.msg)
}

// .google.protobuf.Timestamp last_updated = 4;
inline bool TxRxData::_internal_has_last_updated() const {
  return this != internal_default_instance() && last_updated_ != nullptr;
}
inline bool TxRxData::has_last_updated() const {
  return _internal_has_last_updated();
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& TxRxData::_internal_last_updated() const {
  const ::PROTOBUF_NAMESPACE_ID::Timestamp* p = last_updated_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Timestamp&>(
      ::PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& TxRxData::last_updated() const {
  // @@protoc_insertion_point(field_get:tutorial.TxRxData.last_updated)
  return _internal_last_updated();
}
inline void TxRxData::unsafe_arena_set_allocated_last_updated(
    ::PROTOBUF_NAMESPACE_ID::Timestamp* last_updated) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(last_updated_);
  }
  last_updated_ = last_updated;
  if (last_updated) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tutorial.TxRxData.last_updated)
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* TxRxData::release_last_updated() {
  
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = last_updated_;
  last_updated_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* TxRxData::unsafe_arena_release_last_updated() {
  // @@protoc_insertion_point(field_release:tutorial.TxRxData.last_updated)
  
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = last_updated_;
  last_updated_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* TxRxData::_internal_mutable_last_updated() {
  
  if (last_updated_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaForAllocation());
    last_updated_ = p;
  }
  return last_updated_;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* TxRxData::mutable_last_updated() {
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _msg = _internal_mutable_last_updated();
  // @@protoc_insertion_point(field_mutable:tutorial.TxRxData.last_updated)
  return _msg;
}
inline void TxRxData::set_allocated_last_updated(::PROTOBUF_NAMESPACE_ID::Timestamp* last_updated) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(last_updated_);
  }
  if (last_updated) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(last_updated));
    if (message_arena != submessage_arena) {
      last_updated = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, last_updated, submessage_arena);
    }
    
  } else {
    
  }
  last_updated_ = last_updated;
  // @@protoc_insertion_point(field_set_allocated:tutorial.TxRxData.last_updated)
}

// -------------------------------------------------------------------

// clientserver

// repeated .tutorial.TxRxData totalclients = 1;
inline int clientserver::_internal_totalclients_size() const {
  return totalclients_.size();
}
inline int clientserver::totalclients_size() const {
  return _internal_totalclients_size();
}
inline void clientserver::clear_totalclients() {
  totalclients_.Clear();
}
inline ::tutorial::TxRxData* clientserver::mutable_totalclients(int index) {
  // @@protoc_insertion_point(field_mutable:tutorial.clientserver.totalclients)
  return totalclients_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tutorial::TxRxData >*
clientserver::mutable_totalclients() {
  // @@protoc_insertion_point(field_mutable_list:tutorial.clientserver.totalclients)
  return &totalclients_;
}
inline const ::tutorial::TxRxData& clientserver::_internal_totalclients(int index) const {
  return totalclients_.Get(index);
}
inline const ::tutorial::TxRxData& clientserver::totalclients(int index) const {
  // @@protoc_insertion_point(field_get:tutorial.clientserver.totalclients)
  return _internal_totalclients(index);
}
inline ::tutorial::TxRxData* clientserver::_internal_add_totalclients() {
  return totalclients_.Add();
}
inline ::tutorial::TxRxData* clientserver::add_totalclients() {
  ::tutorial::TxRxData* _add = _internal_add_totalclients();
  // @@protoc_insertion_point(field_add:tutorial.clientserver.totalclients)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tutorial::TxRxData >&
clientserver::totalclients() const {
  // @@protoc_insertion_point(field_list:tutorial.clientserver.totalclients)
  return totalclients_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace tutorial

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_clientserver_2eproto
