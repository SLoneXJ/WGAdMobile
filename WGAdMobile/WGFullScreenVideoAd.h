

#import "WGAd.h"

NS_ASSUME_NONNULL_BEGIN

@class WGFullScreenVideoAd;
@protocol WGFullScreenVideoAdDelegate <NSObject>

/**
 广告加载成功
*/
- (void)WG_fullScreenVideoAdDidLoad:(WGFullScreenVideoAd *)ad;

/**
 广告加载失败
 */
- (void)WG_fullScreenVideoAdDidLoadFail:(WGFullScreenVideoAd *)ad error:(NSError * __nullable)error;

/**
 广告展示
 */
- (void)WG_fullScreenVideoAdDidShow:(WGFullScreenVideoAd *)ad;

/**
 广告点击
 */
- (void)WG_fullScreenVideoAdDidClick:(WGFullScreenVideoAd *)ad;

/**
 广告关闭
 */
- (void)WG_fullScreenVideoAdDidClose:(WGFullScreenVideoAd *)ad;

/**
 广告错误
 */
- (void)WG_fullScreenVideoAdDidFail:(WGFullScreenVideoAd *)ad error:(NSError * __nullable)error;

/**
 广告详情页打开
 */
- (void)WG_fullScreenVideoAdDetailDidPresent:(WGFullScreenVideoAd *)ad;

/**
 广告详情页关闭
 */
- (void)WG_fullScreenVideoAdDetailDidClose:(WGFullScreenVideoAd*)ad;

@end

@interface WGFullScreenVideoAd : WGAd

@property (nonatomic, weak) id<WGFullScreenVideoAdDelegate> delegate;

/**
 *  拉取广告请求，只拉取不展示
 */
-(void)loadAd;


/**
 *  展示广告
 */
-(void)presentFullScreenVideoAdFromRootViewController:(UIViewController*)viewController;


@end




NS_ASSUME_NONNULL_END
