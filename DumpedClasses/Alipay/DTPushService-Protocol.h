//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTService.h"
#import "UIAlertViewDelegate.h"

@class NSData, NSDictionary, NSNotification, NSString;

@protocol DTPushService <DTService, UIAlertViewDelegate>
- (void)showNotificationOnApplicationActive:(NSNotification *)arg1;
- (void)unbindDeviceTokenWithUserID:(NSString *)arg1 token:(NSString *)arg2 success:(void (^)(NSString *))arg3 failed:(void (^)(NSString *))arg4;
- (void)bindDeviceTokenWithUserID:(NSString *)arg1 token:(NSString *)arg2 success:(void (^)(NSString *))arg3 failed:(void (^)(NSString *))arg4;
- (void)uploadUserTrack:(NSDictionary *)arg1 userId:(NSString *)arg2 success:(void (^)(NSDictionary *))arg3 failed:(void (^)(NSDictionary *))arg4;
- (void)synchronizedPushSettingIfNeeded:(void (^)(void))arg1 failed:(void (^)(void))arg2;
- (NSString *)pushServiceToken;
- (void)SubmitDeviceToken:(NSData *)arg1 success:(void (^)(NSString *))arg2 failed:(void (^)(NSString *))arg3;
- (void)needAPNSPushGuide:(NSString *)arg1;
- (_Bool)serviceEnabled;
- (unsigned long long)serviceType;
- (void)registerPushSeverice;
- (NSString *)pushProviderServerURL;
- (void)setPushProviderServerURL:(NSString *)arg1;
@end
