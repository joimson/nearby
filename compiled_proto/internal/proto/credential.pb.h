// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: internal/proto/credential.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_internal_2fproto_2fcredential_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_internal_2fproto_2fcredential_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3019000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3019001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_internal_2fproto_2fcredential_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_internal_2fproto_2fcredential_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_internal_2fproto_2fcredential_2eproto;
namespace nearby {
namespace internal {
class SharedCredential;
struct SharedCredentialDefaultTypeInternal;
extern SharedCredentialDefaultTypeInternal _SharedCredential_default_instance_;
}  // namespace internal
}  // namespace nearby
PROTOBUF_NAMESPACE_OPEN
template<> ::nearby::internal::SharedCredential* Arena::CreateMaybeMessage<::nearby::internal::SharedCredential>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace nearby {
namespace internal {

enum IdentityType : int {
  IDENTITY_TYPE_UNSPECIFIED = 0,
  IDENTITY_TYPE_PRIVATE = 1,
  IDENTITY_TYPE_TRUSTED = 2,
  IDENTITY_TYPE_PUBLIC = 3,
  IDENTITY_TYPE_PROVISIONED = 4,
  IdentityType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  IdentityType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool IdentityType_IsValid(int value);
constexpr IdentityType IdentityType_MIN = IDENTITY_TYPE_UNSPECIFIED;
constexpr IdentityType IdentityType_MAX = IDENTITY_TYPE_PROVISIONED;
constexpr int IdentityType_ARRAYSIZE = IdentityType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* IdentityType_descriptor();
template<typename T>
inline const std::string& IdentityType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, IdentityType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function IdentityType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    IdentityType_descriptor(), enum_t_value);
}
inline bool IdentityType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, IdentityType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<IdentityType>(
    IdentityType_descriptor(), name, value);
}
// ===================================================================

