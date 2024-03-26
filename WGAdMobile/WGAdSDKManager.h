
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WGAdSDKManager : NSObject

/**SDK 初始化
 */
+ (void)registerAppId:(NSString *)appId;




/**SDK 初始化
 */
+ (void)registerAppId:(NSString*)appId callback:(void(^)(BOOL completed, NSDictionary *info))callback;



/**SDK 版本号
 */
+ (NSString *)sdkVersion;


@end

NS_ASSUME_NONNULL_END
