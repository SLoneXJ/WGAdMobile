

#import <UIKit/UIKit.h>

#ifndef WGAdSDKDefine_h
#define WGAdSDKDefine_h

FOUNDATION_EXPORT NSString * const WG_SDKVersion;


#define WGWeakify(object)  __weak typeof(object) weak##object = object;

#define WGStrongify(object)  __strong typeof(object) object = weak##object;



#define WGStatusBarH \
({CGFloat statusBarHeight = 0; \
if (@available(iOS 13.0, *))  { \
UIStatusBarManager *statusBarManager = [UIApplication sharedApplication].windows.firstObject.windowScene.statusBarManager;\
statusBarHeight = statusBarManager.statusBarFrame.size.height;\
} else {\
statusBarHeight = [UIApplication sharedApplication].statusBarFrame.size.height;\
} \
(statusBarHeight);})


#define WGIPHONE_X \
({BOOL isPhoneX = NO;\
if (@available(iOS 11.0, *)) {\
isPhoneX = [[UIApplication sharedApplication] delegate].window.safeAreaInsets.bottom > 0.0;\
}\
(isPhoneX);})



 
#define WGSafeBottomMargin \
({CGFloat bottom = 0; \
if (@available(iOS 11.0, *))  { \
bottom = WG_window().safeAreaInsets.bottom; \
} \
(bottom);})


FOUNDATION_EXPORT UIWindow * WG_window(void);
FOUNDATION_EXPORT UIViewController * WG_currentVC(void);

#endif  
