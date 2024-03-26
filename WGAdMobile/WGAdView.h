

#import <UIKit/UIKit.h>
#import "WGAdProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface WGAdView : UIView<WGAdProtocol>

@property (nonatomic, copy) NSString *placementId;

/**
 * @param placementId  广告位 ID
 */
- (instancetype)initWithPlacementId:(NSString *)placementId size:(CGSize )size;


- (NSArray <NSError *>*)getPlacementFailArray;



- (instancetype)initWithFrame:(CGRect)frame NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
