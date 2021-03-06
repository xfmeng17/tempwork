// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "test.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace utf8 {

namespace {

const ::google::protobuf::Descriptor* test_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  test_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_test_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_test_2eproto() {
  protobuf_AddDesc_test_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "test.proto");
  GOOGLE_CHECK(file != NULL);
  test_descriptor_ = file->message_type(0);
  static const int test_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(test, s1_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(test, s2_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(test, s3_),
  };
  test_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      test_descriptor_,
      test::default_instance_,
      test_offsets_,
      -1,
      -1,
      -1,
      sizeof(test),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(test, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(test, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_test_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      test_descriptor_, &test::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_test_2eproto() {
  delete test::default_instance_;
  delete test_reflection_;
}

void protobuf_AddDesc_test_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_test_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\ntest.proto\022\004utf8\"*\n\004test\022\n\n\002s1\030\001 \001(\t\022\n"
    "\n\002s2\030\002 \001(\t\022\n\n\002s3\030\003 \001(\014b\006proto3", 70);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "test.proto", &protobuf_RegisterTypes);
  test::default_instance_ = new test();
  test::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_test_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_test_2eproto {
  StaticDescriptorInitializer_test_2eproto() {
    protobuf_AddDesc_test_2eproto();
  }
} static_descriptor_initializer_test_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int test::kS1FieldNumber;
const int test::kS2FieldNumber;
const int test::kS3FieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

test::test()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:utf8.test)
}

void test::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

test::test(const test& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:utf8.test)
}

void test::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  s1_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  s2_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  s3_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

test::~test() {
  // @@protoc_insertion_point(destructor:utf8.test)
  SharedDtor();
}

void test::SharedDtor() {
  s1_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  s2_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  s3_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void test::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* test::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return test_descriptor_;
}

const test& test::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_test_2eproto();
  return *default_instance_;
}

test* test::default_instance_ = NULL;

test* test::New(::google::protobuf::Arena* arena) const {
  test* n = new test;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void test::Clear() {
// @@protoc_insertion_point(message_clear_start:utf8.test)
  s1_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  s2_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  s3_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool test::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:utf8.test)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string s1 = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_s1()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->s1().data(), this->s1().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "utf8.test.s1"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_s2;
        break;
      }

      // optional string s2 = 2;
      case 2: {
        if (tag == 18) {
         parse_s2:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_s2()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->s2().data(), this->s2().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "utf8.test.s2"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_s3;
        break;
      }

      // optional bytes s3 = 3;
      case 3: {
        if (tag == 26) {
         parse_s3:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_s3()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:utf8.test)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:utf8.test)
  return false;
#undef DO_
}

void test::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:utf8.test)
  // optional string s1 = 1;
  if (this->s1().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->s1().data(), this->s1().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "utf8.test.s1");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->s1(), output);
  }

  // optional string s2 = 2;
  if (this->s2().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->s2().data(), this->s2().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "utf8.test.s2");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->s2(), output);
  }

  // optional bytes s3 = 3;
  if (this->s3().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      3, this->s3(), output);
  }

  // @@protoc_insertion_point(serialize_end:utf8.test)
}

::google::protobuf::uint8* test::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:utf8.test)
  // optional string s1 = 1;
  if (this->s1().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->s1().data(), this->s1().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "utf8.test.s1");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->s1(), target);
  }

  // optional string s2 = 2;
  if (this->s2().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->s2().data(), this->s2().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "utf8.test.s2");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->s2(), target);
  }

  // optional bytes s3 = 3;
  if (this->s3().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        3, this->s3(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:utf8.test)
  return target;
}

int test::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:utf8.test)
  int total_size = 0;

  // optional string s1 = 1;
  if (this->s1().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->s1());
  }

  // optional string s2 = 2;
  if (this->s2().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->s2());
  }

  // optional bytes s3 = 3;
  if (this->s3().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->s3());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void test::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:utf8.test)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const test* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const test>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:utf8.test)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:utf8.test)
    MergeFrom(*source);
  }
}

void test::MergeFrom(const test& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:utf8.test)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.s1().size() > 0) {

    s1_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.s1_);
  }
  if (from.s2().size() > 0) {

    s2_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.s2_);
  }
  if (from.s3().size() > 0) {

    s3_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.s3_);
  }
}

void test::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:utf8.test)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void test::CopyFrom(const test& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:utf8.test)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool test::IsInitialized() const {

  return true;
}

void test::Swap(test* other) {
  if (other == this) return;
  InternalSwap(other);
}
void test::InternalSwap(test* other) {
  s1_.Swap(&other->s1_);
  s2_.Swap(&other->s2_);
  s3_.Swap(&other->s3_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata test::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = test_descriptor_;
  metadata.reflection = test_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// test

// optional string s1 = 1;
void test::clear_s1() {
  s1_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& test::s1() const {
  // @@protoc_insertion_point(field_get:utf8.test.s1)
  return s1_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void test::set_s1(const ::std::string& value) {
  
  s1_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:utf8.test.s1)
}
 void test::set_s1(const char* value) {
  
  s1_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:utf8.test.s1)
}
 void test::set_s1(const char* value, size_t size) {
  
  s1_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:utf8.test.s1)
}
 ::std::string* test::mutable_s1() {
  
  // @@protoc_insertion_point(field_mutable:utf8.test.s1)
  return s1_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* test::release_s1() {
  // @@protoc_insertion_point(field_release:utf8.test.s1)
  
  return s1_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void test::set_allocated_s1(::std::string* s1) {
  if (s1 != NULL) {
    
  } else {
    
  }
  s1_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), s1);
  // @@protoc_insertion_point(field_set_allocated:utf8.test.s1)
}

// optional string s2 = 2;
void test::clear_s2() {
  s2_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& test::s2() const {
  // @@protoc_insertion_point(field_get:utf8.test.s2)
  return s2_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void test::set_s2(const ::std::string& value) {
  
  s2_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:utf8.test.s2)
}
 void test::set_s2(const char* value) {
  
  s2_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:utf8.test.s2)
}
 void test::set_s2(const char* value, size_t size) {
  
  s2_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:utf8.test.s2)
}
 ::std::string* test::mutable_s2() {
  
  // @@protoc_insertion_point(field_mutable:utf8.test.s2)
  return s2_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* test::release_s2() {
  // @@protoc_insertion_point(field_release:utf8.test.s2)
  
  return s2_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void test::set_allocated_s2(::std::string* s2) {
  if (s2 != NULL) {
    
  } else {
    
  }
  s2_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), s2);
  // @@protoc_insertion_point(field_set_allocated:utf8.test.s2)
}

// optional bytes s3 = 3;
void test::clear_s3() {
  s3_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& test::s3() const {
  // @@protoc_insertion_point(field_get:utf8.test.s3)
  return s3_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void test::set_s3(const ::std::string& value) {
  
  s3_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:utf8.test.s3)
}
 void test::set_s3(const char* value) {
  
  s3_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:utf8.test.s3)
}
 void test::set_s3(const void* value, size_t size) {
  
  s3_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:utf8.test.s3)
}
 ::std::string* test::mutable_s3() {
  
  // @@protoc_insertion_point(field_mutable:utf8.test.s3)
  return s3_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* test::release_s3() {
  // @@protoc_insertion_point(field_release:utf8.test.s3)
  
  return s3_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void test::set_allocated_s3(::std::string* s3) {
  if (s3 != NULL) {
    
  } else {
    
  }
  s3_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), s3);
  // @@protoc_insertion_point(field_set_allocated:utf8.test.s3)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace utf8

// @@protoc_insertion_point(global_scope)
