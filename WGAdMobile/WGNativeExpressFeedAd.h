






#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "WGAdProtocol.h"

NS_ASSUME_NONNULL_BEGIN
@class WGNativeExpressFeedAd;
@protocol WGNativeExpressFeedAdDelegate <NSObject>
@optional

/**
 * 广告渲染成功
 */
- (void)WG_nativeExpressFeedAdRenderSuccess:(WGNativeExpressFeedAd *)feedAd;

/**
 * 广告渲染失败
 */
- (void)WG_nativeExpressFeedAdRenderFail:(WGNativeExpressFeedAd *)feedAd;

/**
 *广告即将展示
 */
- (void)WG_nativeExpressFeedAdViewWillShow:(WGNativeExpressFeedAd *)feedAd;

/**
 *广告点击
 */
- (void)WG_nativeExpressFeedAdDidClick:(WGNativeExpressFeedAd *)feedAd;

/**
 *关闭该广告
 */
- (void)WG_nativeExpressFeedAdDislike:(WGNativeExpressFeedAd *)feedAd;

/**
 *展示落地页
 */
- (void)WG_nativeExpressFeedAdDidShowOtherController:(WGNativeExpressFeedAd *)nativeAd;

/**
 *关闭落地页
 */
- (void)WG_nativeExpressFeedAdDidCloseOtherController:(WGNativeExpressFeedAd *)nativeAd;

@end


@interface WGNativeExpressFeedAd : NSObject<WGAdProtocol>

@property (nonatomic,strong,readonly) UIView *feedView;


@property (nonatomic, assign,readonly) BOOL isReady;


@property(nonatomic,weak) id<WGNativeExpressFeedAdDelegate> delegate;


/**
 * 必选
 * root view controller for handling ad actions.
 * 详解：开发者需传入用来弹出目标页的ViewController，一般为当前ViewController
 */
@property (nonatomic, weak) UIViewController *rootViewController;


/**
 * 必选
 * 原生模板广告渲染
 */
- (void)render;

@end

NS_ASSUME_NONNULL_END
