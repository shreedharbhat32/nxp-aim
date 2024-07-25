// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: imu.proto

#include "imu.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_header_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Header_header_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_quaternion_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Quaternion_quaternion_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_vector3_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Vector3_vector3_2eproto;
namespace synapse {
namespace msgs {
class ImuDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Imu> _instance;
} _Imu_default_instance_;
}  // namespace msgs
}  // namespace synapse
static void InitDefaultsscc_info_Imu_imu_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::synapse::msgs::_Imu_default_instance_;
    new (ptr) ::synapse::msgs::Imu();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::synapse::msgs::Imu::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<3> scc_info_Imu_imu_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 3, 0, InitDefaultsscc_info_Imu_imu_2eproto}, {
      &scc_info_Header_header_2eproto.base,
      &scc_info_Quaternion_quaternion_2eproto.base,
      &scc_info_Vector3_vector3_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_imu_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_imu_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_imu_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_imu_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::synapse::msgs::Imu, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::synapse::msgs::Imu, header_),
  PROTOBUF_FIELD_OFFSET(::synapse::msgs::Imu, orientation_),
  PROTOBUF_FIELD_OFFSET(::synapse::msgs::Imu, orientation_covariance_),
  PROTOBUF_FIELD_OFFSET(::synapse::msgs::Imu, angular_velocity_),
  PROTOBUF_FIELD_OFFSET(::synapse::msgs::Imu, angular_velocity_covariance_),
  PROTOBUF_FIELD_OFFSET(::synapse::msgs::Imu, linear_acceleration_),
  PROTOBUF_FIELD_OFFSET(::synapse::msgs::Imu, linear_acceleration_covariance_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::synapse::msgs::Imu)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::synapse::msgs::_Imu_default_instance_),
};

const char descriptor_table_protodef_imu_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\timu.proto\022\014synapse.msgs\032\014header.proto\032"
  "\rvector3.proto\032\020quaternion.proto\"\254\002\n\003Imu"
  "\022$\n\006header\030\001 \001(\0132\024.synapse.msgs.Header\022-"
  "\n\013orientation\030\002 \001(\0132\030.synapse.msgs.Quate"
  "rnion\022\036\n\026orientation_covariance\030\003 \003(\001\022/\n"
  "\020angular_velocity\030\004 \001(\0132\025.synapse.msgs.V"
  "ector3\022#\n\033angular_velocity_covariance\030\005 "
  "\003(\001\0222\n\023linear_acceleration\030\006 \001(\0132\025.synap"
  "se.msgs.Vector3\022&\n\036linear_acceleration_c"
  "ovariance\030\007 \003(\001b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_imu_2eproto_deps[3] = {
  &::descriptor_table_header_2eproto,
  &::descriptor_table_quaternion_2eproto,
  &::descriptor_table_vector3_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_imu_2eproto_sccs[1] = {
  &scc_info_Imu_imu_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_imu_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_imu_2eproto = {
  false, false, descriptor_table_protodef_imu_2eproto, "imu.proto", 383,
  &descriptor_table_imu_2eproto_once, descriptor_table_imu_2eproto_sccs, descriptor_table_imu_2eproto_deps, 1, 3,
  schemas, file_default_instances, TableStruct_imu_2eproto::offsets,
  file_level_metadata_imu_2eproto, 1, file_level_enum_descriptors_imu_2eproto, file_level_service_descriptors_imu_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_imu_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_imu_2eproto)), true);
