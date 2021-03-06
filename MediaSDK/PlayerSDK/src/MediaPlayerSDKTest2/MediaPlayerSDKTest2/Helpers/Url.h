#import <UIKit/UIKit.h>
#import "MediaPlayer.h"

typedef NS_ENUM(int, UrlType)
{
    URL_TYPE_STANDARD = 0,
    URL_TYPE_ONVIF = 1
};

@interface Url : NSObject

-(id)initWithParam:(NSString*)paramName
               url:(NSString*)paramUrl
             image:(UIImage*)paramImage;
-(id)initWithConfig:(NSString*)paramName
             config:(MediaPlayerConfig*)paramCconfig;

- (void)setType: (UrlType)val;
- (UrlType)getType;

- (void)setUrl: (NSString*)url;
- (NSString*)getUrl;

- (void)setName: (NSString*)name;
- (NSString*)getName;

- (void)setImage: (UIImage*)image;
- (UIImage*)getImage;

- (void) setUserDefined: (void*)userDefined;
- (void*) getUserDefined;

- (MediaPlayerConfig*)getConfig;

-(BOOL)isEqual:(id)otherObj;

@end
