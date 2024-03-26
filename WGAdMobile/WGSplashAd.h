

#import "WGAd.h"

NS_ASSUME_NONNULL_BEGIN

@class WGSplashAd;
@protocol WGSplashAdDelegate <NSObject>
@optional

/**
 *  开屏广告素材加载成功
 */
- (void)WG_splashAdDidLoad:(WGSplashAd *)splashAd;

/**
 *  开屏广告成功展示
 */
- (void)WG_splashAdSuccessPresentScreen:(WGSplashAd *)splashAd;

/**
 *  开屏广告点击回调
 */
- (void)WG_splashAdClicked:(WGSplashAd *)splashAd;

/**
 *  开屏广告关闭回调
 */
- (void)WG_splashAdClosed:(WGSplashAd *)splashAd;

/**
 *  应用进入后台时回调（部分广告有该回调）
 */
- (void)WG_splashAdApplicationWillEnterBackground:(WGSplashAd *)splashAd;

/**
 * 开屏广告倒记时结束
 */
- (void)WG_splashAdCountdownEnd:(WGSplashAd*)splashAd;

/**
 *  开屏广告错误
 */
- (void)WG_splashAdError:(WGSplashAd *)splashAd withError:(NSError *)error;

@end


@interface WGSplashAd : WGAd

@property(nonatomic,weak) id<WGSplashAdDelegate> delegate;

/**
 *  拉取广告超时时间，默认为3秒
 */
@property (nonatomic, assign) CGFloat fetchDelay;


/**
 * 用于处理广告动作的视图控制器
 */
@property (nonatomic, weak) UIViewController *_Nullable rootViewController;


/**
 *  自定义底部视图
 */
@property (nonatomic, strong, nullable) UIView *customBottomView;


/**
 *  发起拉取广告请求，只拉取不展示
 */
- (void)loadAd;


/**
 *  展示广告
 */
- (void)showAdInWindow:(UIWindow *)window;

@end

NS_ASSUME_NONNULL_END
