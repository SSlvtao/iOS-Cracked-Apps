//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WXApiDelegate.h"

@class NSDictionary, NSRecursiveLock, NSString;

@interface QLWeiXinLoginManager : NSObject <WXApiDelegate>
{
    _Bool _logInForRefreshToken;
    NSRecursiveLock *_loginLock;
    id <QLWeiXinLoginManagerDelegate><NSObject> _delegate;
    unsigned long long _serviceOptions;
    unsigned long long _serviceState;
    NSString *_openID;
    NSString *_accessToken;
    NSString *_refreshToken;
    NSDictionary *_userInfo;
    NSString *_code;
}

+ (unsigned long long)getServiceState;
+ (id)sharedInstance;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(retain, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(retain, nonatomic) NSString *openID; // @synthesize openID=_openID;
@property(nonatomic) unsigned long long serviceState; // @synthesize serviceState=_serviceState;
@property(nonatomic) unsigned long long serviceOptions; // @synthesize serviceOptions=_serviceOptions;
@property(nonatomic) id <QLWeiXinLoginManagerDelegate><NSObject> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loginServiceDidSuccess;
- (void)loginServiceRefreshStart;
- (void)loginServiceStart;
- (void)postNeedUpdateTokenWithRefresh;
- (void)postNeedUpdateTokenWithCode;
- (void)onResp:(id)arg1;
- (void)onReq:(id)arg1;
- (void)clearLoginInfo;
- (double)expiredTimeInterval;
- (_Bool)isWillExpired;
- (_Bool)isExpired;
- (void)updateUserInfo:(id)arg1;
- (void)updateUserInfo:(id)arg1 headImgUrl:(id)arg2;
- (void)updateToken:(id)arg1 accessToken:(id)arg2 refreshToken:(id)arg3 expireTime:(id)arg4 scope:(id)arg5;
- (id)getCode;
- (_Bool)isAccessTokenEffective;
- (id)generateGTK;
- (_Bool)isWXAppInstalled;
- (_Bool)timelineAPIIsValid;
- (id)getUserInfo;
- (id)getHeadImageURL;
- (id)getNickname;
- (id)getRefreshToken;
- (id)getAccessToken;
- (id)getOpenID;
- (id)getAppID;
- (id)generateParamsForAPI;
- (id)generateCookieForAPI;
- (void)refreshAccessTokenAtOnce;
- (void)checkAccessToken;
- (void)logOut;
- (_Bool)isLoggedIn;
- (_Bool)handleOpenURL:(id)arg1;
- (void)getCodeWithViewController:(id)arg1 options:(unsigned long long)arg2;
- (void)logIn:(unsigned long long)arg1 viewController:(id)arg2 delegate:(id)arg3;
- (void)logInWithViewController:(id)arg1 delegate:(id)arg2;
- (void)tryToRegistWXApi;
- (void)initAccount;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

