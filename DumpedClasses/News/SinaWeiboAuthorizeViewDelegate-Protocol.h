//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, SinaWeiboAuthorizeView;

@protocol SinaWeiboAuthorizeViewDelegate <NSObject>
- (void)authorizeViewDidCancel:(SinaWeiboAuthorizeView *)arg1;
- (void)authorizeView:(SinaWeiboAuthorizeView *)arg1 didFailWithErrorInfo:(NSDictionary *)arg2;
- (void)authorizeView:(SinaWeiboAuthorizeView *)arg1 didRecieveAuthorizationCode:(NSString *)arg2;
@end
