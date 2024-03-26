

#import <UIKit/UIKit.h>
#import "WGAdProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface WGAd : NSObject<WGAdProtocol>


@property (nonatomic, copy) NSString *placementId;

/**
 * @param placementId  广告位 ID
 */
- (instancetype)initWithPlacementId:(NSString *)placementId;


- (NSArray <NSError *>*)getPlacementFailArray;



- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;
@end

NS_ASSUME_NONNULL_END
