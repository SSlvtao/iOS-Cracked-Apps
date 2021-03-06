//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UMSocialHandler.h"

#import "BriefWebControllerDelegate.h"
#import "UMSocialPlatformProvider.h"

@class NSArray, NSString, UINavigationController;

@interface UMSocialQQHandler : UMSocialHandler <BriefWebControllerDelegate, UMSocialPlatformProvider>
{
    UINavigationController *_qqRootVC;
    NSArray *_qqSchemeList;
    NSArray *_qzoneSchemeList;
    NSString *_currentQQInstalledScheme;
    NSString *_currentQZoneInstalledScheme;
    UINavigationController *_wechatRootVC;
}

+ (id)defaultManager;
+ (id)socialPlatformTypes;
+ (void)load;
@property(nonatomic) __weak UINavigationController *wechatRootVC; // @synthesize wechatRootVC=_wechatRootVC;
@property(retain, nonatomic) NSString *currentQZoneInstalledScheme; // @synthesize currentQZoneInstalledScheme=_currentQZoneInstalledScheme;
@property(retain, nonatomic) NSString *currentQQInstalledScheme; // @synthesize currentQQInstalledScheme=_currentQQInstalledScheme;
@property(retain, nonatomic) NSArray *qzoneSchemeList; // @synthesize qzoneSchemeList=_qzoneSchemeList;
@property(retain, nonatomic) NSArray *qqSchemeList; // @synthesize qqSchemeList=_qqSchemeList;
@property(nonatomic) __weak UINavigationController *qqRootVC; // @synthesize qqRootVC=_qqRootVC;
- (void).cxx_destruct;
- (void)handleShareResp:(id)arg1 source:(id)arg2;
- (void)handleSendShareResult:(long long)arg1;
- (_Bool)sendMessage:(unsigned long long)arg1 message:(id)arg2;
- (void)handleUserInfo:(id)arg1 error:(id)arg2 withAccessToken:(id)arg3 expiration:(id)arg4 openId:(id)arg5;
- (void)sendAsyncRequestWithUrl:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)sendUserInfoRequest:(id)arg1 expirationDate:(id)arg2 openId:(id)arg3;
- (void)handleAuthResp:(id)arg1;
- (void)backFromBriefWebController;
- (void)briefWebView:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)briefWebView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)sendCancelAuth;
- (_Bool)sendAuthRequest:(id)arg1 appId:(id)arg2 safari:(_Bool)arg3;
- (_Bool)handleOpenURL:(id)arg1;
- (void)shareWebPage:(id)arg1;
- (void)shareVedio:(id)arg1;
- (void)shareMusic:(id)arg1;
- (void)shareImage:(id)arg1;
- (void)shareTextObject:(id)arg1;
- (void)umSocial_ShareWithObject:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)umSocial_RequestForUserProfileWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)doUMSocial_RequestForUserProfileWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)doCheckValidAccesstoken:(id)arg1 withExpirationDate:(id)arg2 withOpenId:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)doUMSocial_AuthorizeAndRequestForUserProfileWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)saveAuthInfo:(id)arg1 accessToken:(id)arg2 refreshToken:(id)arg3 expiration:(id)arg4 openid:(id)arg5 unionId:(id)arg6 source:(id)arg7;
- (id)saveAuthInfo:(id)arg1;
- (void)umSocial_cancelAuthWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)umSocial_AuthorizeWithUserInfo:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)umSocial_handleOpenURL:(id)arg1;
- (void)umSocial_clearCacheData;
- (void)umSocial_setAppKey:(id)arg1 withAppSecret:(id)arg2 withRedirectURL:(id)arg3;
- (id)umSocial_PlatformSDKVersion;
- (_Bool)umSocial_isSupport;
- (_Bool)umSocial_isInstall;
- (_Bool)checkQZoneInstall;
- (_Bool)checkQQInstall;
- (_Bool)checkUrl:(id)arg1;
- (void)setSupportWebView:(_Bool)arg1;
- (unsigned long long)umSocial_SupportedFeatures;
- (_Bool)checkUrlSchema;
- (void)configHandle;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long socialPlatformType;
@property(readonly) Class superclass;

@end

