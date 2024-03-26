

#import "WGAd.h"
#import "WGNativeExpressFeedAd.h"

@class WGNativeExpressFeedAdManager;
NS_ASSUME_NONNULL_BEGIN

@protocol WGNativeExpressFeedAdManagerDelegate <NSObject>
@optional

/**
 信息流广告数据加载成功
 */
-(void)WG_nativeExpressFeedAdManagerSuccessToLoad:(WGNativeExpressFeedAdManager *)adsManager nativeAds:(NSArray<WGNativeExpressFeedAd *> *_Nullable)feedAdDataArray;


/**
 信息流广告数据加载失败
 */
- (void)WG_nativeExpressFeedAdManager:(WGNativeExpressFeedAdManager *)adsManager didFailWithError:(NSError *_Nullable)error;

@end


@interface WGNativeExpressFeedAdManager : WGAd

@property(nonatomic, weak) id<WGNativeExpressFeedAdManagerDelegate> delegate;

@property (nonatomic, readonly) CGSize adSize;

@property (nonatomic, strong, readonly) NSArray<WGNativeExpressFeedAd *> *data;


-(instancetype)initWithPlacementId:(NSString *)placementId size:(CGSize)size;


/**
 *  加载广告，建议最大个数不超过5个
 */
-(void)loadAdDataWithCount:(NSInteger)count;

@end




NS_ASSUME_NONNULL_END
