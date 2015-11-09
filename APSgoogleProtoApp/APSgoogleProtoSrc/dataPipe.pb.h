// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dataPipe.proto

#ifndef PROTOBUF_dataPipe_2eproto__INCLUDED
#define PROTOBUF_dataPipe_2eproto__INCLUDED

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
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace detectorTest {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_dataPipe_2eproto();
void protobuf_AssignDesc_dataPipe_2eproto();
void protobuf_ShutdownFile_dataPipe_2eproto();

class MyMessage;

// ===================================================================

class MyMessage : public ::google::protobuf::Message {
 public:
  MyMessage();
  virtual ~MyMessage();

  MyMessage(const MyMessage& from);

  inline MyMessage& operator=(const MyMessage& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MyMessage& default_instance();

  void Swap(MyMessage* other);

  // implements Message ----------------------------------------------

  inline MyMessage* New() const { return New(NULL); }

  MyMessage* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MyMessage& from);
  void MergeFrom(const MyMessage& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(MyMessage* other);
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

  // optional int32 numDimData = 1;
  void clear_numdimdata();
  static const int kNumDimDataFieldNumber = 1;
  ::google::protobuf::int32 numdimdata() const;
  void set_numdimdata(::google::protobuf::int32 value);

  // optional string dimData = 2;
  void clear_dimdata();
  static const int kDimDataFieldNumber = 2;
  const ::std::string& dimdata() const;
  void set_dimdata(const ::std::string& value);
  void set_dimdata(const char* value);
  void set_dimdata(const char* value, size_t size);
  ::std::string* mutable_dimdata();
  ::std::string* release_dimdata();
  void set_allocated_dimdata(::std::string* dimdata);

  // optional string dataType = 3;
  void clear_datatype();
  static const int kDataTypeFieldNumber = 3;
  const ::std::string& datatype() const;
  void set_datatype(const ::std::string& value);
  void set_datatype(const char* value);
  void set_datatype(const char* value, size_t size);
  ::std::string* mutable_datatype();
  ::std::string* release_datatype();
  void set_allocated_datatype(::std::string* datatype);

  // optional bytes valuesData = 4;
  void clear_valuesdata();
  static const int kValuesDataFieldNumber = 4;
  const ::std::string& valuesdata() const;
  void set_valuesdata(const ::std::string& value);
  void set_valuesdata(const char* value);
  void set_valuesdata(const void* value, size_t size);
  ::std::string* mutable_valuesdata();
  ::std::string* release_valuesdata();
  void set_allocated_valuesdata(::std::string* valuesdata);

  // optional int32 numAttrs = 5;
  void clear_numattrs();
  static const int kNumAttrsFieldNumber = 5;
  ::google::protobuf::int32 numattrs() const;
  void set_numattrs(::google::protobuf::int32 value);

  // optional string nameAttrs = 6;
  void clear_nameattrs();
  static const int kNameAttrsFieldNumber = 6;
  const ::std::string& nameattrs() const;
  void set_nameattrs(const ::std::string& value);
  void set_nameattrs(const char* value);
  void set_nameattrs(const char* value, size_t size);
  ::std::string* mutable_nameattrs();
  ::std::string* release_nameattrs();
  void set_allocated_nameattrs(::std::string* nameattrs);

  // optional string typeAttrs = 7;
  void clear_typeattrs();
  static const int kTypeAttrsFieldNumber = 7;
  const ::std::string& typeattrs() const;
  void set_typeattrs(const ::std::string& value);
  void set_typeattrs(const char* value);
  void set_typeattrs(const char* value, size_t size);
  ::std::string* mutable_typeattrs();
  ::std::string* release_typeattrs();
  void set_allocated_typeattrs(::std::string* typeattrs);

  // optional bytes valuesAttrs = 8;
  void clear_valuesattrs();
  static const int kValuesAttrsFieldNumber = 8;
  const ::std::string& valuesattrs() const;
  void set_valuesattrs(const ::std::string& value);
  void set_valuesattrs(const char* value);
  void set_valuesattrs(const void* value, size_t size);
  ::std::string* mutable_valuesattrs();
  ::std::string* release_valuesattrs();
  void set_allocated_valuesattrs(::std::string* valuesattrs);

  // @@protoc_insertion_point(class_scope:detectorTest.MyMessage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr dimdata_;
  ::google::protobuf::internal::ArenaStringPtr datatype_;
  ::google::protobuf::int32 numdimdata_;
  ::google::protobuf::int32 numattrs_;
  ::google::protobuf::internal::ArenaStringPtr valuesdata_;
  ::google::protobuf::internal::ArenaStringPtr nameattrs_;
  ::google::protobuf::internal::ArenaStringPtr typeattrs_;
  ::google::protobuf::internal::ArenaStringPtr valuesattrs_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_dataPipe_2eproto();
  friend void protobuf_AssignDesc_dataPipe_2eproto();
  friend void protobuf_ShutdownFile_dataPipe_2eproto();

  void InitAsDefaultInstance();
  static MyMessage* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// MyMessage

// optional int32 numDimData = 1;
inline void MyMessage::clear_numdimdata() {
  numdimdata_ = 0;
}
inline ::google::protobuf::int32 MyMessage::numdimdata() const {
  // @@protoc_insertion_point(field_get:detectorTest.MyMessage.numDimData)
  return numdimdata_;
}
inline void MyMessage::set_numdimdata(::google::protobuf::int32 value) {
  
  numdimdata_ = value;
  // @@protoc_insertion_point(field_set:detectorTest.MyMessage.numDimData)
}

// optional string dimData = 2;
inline void MyMessage::clear_dimdata() {
  dimdata_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MyMessage::dimdata() const {
  // @@protoc_insertion_point(field_get:detectorTest.MyMessage.dimData)
  return dimdata_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MyMessage::set_dimdata(const ::std::string& value) {
  
  dimdata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:detectorTest.MyMessage.dimData)
}
inline void MyMessage::set_dimdata(const char* value) {
  
  dimdata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:detectorTest.MyMessage.dimData)
}
inline void MyMessage::set_dimdata(const char* value, size_t size) {
  
  dimdata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:detectorTest.MyMessage.dimData)
}
inline ::std::string* MyMessage::mutable_dimdata() {
  
  // @@protoc_insertion_point(field_mutable:detectorTest.MyMessage.dimData)
  return dimdata_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MyMessage::release_dimdata() {
  
  return dimdata_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MyMessage::set_allocated_dimdata(::std::string* dimdata) {
  if (dimdata != NULL) {
    
  } else {
    
  }
  dimdata_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), dimdata);
  // @@protoc_insertion_point(field_set_allocated:detectorTest.MyMessage.dimData)
}

// optional string dataType = 3;
inline void MyMessage::clear_datatype() {
  datatype_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MyMessage::datatype() const {
  // @@protoc_insertion_point(field_get:detectorTest.MyMessage.dataType)
  return datatype_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MyMessage::set_datatype(const ::std::string& value) {
  
  datatype_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:detectorTest.MyMessage.dataType)
}
inline void MyMessage::set_datatype(const char* value) {
  
  datatype_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:detectorTest.MyMessage.dataType)
}
inline void MyMessage::set_datatype(const char* value, size_t size) {
  
  datatype_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:detectorTest.MyMessage.dataType)
}
inline ::std::string* MyMessage::mutable_datatype() {
  
  // @@protoc_insertion_point(field_mutable:detectorTest.MyMessage.dataType)
  return datatype_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MyMessage::release_datatype() {
  
  return datatype_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MyMessage::set_allocated_datatype(::std::string* datatype) {
  if (datatype != NULL) {
    
  } else {
    
  }
  datatype_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), datatype);
  // @@protoc_insertion_point(field_set_allocated:detectorTest.MyMessage.dataType)
}

// optional bytes valuesData = 4;
inline void MyMessage::clear_valuesdata() {
  valuesdata_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MyMessage::valuesdata() const {
  // @@protoc_insertion_point(field_get:detectorTest.MyMessage.valuesData)
  return valuesdata_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MyMessage::set_valuesdata(const ::std::string& value) {
  
  valuesdata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:detectorTest.MyMessage.valuesData)
}
inline void MyMessage::set_valuesdata(const char* value) {
  
  valuesdata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:detectorTest.MyMessage.valuesData)
}
inline void MyMessage::set_valuesdata(const void* value, size_t size) {
  
  valuesdata_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:detectorTest.MyMessage.valuesData)
}
inline ::std::string* MyMessage::mutable_valuesdata() {
  
  // @@protoc_insertion_point(field_mutable:detectorTest.MyMessage.valuesData)
  return valuesdata_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MyMessage::release_valuesdata() {
  
  return valuesdata_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MyMessage::set_allocated_valuesdata(::std::string* valuesdata) {
  if (valuesdata != NULL) {
    
  } else {
    
  }
  valuesdata_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), valuesdata);
  // @@protoc_insertion_point(field_set_allocated:detectorTest.MyMessage.valuesData)
}

