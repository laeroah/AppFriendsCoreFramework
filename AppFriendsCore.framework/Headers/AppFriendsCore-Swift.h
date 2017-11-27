// Generated by Apple Swift version 4.0.2 (swiftlang-900.0.69.2 clang-900.0.38)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_attribute(external_source_symbol)
# define SWIFT_STRINGIFY(str) #str
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name) _Pragma(SWIFT_STRINGIFY(clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in=module_name, generated_declaration))), apply_to=any(function, enum, objc_interface, objc_category, objc_protocol))))
# define SWIFT_MODULE_NAMESPACE_POP _Pragma("clang attribute pop")
#else
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name)
# define SWIFT_MODULE_NAMESPACE_POP
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import CoreData;
@import ObjectiveC;
@import Foundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

SWIFT_MODULE_NAMESPACE_PUSH("AppFriendsCore")

SWIFT_PROTOCOL("_TtP14AppFriendsCore20AFEncryptionDelegate_")
@protocol AFEncryptionDelegate
/// Encrypt an array of text before sending it to a user. The delegate should encrypt the text with the user’s public key.
/// \param text the array of text to be encrypted
///
/// \param userID the ID of the receiver
///
/// \param completion finish callback block. Will contain either the error or the array of encrypted text depending on the result of the encryption
///
- (void)encryptWithTexts:(NSArray<NSString *> * _Nonnull)texts forUser:(NSString * _Nonnull)userID completion:(void (^ _Nullable)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completion;
/// Decrypt and array of encrypted text for a user
/// \param encryptedText the array of the encrypted text
///
/// \param userID the ID of the receiver
///
/// \param completion finish callback block. Will contain either the error or the array of decrypted text depending on the result of the encryption
///
- (void)decryptWithEncryptedTexts:(NSArray<NSString *> * _Nonnull)encryptedTexts forUser:(NSString * _Nonnull)userID completion:(void (^ _Nullable)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completion;
/// Encrypt an array of text before sending it to a conversation. The delegate should encrypt the text with the public keys of all the users in the conversation.
/// \param text the array of text to be encrypted
///
/// \param dialogID the ID of the dialog
///
/// \param completion finish callback block. Will contain either the error or the array of encrypted text depending on the result of the encryption
///
- (void)encryptWithTexts:(NSArray<NSString *> * _Nonnull)texts forDialog:(NSString * _Nonnull)dialogID completion:(void (^ _Nullable)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completion;
/// Decrypt and array of encrypted text for a dialog
/// \param encryptedText the array of the encrypted text
///
/// \param userID the ID of the dialog
///
/// \param completion finish callback block. Will contain either the error or the array of decrypted text depending on the result of the encryption
///
- (void)decryptWithEncryptedTexts:(NSArray<NSString *> * _Nonnull)encryptedTexts forDialog:(NSString * _Nonnull)dialogID completion:(void (^ _Nullable)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completion;
@end

typedef SWIFT_ENUM(NSInteger, AFError) {
  AFErrorUnknownError = 90000,
  AFErrorInvalidParams = 90001,
  AFErrorSdkNotInitialized = 90002,
  AFErrorUserNotLoggedIn = 90003,
  AFErrorDialogNotFound = 20005,
  AFErrorDataFetchStoreFailed = 20010,
  AFErrorUserAlreadyLoggedIn = 90007,
  AFErrorLogoutWhenNotLoggedIn = 90009,
  AFErrorServerError = 90500,
  AFErrorUserNotFound = 30001,
  AFErrorRequestIsTooFrequent = 91000,
};

@class NSEntityDescription;
@class NSManagedObjectContext;

SWIFT_CLASS_NAMED("HCDialog")
@interface HCDialog : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end

@class NSObject;
@class NSNumber;

@interface HCDialog (SWIFT_EXTENSION(AppFriendsCore))
@property (nonatomic, copy) NSString * _Nullable customData;
@property (nonatomic, copy) NSString * _Nullable dialogID;
@property (nonatomic, strong) NSObject * _Nullable members;
@property (nonatomic, strong) NSNumber * _Nullable muted;
@property (nonatomic, copy) NSString * _Nullable ownerID;
@property (nonatomic, copy) NSString * _Nullable title;
@property (nonatomic, copy) NSString * _Nullable type;
@end


SWIFT_CLASS("_TtC14AppFriendsCore14HCSDKConstants")
@interface HCSDKConstants : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14AppFriendsCore9HCSDKCore")
@interface HCSDKCore : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end










SWIFT_PROTOCOL("_TtP14AppFriendsCore30HCSDKCoreAppCustomDataDelegate_")
@protocol HCSDKCoreAppCustomDataDelegate
@optional
/// App defined custom data is received
/// \param data the data the app ask AF to send
///
- (void)appCustomPushReceivedWithData:(NSString * _Nonnull)data;
@end


SWIFT_PROTOCOL("_TtP14AppFriendsCore23HCSDKCoreEventsDelegate_")
@protocol HCSDKCoreEventsDelegate
/// This is the callback to report dialog events posted by the app.
/// For example, typing indicator is deliver via this callback
- (void)dialogEventReceived:(NSString * _Nonnull)dialogID eventName:(NSString * _Nonnull)eventName customData:(NSString * _Nonnull)customData;
@end


SWIFT_PROTOCOL("_TtP14AppFriendsCore27HCSDKCoreOnlineUserObserver_")
@protocol HCSDKCoreOnlineUserObserver
- (void)onlineUserCountChangedWithCount:(NSInteger)count;
@end


SWIFT_PROTOCOL("_TtP14AppFriendsCore21HCSDKCoreSyncDelegate_")
@protocol HCSDKCoreSyncDelegate
/// This is the callback when new messages are received
/// \param messages array of messages of JSON objects
///
- (void)messagesReceived:(NSArray<NSDictionary<NSString *, id> *> * _Nonnull)messages completion:(void (^ _Nullable)(BOOL))completion;
/// This is asking to provide the last message you received in a certain channel.
/// AppFriendsUI SDK takes care of this.
/// However, if you decide to only use AppFriendsCore,
/// you need to be responsible of implementing this method in the delegate class
/// \param channelID the ID of the channel
///
///
/// returns:
/// the ID of the last message you received in that channel
- (NSString * _Nullable)lastReceivedMessageIDInChannel:(NSString * _Nonnull)channelID SWIFT_WARN_UNUSED_RESULT;
@end



SWIFT_MODULE_NAMESPACE_POP
#pragma clang diagnostic pop
