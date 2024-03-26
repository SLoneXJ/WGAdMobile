


#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WGRewardVideoModel : NSObject

/**
 required.
 媒体提供的用户ID
 */
@property(nonatomic,copy) NSString *userId;
/**optional*/
@property(nonatomic,copy) NSString *reward_name;
/**optional*/
@property(nonatomic,assign) NSInteger reward_amount;
/**optional*/
@property(nonatomic,copy) NSString *extra;

@end

NS_ASSUME_NONNULL_END
