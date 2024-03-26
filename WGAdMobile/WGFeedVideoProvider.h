

#import <Foundation/Foundation.h>
#import "WGAd.h"
#import "WGFeedVideoView.h"
NS_ASSUME_NONNULL_BEGIN
@class WGFeedVideoProvider;
@protocol WGFeedVideoProviderDelegate <NSObject>
@optional

/**
 * 广告加载成功
 */
-(void)WG_feedVideoProviderLoadSuccess:(WGFeedVideoProvider *)provider views:(NSArray<__kindof WGFeedVideoView *> *)views;

/**
* 广告加载失败
*/
-(void)WG_feedVideoProviderLoadFail:(WGFeedVideoProvider *)provider error:(NSError *_Nullable)error;

/**
 * 广告渲染成功
 */
-(void)WG_feedVideoAdViewRenderSuccess:(WGFeedVideoProvider *)provider view:(WGFeedVideoView*)adView;

/**
 * 广告渲染失败
 */
-(void)WG_feedVideoAdViewRenderFail:(WGFeedVideoProvider *)provider view:(WGFeedVideoView*)adView error:(NSError *_Nullable)error;

/**
 * 广告曝光回调
 */
-(void)WG_feedVideoAdViewWillShow:(WGFeedVideoProvider *)provider view:(WGFeedVideoView*)adView;





/**
 * 视频广告播放完毕
 */
-(void)WG_feedVideoAdViewPlayerDidPlayFinish:(WGFeedVideoProvider *)provider view:(WGFeedVideoView*)adView;

/**
 * 广告点击回调
 */
-(void)WG_feedVideoAdViewDidClick:(WGFeedVideoProvider *)provider view:(WGFeedVideoView*)adView;

/**
* 广告详情页面即将展示回调
*/
-(void)WG_feedVideoAdViewDetailViewWillPresentScreen:(WGFeedVideoProvider *)provider view:(WGFeedVideoView*)adView;

/**
 *广告详情页关闭回调
 */
-(void)WG_feedVideoAdViewDetailViewClosed:(WGFeedVideoProvider *)provider view:(WGFeedVideoView*)adView;


@end

@interface WGFeedVideoProvider : WGAd

@property(nonatomic,weak) id<WGFeedVideoProviderDelegate> delegate;


@property(nonatomic, assign) CGSize adSize;


- (void)loadAd:(NSInteger)count;

@end






NS_ASSUME_NONNULL_END
