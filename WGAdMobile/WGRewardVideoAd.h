

#import "WGAd.h"
#import "WGRewardVideoModel.h"

NS_ASSUME_NONNULL_BEGIN

@class  WGRewardVideoAd;
@protocol WGRewardVideoAdDelegate <NSObject>
@optional

/**
 广告数据加载成功回调
*/
- (void)WG_rewardVideoAdDidLoad:(WGRewardVideoAd *)rewardedVideoAd;

/**
 激励视频数据下载成功回调 成功后再调用：showAdInViewController:
*/
- (void)WG_rewardVideoAdVideoDidLoad:(WGRewardVideoAd *)rewardedVideoAd;

/**
 激励视频广告展示
 */
- (void)WG_rewardVideoAdDidShow:(WGRewardVideoAd *)rewardedVideoAd;

/**
 激励视频广告关闭
 */
- (void)WG_rewardVideoAdDidClose:(WGRewardVideoAd *)rewardedVideoAd;

/**
 激励视频广告信息点击
 */
- (void)WG_rewardVideoAdDidClicked:(WGRewardVideoAd *)rewardedVideoAd;

/**
 奖励触发
 */
- (void)WG_rewardVideoAdDidRewardEffective:(WGRewardVideoAd *)rewardedVideoAd;

/**
 激励视频广告视频播放完成
 */
- (void)WG_rewardVideoAdDidPlayFinish:(WGRewardVideoAd *)rewardedVideoAd;

/**
 激励视频广告错误信息回调
 */
- (void)WG_rewardVideoAd:(WGRewardVideoAd *)rewardedVideoAd didFailWithError:(NSError *)error;

@end



@interface WGRewardVideoAd : WGAd

@property (nonatomic, weak) id<WGRewardVideoAdDelegate> delegate;

- (instancetype)initWithPlacementId:(NSString *)placementId rewardedVideoModel:(WGRewardVideoModel *)rewardedVideoModel;

@property (nonatomic, strong) WGRewardVideoModel *rewardedVideoModel;

///静音设置 默认：NO
@property (nonatomic) BOOL videoMuted;

/**
 *  拉取广告请求，只拉取不展示
 */
- (void)loadAd;


/**
 *  展示广告
 */
- (void)showAdInViewController:(UIViewController*)viewController;



//使用initWithPlacementId:rewardedVideoModel:
- (instancetype)initWithPlacementId:(NSString *)placementId NS_UNAVAILABLE;
@end


NS_ASSUME_NONNULL_END