class SharedCredential final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:nearby.internal.SharedCredential) */ {
 public:
  inline SharedCredential() : SharedCredential(nullptr) {}
  ~SharedCredential() override;
  explicit constexpr SharedCredential(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SharedCredential(const SharedCredential& from);
  SharedCredential(SharedCredential&& from) noexcept
    : SharedCredential() {
    *this = ::std::move(from);
  }

  inline SharedCredential& operator=(const SharedCredential& from) {
    CopyFrom(from);
    return *this;
  }
  inline SharedCredential& operator=(SharedCredential&& from) noexcept {
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
  static const SharedCredential& default_instance() {
    return *internal_default_instance();
  }
  static inline const SharedCredential* internal_default_instance() {
    return reinterpret_cast<const SharedCredential*>(
               &_SharedCredential_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SharedCredential& a, SharedCredential& b) {
    a.Swap(&b);
  }
  inline void Swap(SharedCredential* other) {
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
  void UnsafeArenaSwap(SharedCredential* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SharedCredential* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SharedCredential>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const SharedCredential& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const SharedCredential& from);
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
  void InternalSwap(SharedCredential* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "nearby.internal.SharedCredential";
  }
  protected:
  explicit SharedCredential(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSecretIdFieldNumber = 1,
    kKeySeedFieldNumber = 2,
    kEncryptedMetadataBytesFieldNumber = 5,
    kMetadataEncryptionKeyTagFieldNumber = 6,
    kConnectionSignatureVerificationKeyFieldNumber = 7,
    kAdvertisementSignatureVerificationKeyFieldNumber = 8,
    kVersionFieldNumber = 10,
    kStartTimeMillisFieldNumber = 3,
    kEndTimeMillisFieldNumber = 4,
    kIdentityTypeFieldNumber = 9,
  };
  // bytes secret_id = 1;
  void clear_secret_id();
  const std::string& secret_id() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_secret_id(ArgT0&& arg0, ArgT... args);
  std::string* mutable_secret_id();
  PROTOBUF_NODISCARD std::string* release_secret_id();
  void set_allocated_secret_id(std::string* secret_id);
  private:
  const std::string& _internal_secret_id() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_secret_id(const std::string& value);
  std::string* _internal_mutable_secret_id();
  public:

  // bytes key_seed = 2;
  void clear_key_seed();
  const std::string& key_seed() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_key_seed(ArgT0&& arg0, ArgT... args);
  std::string* mutable_key_seed();
  PROTOBUF_NODISCARD std::string* release_key_seed();
  void set_allocated_key_seed(std::string* key_seed);
  private:
  const std::string& _internal_key_seed() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_key_seed(const std::string& value);
  std::string* _internal_mutable_key_seed();
  public:

  // bytes encrypted_metadata_bytes = 5;
  void clear_encrypted_metadata_bytes();
  const std::string& encrypted_metadata_bytes() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_encrypted_metadata_bytes(ArgT0&& arg0, ArgT... args);
  std::string* mutable_encrypted_metadata_bytes();
  PROTOBUF_NODISCARD std::string* release_encrypted_metadata_bytes();
  void set_allocated_encrypted_metadata_bytes(std::string* encrypted_metadata_bytes);
  private:
  const std::string& _internal_encrypted_metadata_bytes() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_encrypted_metadata_bytes(const std::string& value);
  std::string* _internal_mutable_encrypted_metadata_bytes();
  public:

  // bytes metadata_encryption_key_tag = 6;
  void clear_metadata_encryption_key_tag();
  const std::string& metadata_encryption_key_tag() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_metadata_encryption_key_tag(ArgT0&& arg0, ArgT... args);
  std::string* mutable_metadata_encryption_key_tag();
  PROTOBUF_NODISCARD std::string* release_metadata_encryption_key_tag();
  void set_allocated_metadata_encryption_key_tag(std::string* metadata_encryption_key_tag);
  private:
  const std::string& _internal_metadata_encryption_key_tag() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_metadata_encryption_key_tag(const std::string& value);
  std::string* _internal_mutable_metadata_encryption_key_tag();
  public:

  // bytes connection_signature_verification_key = 7;
  void clear_connection_signature_verification_key();
  const std::string& connection_signature_verification_key() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_connection_signature_verification_key(ArgT0&& arg0, ArgT... args);
  std::string* mutable_connection_signature_verification_key();
  PROTOBUF_NODISCARD std::string* release_connection_signature_verification_key();
  void set_allocated_connection_signature_verification_key(std::string* connection_signature_verification_key);
  private:
  const std::string& _internal_connection_signature_verification_key() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_connection_signature_verification_key(const std::string& value);
  std::string* _internal_mutable_connection_signature_verification_key();
  public:

  // bytes advertisement_signature_verification_key = 8;
  void clear_advertisement_signature_verification_key();
  const std::string& advertisement_signature_verification_key() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_advertisement_signature_verification_key(ArgT0&& arg0, ArgT... args);
  std::string* mutable_advertisement_signature_verification_key();
  PROTOBUF_NODISCARD std::string* release_advertisement_signature_verification_key();
  void set_allocated_advertisement_signature_verification_key(std::string* advertisement_signature_verification_key);
  private:
  const std::string& _internal_advertisement_signature_verification_key() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_advertisement_signature_verification_key(const std::string& value);
  std::string* _internal_mutable_advertisement_signature_verification_key();
  public:

  // bytes version = 10;
  void clear_version();
  const std::string& version() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_version(ArgT0&& arg0, ArgT... args);
  std::string* mutable_version();
  PROTOBUF_NODISCARD std::string* release_version();
  void set_allocated_version(std::string* version);
  private:
  const std::string& _internal_version() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_version(const std::string& value);
  std::string* _internal_mutable_version();
  public:

  // int64 start_time_millis = 3;
  void clear_start_time_millis();
  int64_t start_time_millis() const;
  void set_start_time_millis(int64_t value);
  private:
  int64_t _internal_start_time_millis() const;
  void _internal_set_start_time_millis(int64_t value);
  public:

  // int64 end_time_millis = 4;
  void clear_end_time_millis();
  int64_t end_time_millis() const;
  void set_end_time_millis(int64_t value);
  private:
  int64_t _internal_end_time_millis() const;
  void _internal_set_end_time_millis(int64_t value);
  public:

  // .nearby.internal.IdentityType identity_type = 9;
  void clear_identity_type();
  ::nearby::internal::IdentityType identity_type() const;
  void set_identity_type(::nearby::internal::IdentityType value);
  private:
  ::nearby::internal::IdentityType _internal_identity_type() const;
  void _internal_set_identity_type(::nearby::internal::IdentityType value);
  public:

  // @@protoc_insertion_point(class_scope:nearby.internal.SharedCredential)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr secret_id_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr key_seed_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr encrypted_metadata_bytes_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr metadata_encryption_key_tag_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr connection_signature_verification_key_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr advertisement_signature_verification_key_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr version_;
  int64_t start_time_millis_;
  int64_t end_time_millis_;
  int identity_type_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_internal_2fproto_2fcredential_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SharedCredential

// bytes secret_id = 1;
inline void SharedCredential::clear_secret_id() {
  secret_id_.ClearToEmpty();
}
inline const std::string& SharedCredential::secret_id() const {
  // @@protoc_insertion_point(field_get:nearby.internal.SharedCredential.secret_id)
  return _internal_secret_id();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void SharedCredential::set_secret_id(ArgT0&& arg0, ArgT... args) {
 
 secret_id_.SetBytes(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:nearby.internal.SharedCredential.secret_id)
}
inline std::string* SharedCredential::mutable_secret_id() {
  std::string* _s = _internal_mutable_secret_id();
  // @@protoc_insertion_point(field_mutable:nearby.internal.SharedCredential.secret_id)
  return _s;
}
inline const std::string& SharedCredential::_internal_secret_id() const {
  return secret_id_.Get();
}
inline void SharedCredential::_internal_set_secret_id(const std::string& value) {
  
  secret_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* SharedCredential::_internal_mutable_secret_id() {
  
  return secret_id_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* SharedCredential::release_secret_id() {
  // @@protoc_insertion_point(field_release:nearby.internal.SharedCredential.secret_id)
  return secret_id_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void SharedCredential::set_allocated_secret_id(std::string* secret_id) {
  if (secret_id != nullptr) {
    
  } else {
    
  }
  secret_id_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), secret_id,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (secret_id_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    secret_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:nearby.internal.SharedCredential.secret_id)
}

// bytes key_seed = 2;
inline void SharedCredential::clear_key_seed() {
  key_seed_.ClearToEmpty();
}
inline const std::string& SharedCredential::key_seed() const {
  // @@protoc_insertion_point(field_get:nearby.internal.SharedCredential.key_seed)
  return _internal_key_seed();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void SharedCredential::set_key_seed(ArgT0&& arg0, ArgT... args) {
 
 key_seed_.SetBytes(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:nearby.internal.SharedCredential.key_seed)
}
inline std::string* SharedCredential::mutable_key_seed() {
  std::string* _s = _internal_mutable_key_seed();
  // @@protoc_insertion_point(field_mutable:nearby.internal.SharedCredential.key_seed)
  return _s;
}
inline const std::string& SharedCredential::_internal_key_seed() const {
  return key_seed_.Get();
}
inline void SharedCredential::_internal_set_key_seed(const std::string& value) {
  
  key_seed_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* SharedCredential::_internal_mutable_key_seed() {
  
  return key_seed_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* SharedCredential::release_key_seed() {
  // @@protoc_insertion_point(field_release:nearby.internal.SharedCredential.key_seed)
  return key_seed_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void SharedCredential::set_allocated_key_seed(std::string* key_seed) {
  if (key_seed != nullptr) {
    
  } else {
    
  }
  key_seed_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), key_seed,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (key_seed_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    key_seed_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:nearby.internal.SharedCredential.key_seed)
}

// int64 start_time_millis = 3;
inline void SharedCredential::clear_start_time_millis() {
  start_time_millis_ = int64_t{0};
}
inline int64_t SharedCredential::_internal_start_time_millis() const {
  return start_time_millis_;
}
inline int64_t SharedCredential::start_time_millis() const {
  // @@protoc_insertion_point(field_get:nearby.internal.SharedCredential.start_time_millis)
  return _internal_start_time_millis();
}
inline void SharedCredential::_internal_set_start_time_millis(int64_t value) {
  
  start_time_millis_ = value;
}
inline void SharedCredential::set_start_time_millis(int64_t value) {
  _internal_set_start_time_millis(value);
  // @@protoc_insertion_point(field_set:nearby.internal.SharedCredential.start_time_millis)
}

// int64 end_time_millis = 4;
inline void SharedCredential::clear_end_time_millis() {
  end_time_millis_ = int64_t{0};
}
inline int64_t SharedCredential::_internal_end_time_millis() const {
  return end_time_millis_;
}
inline int64_t SharedCredential::end_time_millis() const {
  // @@protoc_insertion_point(field_get:nearby.internal.SharedCredential.end_time_millis)
  return _internal_end_time_millis();
}
inline void SharedCredential::_internal_set_end_time_millis(int64_t value) {
  
  end_time_millis_ = value;
}
inline void SharedCredential::set_end_time_millis(int64_t value) {
  _internal_set_end_time_millis(value);
  // @@protoc_insertion_point(field_set:nearby.internal.SharedCredential.end_time_millis)
}

// bytes encrypted_metadata_bytes = 5;
inline void SharedCredential::clear_encrypted_metadata_bytes() {
  encrypted_metadata_bytes_.ClearToEmpty();
}
inline const std::string& SharedCredential::encrypted_metadata_bytes() const {
  // @@protoc_insertion_point(field_get:nearby.internal.SharedCredential.encrypted_metadata_bytes)
  return _internal_encrypted_metadata_bytes();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void SharedCredential::set_encrypted_metadata_bytes(ArgT0&& arg0, ArgT... args) {
 
 encrypted_metadata_bytes_.SetBytes(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:nearby.internal.SharedCredential.encrypted_metadata_bytes)
}
inline std::string* SharedCredential::mutable_encrypted_metadata_bytes() {
  std::string* _s = _internal_mutable_encrypted_metadata_bytes();
  // @@protoc_insertion_point(field_mutable:nearby.internal.SharedCredential.encrypted_metadata_bytes)
  return _s;
}
inline const std::string& SharedCredential::_internal_encrypted_metadata_bytes() const {
  return encrypted_metadata_bytes_.Get();
}
inline void SharedCredential::_internal_set_encrypted_metadata_bytes(const std::string& value) {
  
  encrypted_metadata_bytes_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* SharedCredential::_internal_mutable_encrypted_metadata_bytes() {
  
  return encrypted_metadata_bytes_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* SharedCredential::release_encrypted_metadata_bytes() {
  // @@protoc_insertion_point(field_release:nearby.internal.SharedCredential.encrypted_metadata_bytes)
  return encrypted_metadata_bytes_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void SharedCredential::set_allocated_encrypted_metadata_bytes(std::string* encrypted_metadata_bytes) {
  if (encrypted_metadata_bytes != nullptr) {
    
  } else {
    
  }
  encrypted_metadata_bytes_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), encrypted_metadata_bytes,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (encrypted_metadata_bytes_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    encrypted_metadata_bytes_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:nearby.internal.SharedCredential.encrypted_metadata_bytes)
}

// bytes metadata_encryption_key_tag = 6;
inline void SharedCredential::clear_metadata_encryption_key_tag() {
  metadata_encryption_key_tag_.ClearToEmpty();
}
inline const std::string& SharedCredential::metadata_encryption_key_tag() const {
  // @@protoc_insertion_point(field_get:nearby.internal.SharedCredential.metadata_encryption_key_tag)
  return _internal_metadata_encryption_key_tag();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void SharedCredential::set_metadata_encryption_key_tag(ArgT0&& arg0, ArgT... args) {
 
 metadata_encryption_key_tag_.SetBytes(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:nearby.internal.SharedCredential.metadata_encryption_key_tag)
}
inline std::string* SharedCredential::mutable_metadata_encryption_key_tag() {
  std::string* _s = _internal_mutable_metadata_encryption_key_tag();
  // @@protoc_insertion_point(field_mutable:nearby.internal.SharedCredential.metadata_encryption_key_tag)
  return _s;
}
inline const std::string& SharedCredential::_internal_metadata_encryption_key_tag() const {
  return metadata_encryption_key_tag_.Get();
}
inline void SharedCredential::_internal_set_metadata_encryption_key_tag(const std::string& value) {
  
  metadata_encryption_key_tag_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* SharedCredential::_internal_mutable_metadata_encryption_key_tag() {
  
  return metadata_encryption_key_tag_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* SharedCredential::release_metadata_encryption_key_tag() {
  // @@protoc_insertion_point(field_release:nearby.internal.SharedCredential.metadata_encryption_key_tag)
  return metadata_encryption_key_tag_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void SharedCredential::set_allocated_metadata_encryption_key_tag(std::string* metadata_encryption_key_tag) {
  if (metadata_encryption_key_tag != nullptr) {
    
  } else {
    
  }
  metadata_encryption_key_tag_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), metadata_encryption_key_tag,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (metadata_encryption_key_tag_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    metadata_encryption_key_tag_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:nearby.internal.SharedCredential.metadata_encryption_key_tag)
}

// bytes connection_signature_verification_key = 7;
inline void SharedCredential::clear_connection_signature_verification_key() {
  connection_signature_verification_key_.ClearToEmpty();
}
inline const std::string& SharedCredential::connection_signature_verification_key() const {
  // @@protoc_insertion_point(field_get:nearby.internal.SharedCredential.connection_signature_verification_key)
  return _internal_connection_signature_verification_key();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void SharedCredential::set_connection_signature_verification_key(ArgT0&& arg0, ArgT... args) {
 
 connection_signature_verification_key_.SetBytes(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:nearby.internal.SharedCredential.connection_signature_verification_key)
}
inline std::string* SharedCredential::mutable_connection_signature_verification_key() {
  std::string* _s = _internal_mutable_connection_signature_verification_key();
  // @@protoc_insertion_point(field_mutable:nearby.internal.SharedCredential.connection_signature_verification_key)
  return _s;
}
inline const std::string& SharedCredential::_internal_connection_signature_verification_key() const {
  return connection_signature_verification_key_.Get();
}
inline void SharedCredential::_internal_set_connection_signature_verification_key(const std::string& value) {
  
  connection_signature_verification_key_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* SharedCredential::_internal_mutable_connection_signature_verification_key() {
  
  return connection_signature_verification_key_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* SharedCredential::release_connection_signature_verification_key() {
  // @@protoc_insertion_point(field_release:nearby.internal.SharedCredential.connection_signature_verification_key)
  return connection_signature_verification_key_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void SharedCredential::set_allocated_connection_signature_verification_key(std::string* connection_signature_verification_key) {
  if (connection_signature_verification_key != nullptr) {
    
  } else {
    
  }
  connection_signature_verification_key_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), connection_signature_verification_key,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (connection_signature_verification_key_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    connection_signature_verification_key_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:nearby.internal.SharedCredential.connection_signature_verification_key)
}

// bytes advertisement_signature_verification_key = 8;
inline void SharedCredential::clear_advertisement_signature_verification_key() {
  advertisement_signature_verification_key_.ClearToEmpty();
}
inline const std::string& SharedCredential::advertisement_signature_verification_key() const {
  // @@protoc_insertion_point(field_get:nearby.internal.SharedCredential.advertisement_signature_verification_key)
  return _internal_advertisement_signature_verification_key();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void SharedCredential::set_advertisement_signature_verification_key(ArgT0&& arg0, ArgT... args) {
 
 advertisement_signature_verification_key_.SetBytes(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:nearby.internal.SharedCredential.advertisement_signature_verification_key)
}
inline std::string* SharedCredential::mutable_advertisement_signature_verification_key() {
  std::string* _s = _internal_mutable_advertisement_signature_verification_key();
  // @@protoc_insertion_point(field_mutable:nearby.internal.SharedCredential.advertisement_signature_verification_key)
  return _s;
}
inline const std::string& SharedCredential::_internal_advertisement_signature_verification_key() const {
  return advertisement_signature_verification_key_.Get();
}
inline void SharedCredential::_internal_set_advertisement_signature_verification_key(const std::string& value) {
  
  advertisement_signature_verification_key_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* SharedCredential::_internal_mutable_advertisement_signature_verification_key() {
  
  return advertisement_signature_verification_key_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* SharedCredential::release_advertisement_signature_verification_key() {
  // @@protoc_insertion_point(field_release:nearby.internal.SharedCredential.advertisement_signature_verification_key)
  return advertisement_signature_verification_key_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void SharedCredential::set_allocated_advertisement_signature_verification_key(std::string* advertisement_signature_verification_key) {
  if (advertisement_signature_verification_key != nullptr) {
    
  } else {
    
  }
  advertisement_signature_verification_key_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), advertisement_signature_verification_key,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (advertisement_signature_verification_key_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    advertisement_signature_verification_key_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:nearby.internal.SharedCredential.advertisement_signature_verification_key)
}

// .nearby.internal.IdentityType identity_type = 9;
inline void SharedCredential::clear_identity_type() {
  identity_type_ = 0;
}
inline ::nearby::internal::IdentityType SharedCredential::_internal_identity_type() const {
  return static_cast< ::nearby::internal::IdentityType >(identity_type_);
}
inline ::nearby::internal::IdentityType SharedCredential::identity_type() const {
  // @@protoc_insertion_point(field_get:nearby.internal.SharedCredential.identity_type)
  return _internal_identity_type();
}
inline void SharedCredential::_internal_set_identity_type(::nearby::internal::IdentityType value) {
  
  identity_type_ = value;
}
inline void SharedCredential::set_identity_type(::nearby::internal::IdentityType value) {
  _internal_set_identity_type(value);
  // @@protoc_insertion_point(field_set:nearby.internal.SharedCredential.identity_type)
}

// bytes version = 10;
inline void SharedCredential::clear_version() {
  version_.ClearToEmpty();
}
inline const std::string& SharedCredential::version() const {
  // @@protoc_insertion_point(field_get:nearby.internal.SharedCredential.version)
  return _internal_version();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void SharedCredential::set_version(ArgT0&& arg0, ArgT... args) {
 
 version_.SetBytes(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:nearby.internal.SharedCredential.version)
}
inline std::string* SharedCredential::mutable_version() {
  std::string* _s = _internal_mutable_version();
  // @@protoc_insertion_point(field_mutable:nearby.internal.SharedCredential.version)
  return _s;
}
inline const std::string& SharedCredential::_internal_version() const {
  return version_.Get();
}
inline void SharedCredential::_internal_set_version(const std::string& value) {
  
  version_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* SharedCredential::_internal_mutable_version() {
  
  return version_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* SharedCredential::release_version() {
  // @@protoc_insertion_point(field_release:nearby.internal.SharedCredential.version)
  return version_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void SharedCredential::set_allocated_version(std::string* version) {
  if (version != nullptr) {
    
  } else {
    
  }
  version_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), version,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (version_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    version_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:nearby.internal.SharedCredential.version)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace internal
}  // namespace nearby

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::nearby::internal::IdentityType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::nearby::internal::IdentityType>() {
  return ::nearby::internal::IdentityType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_internal_2fproto_2fcredential_2eproto
