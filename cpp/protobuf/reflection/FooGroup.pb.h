// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: FooGroup.proto

#ifndef PROTOBUF_FooGroup_2eproto__INCLUDED
#define PROTOBUF_FooGroup_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace tutorial {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_FooGroup_2eproto();
void protobuf_AssignDesc_FooGroup_2eproto();
void protobuf_ShutdownFile_FooGroup_2eproto();

class Feature;
class FooGroup;

// ===================================================================

class Feature : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tutorial.Feature)
                                                    */
{
 public:
  Feature();
  virtual ~Feature();

  Feature(const Feature& from);

  inline Feature& operator=(const Feature& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Feature& default_instance();

  void Swap(Feature* other);

  // implements Message ----------------------------------------------

  inline Feature* New() const { return New(NULL); }

  Feature* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Feature& from);
  void MergeFrom(const Feature& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }

 private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Feature* other);

 private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }

 public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string key = 1;
  void clear_key();
  static const int kKeyFieldNumber = 1;
  const ::std::string& key() const;
  void set_key(const ::std::string& value);
  void set_key(const char* value);
  void set_key(const char* value, size_t size);
  ::std::string* mutable_key();
  ::std::string* release_key();
  void set_allocated_key(::std::string* key);

  // optional string val = 2;
  void clear_val();
  static const int kValFieldNumber = 2;
  const ::std::string& val() const;
  void set_val(const ::std::string& value);
  void set_val(const char* value);
  void set_val(const char* value, size_t size);
  ::std::string* mutable_val();
  ::std::string* release_val();
  void set_allocated_val(::std::string* val);

  // @@protoc_insertion_point(class_scope:tutorial.Feature)
 private:
  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr key_;
  ::google::protobuf::internal::ArenaStringPtr val_;
  mutable int _cached_size_;
  friend void protobuf_AddDesc_FooGroup_2eproto();
  friend void protobuf_AssignDesc_FooGroup_2eproto();
  friend void protobuf_ShutdownFile_FooGroup_2eproto();

  void InitAsDefaultInstance();
  static Feature* default_instance_;
};
// -------------------------------------------------------------------

class FooGroup : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tutorial.FooGroup)
                                                     */
{
 public:
  FooGroup();
  virtual ~FooGroup();

  FooGroup(const FooGroup& from);

  inline FooGroup& operator=(const FooGroup& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const FooGroup& default_instance();

  void Swap(FooGroup* other);

  // implements Message ----------------------------------------------

  inline FooGroup* New() const { return New(NULL); }

  FooGroup* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FooGroup& from);
  void MergeFrom(const FooGroup& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }

 private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(FooGroup* other);

 private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }

 public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .tutorial.Feature foo = 1;
  bool has_foo() const;
  void clear_foo();
  static const int kFooFieldNumber = 1;
  const ::tutorial::Feature& foo() const;
  ::tutorial::Feature* mutable_foo();
  ::tutorial::Feature* release_foo();
  void set_allocated_foo(::tutorial::Feature* foo);

  // optional .tutorial.Feature bar = 2;
  bool has_bar() const;
  void clear_bar();
  static const int kBarFieldNumber = 2;
  const ::tutorial::Feature& bar() const;
  ::tutorial::Feature* mutable_bar();
  ::tutorial::Feature* release_bar();
  void set_allocated_bar(::tutorial::Feature* bar);

  // optional .tutorial.Feature baz = 3;
  bool has_baz() const;
  void clear_baz();
  static const int kBazFieldNumber = 3;
  const ::tutorial::Feature& baz() const;
  ::tutorial::Feature* mutable_baz();
  ::tutorial::Feature* release_baz();
  void set_allocated_baz(::tutorial::Feature* baz);

  // @@protoc_insertion_point(class_scope:tutorial.FooGroup)
 private:
  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::tutorial::Feature* foo_;
  ::tutorial::Feature* bar_;
  ::tutorial::Feature* baz_;
  mutable int _cached_size_;
  friend void protobuf_AddDesc_FooGroup_2eproto();
  friend void protobuf_AssignDesc_FooGroup_2eproto();
  friend void protobuf_ShutdownFile_FooGroup_2eproto();

  void InitAsDefaultInstance();
  static FooGroup* default_instance_;
};
// ===================================================================

// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Feature

