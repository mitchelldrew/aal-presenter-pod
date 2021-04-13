#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class PresenterModelRestaurant, PresenterKotlinException, PresenterKotlinPair<__covariant A, __covariant B>, PresenterModelObj, PresenterKotlinThrowable, PresenterKotlinArray<T>;

@protocol PresenterIFavProviderListener, PresenterIImageProviderListener, PresenterIRestaurantProviderListener, PresenterIHomeView, PresenterIHomePresenter, PresenterIRestaurantProvider, PresenterIFavProvider, PresenterIImageProvider, PresenterKotlinIterator;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

__attribute__((swift_name("KotlinBase")))
@interface PresenterBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface PresenterBase (PresenterBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface PresenterMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface PresenterMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorPresenterKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface PresenterNumber : NSNumber
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
@end;

__attribute__((swift_name("KotlinByte")))
@interface PresenterByte : PresenterNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface PresenterUByte : PresenterNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface PresenterShort : PresenterNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface PresenterUShort : PresenterNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface PresenterInt : PresenterNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface PresenterUInt : PresenterNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface PresenterLong : PresenterNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface PresenterULong : PresenterNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface PresenterFloat : PresenterNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface PresenterDouble : PresenterNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface PresenterBoolean : PresenterNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("IFavProvider")))
@protocol PresenterIFavProvider
@required
- (void)addListenerFavListener:(id<PresenterIFavProviderListener>)favListener __attribute__((swift_name("addListener(favListener:)")));
- (void)deleteElement:(PresenterModelRestaurant *)element __attribute__((swift_name("delete(element:)")));
- (void)get __attribute__((swift_name("get()")));
- (void)removeListenerFavListener:(id<PresenterIFavProviderListener>)favListener __attribute__((swift_name("removeListener(favListener:)")));
- (void)saveElement:(PresenterModelRestaurant *)element __attribute__((swift_name("save(element:)")));
@end;

__attribute__((swift_name("IFavProviderListener")))
@protocol PresenterIFavProviderListener
@required
- (void)onErrorError:(PresenterKotlinException *)error __attribute__((swift_name("onError(error:)")));
- (void)onReceiveElements:(NSArray<PresenterModelRestaurant *> *)elements __attribute__((swift_name("onReceive(elements:)")));
@end;

__attribute__((swift_name("IImageProvider")))
@protocol PresenterIImageProvider
@required
- (void)addListenerImgListener:(id<PresenterIImageProviderListener>)imgListener __attribute__((swift_name("addListener(imgListener:)")));
- (void)getUrl:(NSString *)url __attribute__((swift_name("get(url:)")));
- (void)removeListenerImgListener:(id<PresenterIImageProviderListener>)imgListener __attribute__((swift_name("removeListener(imgListener:)")));
@end;

__attribute__((swift_name("IImageProviderListener")))
@protocol PresenterIImageProviderListener
@required
- (void)onErrorUrl:(NSString *)url error:(PresenterKotlinException *)error __attribute__((swift_name("onError(url:error:)")));
- (void)onReceiveUrl:(NSString *)url imgBase64:(NSString *)imgBase64 __attribute__((swift_name("onReceive(url:imgBase64:)")));
@end;

__attribute__((swift_name("IRestaurantProvider")))
@protocol PresenterIRestaurantProvider
@required
- (void)addListenerRestListener:(id<PresenterIRestaurantProviderListener>)restListener __attribute__((swift_name("addListener(restListener:)")));
- (void)getNe:(PresenterKotlinPair<PresenterDouble *, PresenterDouble *> *)ne sw:(PresenterKotlinPair<PresenterDouble *, PresenterDouble *> *)sw __attribute__((swift_name("get(ne:sw:)")));
- (void)removeListenerRestListener:(id<PresenterIRestaurantProviderListener>)restListener __attribute__((swift_name("removeListener(restListener:)")));
- (void)searchQuery:(NSString *)query __attribute__((swift_name("search(query:)")));
@end;

__attribute__((swift_name("IRestaurantProviderListener")))
@protocol PresenterIRestaurantProviderListener
@required
- (void)onErrorError:(PresenterKotlinException *)error __attribute__((swift_name("onError(error:)")));
- (void)onReceiveNe:(PresenterKotlinPair<PresenterDouble *, PresenterDouble *> *)ne sw:(PresenterKotlinPair<PresenterDouble *, PresenterDouble *> *)sw elements:(NSArray<PresenterModelRestaurant *> *)elements __attribute__((swift_name("onReceive(ne:sw:elements:)")));
- (void)onReceiveQuery:(NSString *)query elements:(NSArray<PresenterModelRestaurant *> *)elements __attribute__((swift_name("onReceive(query:elements:)")));
@end;