// optional int32 numAttrs = 5;
inline void MyMessage::clear_numattrs() {
  numattrs_ = 0;
}
inline ::google::protobuf::int32 MyMessage::numattrs() const {
  // @@protoc_insertion_point(field_get:detectorTest.MyMessage.numAttrs)
  return numattrs_;
}
inline void MyMessage::set_numattrs(::google::protobuf::int32 value) {
  
  numattrs_ = value;
  // @@protoc_insertion_point(field_set:detectorTest.MyMessage.numAttrs)
}

// optional string nameAttrs = 6;
inline void MyMessage::clear_nameattrs() {
  nameattrs_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MyMessage::nameattrs() const {
  // @@protoc_insertion_point(field_get:detectorTest.MyMessage.nameAttrs)
  return nameattrs_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MyMessage::set_nameattrs(const ::std::string& value) {
  
  nameattrs_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:detectorTest.MyMessage.nameAttrs)
}
inline void MyMessage::set_nameattrs(const char* value) {
  
  nameattrs_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:detectorTest.MyMessage.nameAttrs)
}
inline void MyMessage::set_nameattrs(const char* value, size_t size) {
  
  nameattrs_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:detectorTest.MyMessage.nameAttrs)
}
inline ::std::string* MyMessage::mutable_nameattrs() {
  
  // @@protoc_insertion_point(field_mutable:detectorTest.MyMessage.nameAttrs)
  return nameattrs_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MyMessage::release_nameattrs() {
  
  return nameattrs_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MyMessage::set_allocated_nameattrs(::std::string* nameattrs) {
  if (nameattrs != NULL) {
    
  } else {
    
  }
  nameattrs_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), nameattrs);
  // @@protoc_insertion_point(field_set_allocated:detectorTest.MyMessage.nameAttrs)
}

