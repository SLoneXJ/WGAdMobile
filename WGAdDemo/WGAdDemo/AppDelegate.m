//
//  AppDelegate.m
//  WGAdDemo
//
//  Created by Mickey on 2024/3/26.
//

#import "AppDelegate.h"
#import "WGHomeViewController.h"

@interface AppDelegate ()

@property (nonatomic,strong)WGSplashAd *splashAd;

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    
    WGHomeViewController *vc = [[WGHomeViewController alloc]init];
    UINavigationController *naviVC = [[UINavigationController alloc]initWithRootViewController:vc];
    self.window.rootViewController = naviVC;
    [self.window makeKeyAndVisible];
    return YES;
}




@end
