#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
@interface API : NSObject
NS_ASSUME_NONNULL_BEGIN

- (void)paid:(void (^)(void))execute;
- (void) setToken:(NSString*)settoken;
- (NSString*)getUDID;
- (NSString *)getDeviceName;
- (NSString *)getModel;
- (NSString *)getVersionIOS;
- (NSString *)getKey;
@end
NS_ASSUME_NONNULL_END
