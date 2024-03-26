






#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, WGAdMaterialType) {
    WGAdMaterialTypeUnkown      =       0,      
    WGAdMaterialTypeVideo       =       1,      
    WGAdMaterialTypeSingle      =       2,      
    WGAdMaterialTypeAtlas       =       3,      
};
NS_ASSUME_NONNULL_BEGIN

@interface WGNativeAdObject : NSObject




@property (nonatomic, readonly) WGAdMaterialType materialType;





@property (nonatomic, copy, readonly) NSString *title;




@property (nonatomic, copy, readonly) NSString *desc;




@property (nonatomic, copy, readonly) NSString *imageUrl;




@property (nonatomic, readonly) NSInteger imageWidth;




@property (nonatomic, readonly) NSInteger imageHeight;




@property (nonatomic, copy, readonly) NSArray *mediaUrlList;




@property (nonatomic, copy, readonly) NSString *iconUrl;




@property (nonatomic, readonly) BOOL isAppAd;



@property (nonatomic, copy, readonly) NSString *appName;




@property (nonatomic, readonly) CGFloat appRating;






@property (nonatomic, readonly) NSString *callToAction;




@property (nonatomic, readonly) BOOL skippable;




@property (nonatomic, readonly) CGFloat duration;



@property (nonatomic, copy, readonly)NSString *platform;

@end

NS_ASSUME_NONNULL_END
