

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface WGFeedVideoView : UIView

@property (nonatomic, weak) UIViewController *rootViewController;

- (void)render;

@end

NS_ASSUME_NONNULL_END
