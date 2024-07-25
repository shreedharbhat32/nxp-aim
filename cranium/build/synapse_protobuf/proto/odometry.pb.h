// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: odometry.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_odometry_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_odometry_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "header.pb.h"
#include "pose_with_covariance.pb.h"
#include "twist_with_covariance.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_odometry_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_odometry_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_odometry_2eproto;
namespace synapse {
namespace msgs {
class Odometry;
class OdometryDefaultTypeInternal;
extern OdometryDefaultTypeInternal _Odometry_default_instance_;
}  // namespace msgs
}  // namespace synapse
PROTOBUF_NAMESPACE_OPEN
template<> ::synapse::msgs::Odometry* Arena::CreateMaybeMessage<::synapse::msgs::Odometry>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace synapse {
namespace msgs {

// ===================================================================

class Odometry PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:synapse.msgs.Odometry) */ {
 public:
  inline Odometry() : Odometry(nullptr) {};
  virtual ~Odometry();

  Odometry(const Odometry& from);
  Odometry(Odometry&& from) noexcept
    : Odometry() {
    *this = ::std::move(from);
  }

  inline Odometry& operator=(const Odometry& from) {
    CopyFrom(from);
    return *this;
  }
  inline Odometry& operator=(Odometry&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Odometry& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Odometry* internal_default_instance() {
    return reinterpret_cast<const Odometry*>(
               &_Odometry_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Odometry& a, Odometry& b) {
    a.Swap(&b);
  }
  inline void Swap(Odometry* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Odometry* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Odometry* New() const final {
    return CreateMaybeMessage<Odometry>(nullptr);
  }

  Odometry* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Odometry>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Odometry& from);
  void MergeFrom(const Odometry& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Odometry* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "synapse.msgs.Odometry";
  }
  protected:
  explicit Odometry(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_odometry_2eproto);
    return ::descriptor_table_odometry_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kChildFrameIdFieldNumber = 2,
    kHeaderFieldNumber = 1,
    kPoseFieldNumber = 3,
    kTwistFieldNumber = 4,
  };
  // string child_frame_id = 2;
  void clear_child_frame_id();
  const std::string& child_frame_id() const;
  void set_child_frame_id(const std::string& value);
  void set_child_frame_id(std::string&& value);
  void set_child_frame_id(const char* value);
  void set_child_frame_id(const char* value, size_t size);
  std::string* mutable_child_frame_id();
  std::string* release_child_frame_id();
  void set_allocated_child_frame_id(std::string* child_frame_id);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_child_frame_id();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_child_frame_id(
      std::string* child_frame_id);
  private:
  const std::string& _internal_child_frame_id() const;
  void _internal_set_child_frame_id(const std::string& value);
  std::string* _internal_mutable_child_frame_id();
  public:

  // .synapse.msgs.Header header = 1;
  bool has_header() const;
  private:
  bool _internal_has_header() const;
  public:
  void clear_header();
  const ::synapse::msgs::Header& header() const;
  ::synapse::msgs::Header* release_header();
  ::synapse::msgs::Header* mutable_header();
  void set_allocated_header(::synapse::msgs::Header* header);
  private:
  const ::synapse::msgs::Header& _internal_header() const;
  ::synapse::msgs::Header* _internal_mutable_header();
  public:
  void unsafe_arena_set_allocated_header(
      ::synapse::msgs::Header* header);
  ::synapse::msgs::Header* unsafe_arena_release_header();

  // .synapse.msgs.PoseWithCovariance pose = 3;
  bool has_pose() const;
  private:
  bool _internal_has_pose() const;
  public:
  void clear_pose();
  const ::synapse::msgs::PoseWithCovariance& pose() const;
  ::synapse::msgs::PoseWithCovariance* release_pose();
  ::synapse::msgs::PoseWithCovariance* mutable_pose();
  void set_allocated_pose(::synapse::msgs::PoseWithCovariance* pose);
  private:
  const ::synapse::msgs::PoseWithCovariance& _internal_pose() const;
  ::synapse::msgs::PoseWithCovariance* _internal_mutable_pose();
  public:
  void unsafe_arena_set_allocated_pose(
      ::synapse::msgs::PoseWithCovariance* pose);
  ::synapse::msgs::PoseWithCovariance* unsafe_arena_release_pose();

  // .synapse.msgs.TwistWithCovariance twist = 4;
  bool has_twist() const;
  private:
  bool _internal_has_twist() const;
  public:
  void clear_twist();
  const ::synapse::msgs::TwistWithCovariance& twist() const;
  ::synapse::msgs::TwistWithCovariance* release_twist();
  ::synapse::msgs::TwistWithCovariance* mutable_twist();
  void set_allocated_twist(::synapse::msgs::TwistWithCovariance* twist);
  private:
  const ::synapse::msgs::TwistWithCovariance& _internal_twist() const;
  ::synapse::msgs::TwistWithCovariance* _internal_mutable_twist();
  public:
  void unsafe_arena_set_allocated_twist(
      ::synapse::msgs::TwistWithCovariance* twist);
  ::synapse::msgs::TwistWithCovariance* unsafe_arena_release_twist();

  // @@protoc_insertion_point(class_scope:synapse.msgs.Odometry)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr child_frame_id_;
  ::synapse::msgs::Header* header_;
  ::synapse::msgs::PoseWithCovariance* pose_;
  ::synapse::msgs::TwistWithCovariance* twist_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_odometry_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Odometry

// .synapse.msgs.Header header = 1;
inline bool Odometry::_internal_has_header() const {
  return this != internal_default_instance() && header_ != nullptr;
}
inline bool Odometry::has_header() const {
  return _internal_has_header();
}
inline const ::synapse::msgs::Header& Odometry::_internal_header() const {
  const ::synapse::msgs::Header* p = header_;
  return p != nullptr ? *p : *reinterpret_cast<const ::synapse::msgs::Header*>(
      &::synapse::msgs::_Header_default_instance_);
}
inline const ::synapse::msgs::Header& Odometry::header() const {
  // @@protoc_insertion_point(field_get:synapse.msgs.Odometry.header)
  return _internal_header();
}
inline void Odometry::unsafe_arena_set_allocated_header(
    ::synapse::msgs::Header* header) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(header_);
  }
  header_ = header;
  if (header) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:synapse.msgs.Odometry.header)
}
inline ::synapse::msgs::Header* Odometry::release_header() {
  auto temp = unsafe_arena_release_header();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::synapse::msgs::Header* Odometry::unsafe_arena_release_header() {
  // @@protoc_insertion_point(field_release:synapse.msgs.Odometry.header)
  
  ::synapse::msgs::Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::synapse::msgs::Header* Odometry::_internal_mutable_header() {
  
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::synapse::msgs::Header>(GetArena());
    header_ = p;
  }
  return header_;
}
inline ::synapse::msgs::Header* Odometry::mutable_header() {
  // @@protoc_insertion_point(field_mutable:synapse.msgs.Odometry.header)
  return _internal_mutable_header();
}
inline void Odometry::set_allocated_header(::synapse::msgs::Header* header) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(header_);
  }
  if (header) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(header)->GetArena();
    if (message_arena != submessage_arena) {
      header = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, header, submessage_arena);
    }
    
  } else {
    
  }
  header_ = header;
  // @@protoc_insertion_point(field_set_allocated:synapse.msgs.Odometry.header)
}

