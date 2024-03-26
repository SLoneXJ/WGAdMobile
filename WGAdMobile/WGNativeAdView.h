






#import <UIKit/UIKit.h>
#import "WGNativeAdObject.h"
NS_ASSUME_NONNULL_BEGIN

@protocol WGNativeAdViewDelegate <NSObject>
@optional

-(void)WG_nativeAdViewWillExpose:(UIView *)nativeAdView;

-(void)WG_nativeAdViewDidClick:(UIView *)nativeAdView;

-(void)WG_nativeAdDetailViewClosed:(UIView *)nativeAdView;

-(void)WG_nativeAdDetailViewWillPresentScreen:(UIView *)nativeAdView;


-(void)WG_NativeAdViewApplicationWillEnterBackground:(UIView *)nativeAdView;
@end


@interface WGNativeAdView : UIView




@property (nonatomic, weak) id<WGNativeAdViewDelegate> delegate;




@property (nonatomic, weak) UIViewController *viewController;




@property (nonatomic,strong)UIView *videoAdView;



-(UIView *)registerDataObject:(WGNativeAdObject *)dataObject;






- (void)registerClickableCallToActionView:(UIView *)callToActionView;




- (void)unregisterDataObject;

@end

NS_ASSUME_NONNULL_END