__attribute__((swift_name("IHomePresenter")))
@protocol PresenterIHomePresenter
@required
- (void)deleteFavRestaurant:(PresenterModelRestaurant *)restaurant __attribute__((swift_name("deleteFav(restaurant:)")));
- (void)queryName:(NSString *)name __attribute__((swift_name("query(name:)")));
- (void)saveFavRestaurant:(PresenterModelRestaurant *)restaurant __attribute__((swift_name("saveFav(restaurant:)")));
- (void)setViewView:(id<PresenterIHomeView>)view __attribute__((swift_name("setView(view:)")));
- (void)showNe:(PresenterKotlinPair<PresenterDouble *, PresenterDouble *> *)ne sw:(PresenterKotlinPair<PresenterDouble *, PresenterDouble *> *)sw __attribute__((swift_name("show(ne:sw:)")));
- (void)shutdown __attribute__((swift_name("shutdown()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomePresenter")))
@interface PresenterHomePresenter : PresenterBase <PresenterIHomePresenter>
- (instancetype)initWithRestProvider:(id<PresenterIRestaurantProvider> _Nullable)restProvider favoritesProvider:(id<PresenterIFavProvider> _Nullable)favoritesProvider imageProvider:(id<PresenterIImageProvider> _Nullable)imageProvider __attribute__((swift_name("init(restProvider:favoritesProvider:imageProvider:)"))) __attribute__((objc_designated_initializer));
- (void)deleteFavRestaurant:(PresenterModelRestaurant *)restaurant __attribute__((swift_name("deleteFav(restaurant:)")));
- (void)queryName:(NSString *)name __attribute__((swift_name("query(name:)")));
- (void)saveFavRestaurant:(PresenterModelRestaurant *)restaurant __attribute__((swift_name("saveFav(restaurant:)")));
- (void)setViewView:(id<PresenterIHomeView>)view __attribute__((swift_name("setView(view:)")));
- (void)showNe:(PresenterKotlinPair<PresenterDouble *, PresenterDouble *> *)ne sw:(PresenterKotlinPair<PresenterDouble *, PresenterDouble *> *)sw __attribute__((swift_name("show(ne:sw:)")));
- (void)shutdown __attribute__((swift_name("shutdown()")));
@end;

__attribute__((swift_name("IHomeView")))
@protocol PresenterIHomeView
@required
- (void)displayFavsFavs:(NSArray<PresenterModelRestaurant *> *)favs __attribute__((swift_name("displayFavs(favs:)")));
- (void)displayImgUrl:(NSString *)url imgBase64:(NSString *)imgBase64 __attribute__((swift_name("displayImg(url:imgBase64:)")));
- (void)displayRestsRests:(NSArray<PresenterModelRestaurant *> *)rests __attribute__((swift_name("displayRests(rests:)")));
- (void)errorError:(PresenterKotlinException *)error __attribute__((swift_name("error(error:)")));
@end;

__attribute__((swift_name("ModelObj")))
@interface PresenterModelObj : PresenterBase
- (instancetype)initWithId:(int32_t)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModelRestaurant")))
@interface PresenterModelRestaurant : PresenterModelObj
- (instancetype)initWithId:(int32_t)id iconUrl:(NSString *)iconUrl name:(NSString *)name supportText:(NSString *)supportText price:(NSString *)price score:(double)score numReviews:(int32_t)numReviews lat:(double)lat lon:(double)lon __attribute__((swift_name("init(id:iconUrl:name:supportText:price:score:numReviews:lat:lon:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithId:(int32_t)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *iconUrl __attribute__((swift_name("iconUrl")));
@property (readonly) double lat __attribute__((swift_name("lat")));
@property (readonly) double lon __attribute__((swift_name("lon")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t numReviews __attribute__((swift_name("numReviews")));
@property (readonly) NSString *price __attribute__((swift_name("price")));
@property (readonly) double score __attribute__((swift_name("score")));
@property (readonly) NSString *supportText __attribute__((swift_name("supportText")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface PresenterKotlinThrowable : PresenterBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PresenterKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PresenterKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (PresenterKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PresenterKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((swift_name("KotlinException")))
@interface PresenterKotlinException : PresenterKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PresenterKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PresenterKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface PresenterKotlinPair<__covariant A, __covariant B> : PresenterBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (A _Nullable)component1 __attribute__((swift_name("component1()")));
- (B _Nullable)component2 __attribute__((swift_name("component2()")));
- (PresenterKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface PresenterKotlinArray<T> : PresenterBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(PresenterInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<PresenterKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol PresenterKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