// string child_frame_id = 2;
inline void Odometry::clear_child_frame_id() {
  child_frame_id_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& Odometry::child_frame_id() const {
  // @@protoc_insertion_point(field_get:synapse.msgs.Odometry.child_frame_id)
  return _internal_child_frame_id();
}
inline void Odometry::set_child_frame_id(const std::string& value) {
  _internal_set_child_frame_id(value);
  // @@protoc_insertion_point(field_set:synapse.msgs.Odometry.child_frame_id)
}
inline std::string* Odometry::mutable_child_frame_id() {
  // @@protoc_insertion_point(field_mutable:synapse.msgs.Odometry.child_frame_id)
  return _internal_mutable_child_frame_id();
}
inline const std::string& Odometry::_internal_child_frame_id() const {
  return child_frame_id_.Get();
}
inline void Odometry::_internal_set_child_frame_id(const std::string& value) {
  
  child_frame_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void Odometry::set_child_frame_id(std::string&& value) {
  
  child_frame_id_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:synapse.msgs.Odometry.child_frame_id)
}
inline void Odometry::set_child_frame_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  child_frame_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:synapse.msgs.Odometry.child_frame_id)
}
inline void Odometry::set_child_frame_id(const char* value,
    size_t size) {
  
  child_frame_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:synapse.msgs.Odometry.child_frame_id)
}
inline std::string* Odometry::_internal_mutable_child_frame_id() {
  
  return child_frame_id_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* Odometry::release_child_frame_id() {
  // @@protoc_insertion_point(field_release:synapse.msgs.Odometry.child_frame_id)
  return child_frame_id_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Odometry::set_allocated_child_frame_id(std::string* child_frame_id) {
  if (child_frame_id != nullptr) {
    
  } else {
    
  }
  child_frame_id_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), child_frame_id,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:synapse.msgs.Odometry.child_frame_id)
}
inline std::string* Odometry::unsafe_arena_release_child_frame_id() {
  // @@protoc_insertion_point(field_unsafe_arena_release:synapse.msgs.Odometry.child_frame_id)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return child_frame_id_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void Odometry::unsafe_arena_set_allocated_child_frame_id(
    std::string* child_frame_id) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (child_frame_id != nullptr) {
    
  } else {
    
  }
  child_frame_id_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      child_frame_id, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:synapse.msgs.Odometry.child_frame_id)
}