namespace synapse {
namespace msgs {

// ===================================================================

void Imu::InitAsDefaultInstance() {
  ::synapse::msgs::_Imu_default_instance_._instance.get_mutable()->header_ = const_cast< ::synapse::msgs::Header*>(
      ::synapse::msgs::Header::internal_default_instance());
  ::synapse::msgs::_Imu_default_instance_._instance.get_mutable()->orientation_ = const_cast< ::synapse::msgs::Quaternion*>(
      ::synapse::msgs::Quaternion::internal_default_instance());
  ::synapse::msgs::_Imu_default_instance_._instance.get_mutable()->angular_velocity_ = const_cast< ::synapse::msgs::Vector3*>(
      ::synapse::msgs::Vector3::internal_default_instance());
  ::synapse::msgs::_Imu_default_instance_._instance.get_mutable()->linear_acceleration_ = const_cast< ::synapse::msgs::Vector3*>(
      ::synapse::msgs::Vector3::internal_default_instance());
}
class Imu::_Internal {
 public:
  static const ::synapse::msgs::Header& header(const Imu* msg);
  static const ::synapse::msgs::Quaternion& orientation(const Imu* msg);
  static const ::synapse::msgs::Vector3& angular_velocity(const Imu* msg);
  static const ::synapse::msgs::Vector3& linear_acceleration(const Imu* msg);
};

const ::synapse::msgs::Header&
Imu::_Internal::header(const Imu* msg) {
  return *msg->header_;
}
const ::synapse::msgs::Quaternion&
Imu::_Internal::orientation(const Imu* msg) {
  return *msg->orientation_;
}
const ::synapse::msgs::Vector3&
Imu::_Internal::angular_velocity(const Imu* msg) {
  return *msg->angular_velocity_;
}
const ::synapse::msgs::Vector3&
Imu::_Internal::linear_acceleration(const Imu* msg) {
  return *msg->linear_acceleration_;
}
void Imu::clear_header() {
  if (GetArena() == nullptr && header_ != nullptr) {
    delete header_;
  }
  header_ = nullptr;
}
void Imu::clear_orientation() {
  if (GetArena() == nullptr && orientation_ != nullptr) {
    delete orientation_;
  }
  orientation_ = nullptr;
}
void Imu::clear_angular_velocity() {
  if (GetArena() == nullptr && angular_velocity_ != nullptr) {
    delete angular_velocity_;
  }
  angular_velocity_ = nullptr;
}
void Imu::clear_linear_acceleration() {
  if (GetArena() == nullptr && linear_acceleration_ != nullptr) {
    delete linear_acceleration_;
  }
  linear_acceleration_ = nullptr;
}
Imu::Imu(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  orientation_covariance_(arena),
  angular_velocity_covariance_(arena),
  linear_acceleration_covariance_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:synapse.msgs.Imu)
}
Imu::Imu(const Imu& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      orientation_covariance_(from.orientation_covariance_),
      angular_velocity_covariance_(from.angular_velocity_covariance_),
      linear_acceleration_covariance_(from.linear_acceleration_covariance_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_header()) {
    header_ = new ::synapse::msgs::Header(*from.header_);
  } else {
    header_ = nullptr;
  }
  if (from._internal_has_orientation()) {
    orientation_ = new ::synapse::msgs::Quaternion(*from.orientation_);
  } else {
    orientation_ = nullptr;
  }
  if (from._internal_has_angular_velocity()) {
    angular_velocity_ = new ::synapse::msgs::Vector3(*from.angular_velocity_);
  } else {
    angular_velocity_ = nullptr;
  }
  if (from._internal_has_linear_acceleration()) {
    linear_acceleration_ = new ::synapse::msgs::Vector3(*from.linear_acceleration_);
  } else {
    linear_acceleration_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:synapse.msgs.Imu)
}

void Imu::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Imu_imu_2eproto.base);
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&linear_acceleration_) -
      reinterpret_cast<char*>(&header_)) + sizeof(linear_acceleration_));
}

Imu::~Imu() {
  // @@protoc_insertion_point(destructor:synapse.msgs.Imu)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Imu::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete header_;
  if (this != internal_default_instance()) delete orientation_;
  if (this != internal_default_instance()) delete angular_velocity_;
  if (this != internal_default_instance()) delete linear_acceleration_;
}

void Imu::ArenaDtor(void* object) {
  Imu* _this = reinterpret_cast< Imu* >(object);
  (void)_this;
}
void Imu::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Imu::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Imu& Imu::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Imu_imu_2eproto.base);
  return *internal_default_instance();
}


