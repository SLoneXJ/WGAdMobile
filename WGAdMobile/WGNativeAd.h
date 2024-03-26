






#import "WGAd.h"
#import "WGNativeAdObject.h"
#import "WGNativeAdView.h"
NS_ASSUME_NONNULL_BEGIN

@protocol WGNativeAdDelegate <NSObject>
@optional



- (void)WG_nativeAdLoaded:(NSArray<WGNativeAdObject *> * _Nullable)nativeAdObjects error:(NSError * _Nullable)error;

@end


@interface WGNativeAd : WGAd

@property (nonatomic,weak)id <WGNativeAdDelegate> delegate;

-(void)loadAdWithCount:(NSInteger)adCount;

@end

NS_ASSUME_NONNULL_END
