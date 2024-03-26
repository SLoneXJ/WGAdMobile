

#import "WGAd.h"

NS_ASSUME_NONNULL_BEGIN

@class WGInterstitialAd;
@protocol WGInterstitialAdDelegate <NSObject>

/**
 插屏广告加载成功
 */
- (void)WG_interstitialAdDidLoad:(WGInterstitialAd *)ad;

/**
 插屏广告加载失败
 */
- (void)WG_interstitialAdDidLoadFail:(WGInterstitialAd *)ad error:(NSError * __nullable)error;

/**
 插屏广告展示成功
 */
- (void)WG_interstitialAdDidPresentScreen:(WGInterstitialAd *)ad;

/**
 插屏广告点击
 */
- (void)WG_interstitialAdDidClick:(WGInterstitialAd *)ad;


/**
 插屏广告关闭
 */
- (void)WG_interstitialAdDidClose:(WGInterstitialAd *)ad;


/**
 插屏广告详情页关闭
 */
- (void)WG_interstitialAdDetailDidClose:(WGInterstitialAd *)ad;


/**
 插屏广告其他错误
 */
- (void)WG_interstitialAdDidFail:(WGInterstitialAd *)ad error:(NSError * __nullable)error;

@end

@interface WGInterstitialAd : WGAd

@property(nonatomic,weak) id<WGInterstitialAdDelegate> delegate;

/**
 *  拉取广告请求，只拉取不展示
 */
-(void)loadAd;

/**
 *  展示广告
 */
-(void)showAdFromRootViewController:(UIViewController *)viewController;


@end

NS_ASSUME_NONNULL_END
