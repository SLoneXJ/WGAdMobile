
#import "WGAdView.h"

NS_ASSUME_NONNULL_BEGIN

@class WGBannerAdView;
@protocol WGBannerAdViewDelegate <NSObject>
@optional

/**
 banner广告加载成功
 */
- (void)WG_bannerAdViewDidLoad:(WGBannerAdView *)bannerAdView;

/**
 banner广告加载失败
 */
- (void)WG_bannerAdView:(WGBannerAdView *)bannerAdView didLoadFailWithError:(NSError *_Nullable)error;

/**
 bannerAdView曝光回调
 */
- (void)WG_bannerAdViewWillBecomVisible:(WGBannerAdView *)bannerAdView;

/**
 关闭banner广告回调
 */
- (void)WG_bannerAdViewDislike:(WGBannerAdView *)bannerAdView;

/**
 点击banner广告回调
 */
- (void)WG_bannerAdViewDidClick:(WGBannerAdView *)bannerAdView;

/**
 关闭banner广告详情页回调
 */
- (void)WG_bannerAdViewDidCloseOtherController:(WGBannerAdView *)bannerAdView;

@end


@interface WGBannerAdView : WGAdView

@property (nonatomic, readonly) CGSize adSize;

//interval  广告刷新间隔，范围 [30, 120] 秒，默认值 30 秒。设 0 则不刷新。
@property (nonatomic, readonly) NSInteger interval;

@property (nonatomic, weak, nullable) id <WGBannerAdViewDelegate> delegate;


/**
   @param
   placementId - 广告位id
   viewController - 视图控制器
   adSize 展示的位置和大小
   interval  广告刷新间隔，范围 [30, 120] 秒，默认值 30 秒。设 0 则不刷新。
 */
- (instancetype)initWithPlacementId:(NSString *)placementId
                     viewController:(UIViewController *)viewController
                             adSize:(CGSize)adSize
                           interval:(NSInteger)interval;


/**
   @param
   placementId - 广告位id
   viewController - 视图控制器
   adSize 展示的位置和大小
 */
- (instancetype)initWithPlacementId:(NSString *)placementId
                     viewController:(UIViewController *)viewController
                             adSize:(CGSize)adSize;



/**
  加载广告内容
 */
- (void)loadAdAndShow;




- (instancetype)initWithPlacementId:(NSString *)placementId size:(CGSize)size NS_UNAVAILABLE;

@end





NS_ASSUME_NONNULL_END