void Imu::Clear() {
// @@protoc_insertion_point(message_clear_start:synapse.msgs.Imu)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  orientation_covariance_.Clear();
  angular_velocity_covariance_.Clear();
  linear_acceleration_covariance_.Clear();
  if (GetArena() == nullptr && header_ != nullptr) {
    delete header_;
  }
  header_ = nullptr;
  if (GetArena() == nullptr && orientation_ != nullptr) {
    delete orientation_;
  }
  orientation_ = nullptr;
  if (GetArena() == nullptr && angular_velocity_ != nullptr) {
    delete angular_velocity_;
  }
  angular_velocity_ = nullptr;
  if (GetArena() == nullptr && linear_acceleration_ != nullptr) {
    delete linear_acceleration_;
  }
  linear_acceleration_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Imu::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .synapse.msgs.Header header = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_header(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .synapse.msgs.Quaternion orientation = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_orientation(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated double orientation_covariance = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedDoubleParser(_internal_mutable_orientation_covariance(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 25) {
          _internal_add_orientation_covariance(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr));
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // .synapse.msgs.Vector3 angular_velocity = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_angular_velocity(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated double angular_velocity_covariance = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedDoubleParser(_internal_mutable_angular_velocity_covariance(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 41) {
          _internal_add_angular_velocity_covariance(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr));
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // .synapse.msgs.Vector3 linear_acceleration = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          ptr = ctx->ParseMessage(_internal_mutable_linear_acceleration(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated double linear_acceleration_covariance = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedDoubleParser(_internal_mutable_linear_acceleration_covariance(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 57) {
          _internal_add_linear_acceleration_covariance(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr));
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Imu::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:synapse.msgs.Imu)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .synapse.msgs.Header header = 1;
  if (this->has_header()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::header(this), target, stream);
  }

  // .synapse.msgs.Quaternion orientation = 2;
  if (this->has_orientation()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::orientation(this), target, stream);
  }

  // repeated double orientation_covariance = 3;
  if (this->_internal_orientation_covariance_size() > 0) {
    target = stream->WriteFixedPacked(3, _internal_orientation_covariance(), target);
  }

  // .synapse.msgs.Vector3 angular_velocity = 4;
  if (this->has_angular_velocity()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        4, _Internal::angular_velocity(this), target, stream);
  }

  // repeated double angular_velocity_covariance = 5;
  if (this->_internal_angular_velocity_covariance_size() > 0) {
    target = stream->WriteFixedPacked(5, _internal_angular_velocity_covariance(), target);
  }

  // .synapse.msgs.Vector3 linear_acceleration = 6;
  if (this->has_linear_acceleration()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        6, _Internal::linear_acceleration(this), target, stream);
  }

  // repeated double linear_acceleration_covariance = 7;
  if (this->_internal_linear_acceleration_covariance_size() > 0) {
    target = stream->WriteFixedPacked(7, _internal_linear_acceleration_covariance(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:synapse.msgs.Imu)
  return target;
}

size_t Imu::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:synapse.msgs.Imu)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated double orientation_covariance = 3;
  {
    unsigned int count = static_cast<unsigned int>(this->_internal_orientation_covariance_size());
    size_t data_size = 8UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _orientation_covariance_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // repeated double angular_velocity_covariance = 5;
  {
    unsigned int count = static_cast<unsigned int>(this->_internal_angular_velocity_covariance_size());
    size_t data_size = 8UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _angular_velocity_covariance_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // repeated double linear_acceleration_covariance = 7;
  {
    unsigned int count = static_cast<unsigned int>(this->_internal_linear_acceleration_covariance_size());
    size_t data_size = 8UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _linear_acceleration_covariance_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // .synapse.msgs.Header header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *header_);
  }

  // .synapse.msgs.Quaternion orientation = 2;
  if (this->has_orientation()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *orientation_);
  }

  // .synapse.msgs.Vector3 angular_velocity = 4;
  if (this->has_angular_velocity()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *angular_velocity_);
  }

  // .synapse.msgs.Vector3 linear_acceleration = 6;
  if (this->has_linear_acceleration()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *linear_acceleration_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Imu::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:synapse.msgs.Imu)
  GOOGLE_DCHECK_NE(&from, this);
  const Imu* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Imu>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:synapse.msgs.Imu)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:synapse.msgs.Imu)
    MergeFrom(*source);
  }
}

void Imu::MergeFrom(const Imu& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:synapse.msgs.Imu)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  orientation_covariance_.MergeFrom(from.orientation_covariance_);
  angular_velocity_covariance_.MergeFrom(from.angular_velocity_covariance_);
  linear_acceleration_covariance_.MergeFrom(from.linear_acceleration_covariance_);
  if (from.has_header()) {
    _internal_mutable_header()->::synapse::msgs::Header::MergeFrom(from._internal_header());
  }
  if (from.has_orientation()) {
    _internal_mutable_orientation()->::synapse::msgs::Quaternion::MergeFrom(from._internal_orientation());
  }
  if (from.has_angular_velocity()) {
    _internal_mutable_angular_velocity()->::synapse::msgs::Vector3::MergeFrom(from._internal_angular_velocity());
  }
  if (from.has_linear_acceleration()) {
    _internal_mutable_linear_acceleration()->::synapse::msgs::Vector3::MergeFrom(from._internal_linear_acceleration());
  }
}

void Imu::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:synapse.msgs.Imu)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Imu::CopyFrom(const Imu& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:synapse.msgs.Imu)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Imu::IsInitialized() const {
  return true;
}

void Imu::InternalSwap(Imu* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  orientation_covariance_.InternalSwap(&other->orientation_covariance_);
  angular_velocity_covariance_.InternalSwap(&other->angular_velocity_covariance_);
  linear_acceleration_covariance_.InternalSwap(&other->linear_acceleration_covariance_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Imu, linear_acceleration_)
      + sizeof(Imu::linear_acceleration_)
      - PROTOBUF_FIELD_OFFSET(Imu, header_)>(
          reinterpret_cast<char*>(&header_),
          reinterpret_cast<char*>(&other->header_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Imu::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace synapse
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::synapse::msgs::Imu* Arena::CreateMaybeMessage< ::synapse::msgs::Imu >(Arena* arena) {
  return Arena::CreateMessageInternal< ::synapse::msgs::Imu >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