// optional string key = 1;
inline void Feature::clear_key() {
  key_.ClearToEmptyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Feature::key() const {
  // @@protoc_insertion_point(field_get:tutorial.Feature.key)
  return key_.GetNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Feature::set_key(const ::std::string& value) {
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
                  value);
  // @@protoc_insertion_point(field_set:tutorial.Feature.key)
}
inline void Feature::set_key(const char* value) {
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
                  ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tutorial.Feature.key)
}
inline void Feature::set_key(const char* value, size_t size) {
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
                  ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tutorial.Feature.key)
}
inline ::std::string* Feature::mutable_key() {
  // @@protoc_insertion_point(field_mutable:tutorial.Feature.key)
  return key_.MutableNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Feature::release_key() {
  // @@protoc_insertion_point(field_release:tutorial.Feature.key)

  return key_.ReleaseNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Feature::set_allocated_key(::std::string* key) {
  if (key != NULL) {
  } else {
  }
  key_.SetAllocatedNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:tutorial.Feature.key)
}

// optional string val = 2;
inline void Feature::clear_val() {
  val_.ClearToEmptyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Feature::val() const {
  // @@protoc_insertion_point(field_get:tutorial.Feature.val)
  return val_.GetNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Feature::set_val(const ::std::string& value) {
  val_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
                  value);
  // @@protoc_insertion_point(field_set:tutorial.Feature.val)
}
inline void Feature::set_val(const char* value) {
  val_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
                  ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tutorial.Feature.val)
}
inline void Feature::set_val(const char* value, size_t size) {
  val_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
                  ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tutorial.Feature.val)
}
inline ::std::string* Feature::mutable_val() {
  // @@protoc_insertion_point(field_mutable:tutorial.Feature.val)
  return val_.MutableNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Feature::release_val() {
  // @@protoc_insertion_point(field_release:tutorial.Feature.val)

  return val_.ReleaseNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Feature::set_allocated_val(::std::string* val) {
  if (val != NULL) {
  } else {
  }
  val_.SetAllocatedNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited(), val);
  // @@protoc_insertion_point(field_set_allocated:tutorial.Feature.val)
}

// -------------------------------------------------------------------

// FooGroup

// optional .tutorial.Feature foo = 1;
inline bool FooGroup::has_foo() const {
  return !_is_default_instance_ && foo_ != NULL;
}
inline void FooGroup::clear_foo() {
  if (GetArenaNoVirtual() == NULL && foo_ != NULL) delete foo_;
  foo_ = NULL;
}
inline const ::tutorial::Feature& FooGroup::foo() const {
  // @@protoc_insertion_point(field_get:tutorial.FooGroup.foo)
  return foo_ != NULL ? *foo_ : *default_instance_->foo_;
}
inline ::tutorial::Feature* FooGroup::mutable_foo() {
  if (foo_ == NULL) {
    foo_ = new ::tutorial::Feature;
  }
  // @@protoc_insertion_point(field_mutable:tutorial.FooGroup.foo)
  return foo_;
}
inline ::tutorial::Feature* FooGroup::release_foo() {
  // @@protoc_insertion_point(field_release:tutorial.FooGroup.foo)

  ::tutorial::Feature* temp = foo_;
  foo_ = NULL;
  return temp;
}
inline void FooGroup::set_allocated_foo(::tutorial::Feature* foo) {
  delete foo_;
  foo_ = foo;
  if (foo) {
  } else {
  }
  // @@protoc_insertion_point(field_set_allocated:tutorial.FooGroup.foo)
}

// optional .tutorial.Feature bar = 2;
inline bool FooGroup::has_bar() const {
  return !_is_default_instance_ && bar_ != NULL;
}
inline void FooGroup::clear_bar() {
  if (GetArenaNoVirtual() == NULL && bar_ != NULL) delete bar_;
  bar_ = NULL;
}
inline const ::tutorial::Feature& FooGroup::bar() const {
  // @@protoc_insertion_point(field_get:tutorial.FooGroup.bar)
  return bar_ != NULL ? *bar_ : *default_instance_->bar_;
}
inline ::tutorial::Feature* FooGroup::mutable_bar() {
  if (bar_ == NULL) {
    bar_ = new ::tutorial::Feature;
  }
  // @@protoc_insertion_point(field_mutable:tutorial.FooGroup.bar)
  return bar_;
}
inline ::tutorial::Feature* FooGroup::release_bar() {
  // @@protoc_insertion_point(field_release:tutorial.FooGroup.bar)

  ::tutorial::Feature* temp = bar_;
  bar_ = NULL;
  return temp;
}
inline void FooGroup::set_allocated_bar(::tutorial::Feature* bar) {
  delete bar_;
  bar_ = bar;
  if (bar) {
  } else {
  }
  // @@protoc_insertion_point(field_set_allocated:tutorial.FooGroup.bar)
}

// optional .tutorial.Feature baz = 3;
inline bool FooGroup::has_baz() const {
  return !_is_default_instance_ && baz_ != NULL;
}
inline void FooGroup::clear_baz() {
  if (GetArenaNoVirtual() == NULL && baz_ != NULL) delete baz_;
  baz_ = NULL;
}
inline const ::tutorial::Feature& FooGroup::baz() const {
  // @@protoc_insertion_point(field_get:tutorial.FooGroup.baz)
  return baz_ != NULL ? *baz_ : *default_instance_->baz_;
}
inline ::tutorial::Feature* FooGroup::mutable_baz() {
  if (baz_ == NULL) {
    baz_ = new ::tutorial::Feature;
  }
  // @@protoc_insertion_point(field_mutable:tutorial.FooGroup.baz)
  return baz_;
}
inline ::tutorial::Feature* FooGroup::release_baz() {
  // @@protoc_insertion_point(field_release:tutorial.FooGroup.baz)

  ::tutorial::Feature* temp = baz_;
  baz_ = NULL;
  return temp;
}
inline void FooGroup::set_allocated_baz(::tutorial::Feature* baz) {
  delete baz_;
  baz_ = baz;
  if (baz) {
  } else {
  }
  // @@protoc_insertion_point(field_set_allocated:tutorial.FooGroup.baz)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// @@protoc_insertion_point(namespace_scope)

}  // namespace tutorial

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_FooGroup_2eproto__INCLUDED
