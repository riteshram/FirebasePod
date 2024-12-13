#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class Firebase_sdkRemoteConfigParams, Firebase_sdkKotlinException, Firebase_sdkRemoteConfigManager, Firebase_sdkKotlinThrowable, Firebase_sdkKotlinArray<T>;

@protocol Firebase_sdkRemoteConfigCallbackListener, Firebase_sdkRemoteConfig, Firebase_sdkKotlinIterator;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface Firebase_sdkBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface Firebase_sdkBase (Firebase_sdkBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface Firebase_sdkMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface Firebase_sdkMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorFirebase_sdkKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface Firebase_sdkNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface Firebase_sdkByte : Firebase_sdkNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface Firebase_sdkUByte : Firebase_sdkNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface Firebase_sdkShort : Firebase_sdkNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface Firebase_sdkUShort : Firebase_sdkNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface Firebase_sdkInt : Firebase_sdkNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface Firebase_sdkUInt : Firebase_sdkNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface Firebase_sdkLong : Firebase_sdkNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface Firebase_sdkULong : Firebase_sdkNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface Firebase_sdkFloat : Firebase_sdkNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface Firebase_sdkDouble : Firebase_sdkNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface Firebase_sdkBoolean : Firebase_sdkNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("RemoteConfig")))
@protocol Firebase_sdkRemoteConfig
@required
- (void)fetchCallback:(id<Firebase_sdkRemoteConfigCallbackListener>)callback __attribute__((swift_name("fetch(callback:)")));
- (BOOL)getBooleanKey:(NSString *)key __attribute__((swift_name("getBoolean(key:)")));
- (int32_t)getIntKey:(NSString *)key __attribute__((swift_name("getInt(key:)")));
- (int64_t)getLongKey:(NSString *)key __attribute__((swift_name("getLong(key:)")));
- (NSString *)getStringKey:(NSString *)key __attribute__((swift_name("getString(key:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirebaseRemoteConfig")))
@interface Firebase_sdkFirebaseRemoteConfig : Firebase_sdkBase <Firebase_sdkRemoteConfig>
- (instancetype)initWithParams:(Firebase_sdkRemoteConfigParams *)params __attribute__((swift_name("init(params:)"))) __attribute__((objc_designated_initializer));
- (void)fetchCallback:(id<Firebase_sdkRemoteConfigCallbackListener>)callback __attribute__((swift_name("fetch(callback:)")));
- (BOOL)getBooleanKey:(NSString *)key __attribute__((swift_name("getBoolean(key:)")));
- (int32_t)getIntKey:(NSString *)key __attribute__((swift_name("getInt(key:)")));
- (int64_t)getLongKey:(NSString *)key __attribute__((swift_name("getLong(key:)")));
- (NSString *)getStringKey:(NSString *)key __attribute__((swift_name("getString(key:)")));
@end

__attribute__((swift_name("RemoteConfigCallbackListener")))
@protocol Firebase_sdkRemoteConfigCallbackListener
@required
- (void)onFailureException:(Firebase_sdkKotlinException *)exception __attribute__((swift_name("onFailure(exception:)")));
- (void)onSuccess __attribute__((swift_name("onSuccess()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemoteConfigManager")))
@interface Firebase_sdkRemoteConfigManager : Firebase_sdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)remoteConfigManager __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Firebase_sdkRemoteConfigManager *shared __attribute__((swift_name("shared")));
- (id<Firebase_sdkRemoteConfig>)buildParams:(Firebase_sdkRemoteConfigParams *)params __attribute__((swift_name("build(params:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemoteConfigParams")))
@interface Firebase_sdkRemoteConfigParams : Firebase_sdkBase
- (instancetype)initWithDefaultValues:(NSDictionary<NSString *, NSString *> *)defaultValues cacheInterval:(int64_t)cacheInterval __attribute__((swift_name("init(defaultValues:cacheInterval:)"))) __attribute__((objc_designated_initializer));
- (Firebase_sdkRemoteConfigParams *)doCopyDefaultValues:(NSDictionary<NSString *, NSString *> *)defaultValues cacheInterval:(int64_t)cacheInterval __attribute__((swift_name("doCopy(defaultValues:cacheInterval:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t cacheInterval __attribute__((swift_name("cacheInterval")));
@property (readonly) NSDictionary<NSString *, NSString *> *defaultValues __attribute__((swift_name("defaultValues")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface Firebase_sdkKotlinThrowable : Firebase_sdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Firebase_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Firebase_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (Firebase_sdkKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Firebase_sdkKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface Firebase_sdkKotlinException : Firebase_sdkKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Firebase_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Firebase_sdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface Firebase_sdkKotlinArray<T> : Firebase_sdkBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(Firebase_sdkInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<Firebase_sdkKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol Firebase_sdkKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