// optional string typeAttrs = 7;
inline void MyMessage::clear_typeattrs() {
  typeattrs_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MyMessage::typeattrs() const {
  // @@protoc_insertion_point(field_get:detectorTest.MyMessage.typeAttrs)
  return typeattrs_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MyMessage::set_typeattrs(const ::std::string& value) {
  
  typeattrs_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:detectorTest.MyMessage.typeAttrs)
}
inline void MyMessage::set_typeattrs(const char* value) {
  
  typeattrs_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:detectorTest.MyMessage.typeAttrs)
}
inline void MyMessage::set_typeattrs(const char* value, size_t size) {
  
  typeattrs_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:detectorTest.MyMessage.typeAttrs)
}
inline ::std::string* MyMessage::mutable_typeattrs() {
  
  // @@protoc_insertion_point(field_mutable:detectorTest.MyMessage.typeAttrs)
  return typeattrs_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MyMessage::release_typeattrs() {
  
  return typeattrs_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MyMessage::set_allocated_typeattrs(::std::string* typeattrs) {
  if (typeattrs != NULL) {
    
  } else {
    
  }
  typeattrs_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), typeattrs);
  // @@protoc_insertion_point(field_set_allocated:detectorTest.MyMessage.typeAttrs)
}

// optional bytes valuesAttrs = 8;
inline void MyMessage::clear_valuesattrs() {
  valuesattrs_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MyMessage::valuesattrs() const {
  // @@protoc_insertion_point(field_get:detectorTest.MyMessage.valuesAttrs)
  return valuesattrs_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MyMessage::set_valuesattrs(const ::std::string& value) {
  
  valuesattrs_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:detectorTest.MyMessage.valuesAttrs)
}
inline void MyMessage::set_valuesattrs(const char* value) {
  
  valuesattrs_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:detectorTest.MyMessage.valuesAttrs)
}
inline void MyMessage::set_valuesattrs(const void* value, size_t size) {
  
  valuesattrs_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:detectorTest.MyMessage.valuesAttrs)
}
inline ::std::string* MyMessage::mutable_valuesattrs() {
  
  // @@protoc_insertion_point(field_mutable:detectorTest.MyMessage.valuesAttrs)
  return valuesattrs_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MyMessage::release_valuesattrs() {
  
  return valuesattrs_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MyMessage::set_allocated_valuesattrs(::std::string* valuesattrs) {
  if (valuesattrs != NULL) {
    
  } else {
    
  }
  valuesattrs_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), valuesattrs);
  // @@protoc_insertion_point(field_set_allocated:detectorTest.MyMessage.valuesAttrs)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace detectorTest

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_dataPipe_2eproto__INCLUDED