// .synapse.msgs.PoseWithCovariance pose = 3;
inline bool Odometry::_internal_has_pose() const {
  return this != internal_default_instance() && pose_ != nullptr;
}
inline bool Odometry::has_pose() const {
  return _internal_has_pose();
}
inline const ::synapse::msgs::PoseWithCovariance& Odometry::_internal_pose() const {
  const ::synapse::msgs::PoseWithCovariance* p = pose_;
  return p != nullptr ? *p : *reinterpret_cast<const ::synapse::msgs::PoseWithCovariance*>(
      &::synapse::msgs::_PoseWithCovariance_default_instance_);
}
inline const ::synapse::msgs::PoseWithCovariance& Odometry::pose() const {
  // @@protoc_insertion_point(field_get:synapse.msgs.Odometry.pose)
  return _internal_pose();
}
inline void Odometry::unsafe_arena_set_allocated_pose(
    ::synapse::msgs::PoseWithCovariance* pose) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(pose_);
  }
  pose_ = pose;
  if (pose) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:synapse.msgs.Odometry.pose)
}
inline ::synapse::msgs::PoseWithCovariance* Odometry::release_pose() {
  auto temp = unsafe_arena_release_pose();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::synapse::msgs::PoseWithCovariance* Odometry::unsafe_arena_release_pose() {
  // @@protoc_insertion_point(field_release:synapse.msgs.Odometry.pose)
  
  ::synapse::msgs::PoseWithCovariance* temp = pose_;
  pose_ = nullptr;
  return temp;
}
inline ::synapse::msgs::PoseWithCovariance* Odometry::_internal_mutable_pose() {
  
  if (pose_ == nullptr) {
    auto* p = CreateMaybeMessage<::synapse::msgs::PoseWithCovariance>(GetArena());
    pose_ = p;
  }
  return pose_;
}
inline ::synapse::msgs::PoseWithCovariance* Odometry::mutable_pose() {
  // @@protoc_insertion_point(field_mutable:synapse.msgs.Odometry.pose)
  return _internal_mutable_pose();
}
inline void Odometry::set_allocated_pose(::synapse::msgs::PoseWithCovariance* pose) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(pose_);
  }
  if (pose) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(pose)->GetArena();
    if (message_arena != submessage_arena) {
      pose = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, pose, submessage_arena);
    }
    
  } else {
    
  }
  pose_ = pose;
  // @@protoc_insertion_point(field_set_allocated:synapse.msgs.Odometry.pose)
}

// .synapse.msgs.TwistWithCovariance twist = 4;
inline bool Odometry::_internal_has_twist() const {
  return this != internal_default_instance() && twist_ != nullptr;
}
inline bool Odometry::has_twist() const {
  return _internal_has_twist();
}
inline const ::synapse::msgs::TwistWithCovariance& Odometry::_internal_twist() const {
  const ::synapse::msgs::TwistWithCovariance* p = twist_;
  return p != nullptr ? *p : *reinterpret_cast<const ::synapse::msgs::TwistWithCovariance*>(
      &::synapse::msgs::_TwistWithCovariance_default_instance_);
}
inline const ::synapse::msgs::TwistWithCovariance& Odometry::twist() const {
  // @@protoc_insertion_point(field_get:synapse.msgs.Odometry.twist)
  return _internal_twist();
}
inline void Odometry::unsafe_arena_set_allocated_twist(
    ::synapse::msgs::TwistWithCovariance* twist) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(twist_);
  }
  twist_ = twist;
  if (twist) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:synapse.msgs.Odometry.twist)
}
inline ::synapse::msgs::TwistWithCovariance* Odometry::release_twist() {
  auto temp = unsafe_arena_release_twist();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::synapse::msgs::TwistWithCovariance* Odometry::unsafe_arena_release_twist() {
  // @@protoc_insertion_point(field_release:synapse.msgs.Odometry.twist)
  
  ::synapse::msgs::TwistWithCovariance* temp = twist_;
  twist_ = nullptr;
  return temp;
}
inline ::synapse::msgs::TwistWithCovariance* Odometry::_internal_mutable_twist() {
  
  if (twist_ == nullptr) {
    auto* p = CreateMaybeMessage<::synapse::msgs::TwistWithCovariance>(GetArena());
    twist_ = p;
  }
  return twist_;
}
inline ::synapse::msgs::TwistWithCovariance* Odometry::mutable_twist() {
  // @@protoc_insertion_point(field_mutable:synapse.msgs.Odometry.twist)
  return _internal_mutable_twist();
}
inline void Odometry::set_allocated_twist(::synapse::msgs::TwistWithCovariance* twist) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(twist_);
  }
  if (twist) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(twist)->GetArena();
    if (message_arena != submessage_arena) {
      twist = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, twist, submessage_arena);
    }
    
  } else {
    
  }
  twist_ = twist;
  // @@protoc_insertion_point(field_set_allocated:synapse.msgs.Odometry.twist)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace synapse

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_odometry_2eproto