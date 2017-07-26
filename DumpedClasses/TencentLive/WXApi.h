//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WXApi : NSObject
{
}

+ (_Bool)sendResp:(id)arg1;
+ (_Bool)sendReq:(id)arg1;
+ (_Bool)sendAuthReq:(id)arg1 viewController:(id)arg2 delegate:(id)arg3;
+ (_Bool)handleScanResult:(id)arg1;
+ (_Bool)chooseInvoiceReq:(id)arg1;
+ (_Bool)chooseCardReq:(id)arg1;
+ (_Bool)addCardToWXCardPackageReq:(id)arg1;
+ (_Bool)jumpToBizWebview:(id)arg1;
+ (_Bool)openProfile:(id)arg1;
+ (_Bool)joinChatRoom:(id)arg1;
+ (_Bool)createChatRoom:(id)arg1;
+ (_Bool)openRankList:(id)arg1;
+ (_Bool)openWebview:(id)arg1;
+ (_Bool)openTempSession:(id)arg1;
+ (_Bool)sendHBReq:(id)arg1;
+ (_Bool)pay:(id)arg1;
+ (_Bool)auth:(id)arg1;
+ (id)packResp:(id)arg1;
+ (id)packReq:(id)arg1;
+ (_Bool)handleOpenURL:(id)arg1 delegate:(id)arg2;
+ (_Bool)handleOpenRankList:(id)arg1 delegate:(id)arg2;
+ (_Bool)handleOpenWebviewOpenUrl:(id)arg1 delegate:(id)arg2;
+ (_Bool)handleOpenTempSessionOpenUrl:(id)arg1 delegate:(id)arg2;
+ (_Bool)handleChooseInvoice:(id)arg1 delegate:(id)arg2;
+ (_Bool)handleChooseCard:(id)arg1 delegate:(id)arg2;
+ (_Bool)handleAddCardOpenUrl:(id)arg1 delegate:(id)arg2;
+ (_Bool)handleHBOpenUrl:(id)arg1 delegate:(id)arg2;
+ (_Bool)handlePayOpenUrl:(id)arg1 delegate:(id)arg2;
+ (_Bool)handleAuthOpenUrl:(id)arg1 delegate:(id)arg2;
+ (id)parseURLParams:(id)arg1;
+ (_Bool)openWXApp;
+ (id)getApiVersion;
+ (id)getWXAppInstallUrl;
+ (_Bool)isWXAppSupportApi;
+ (_Bool)isWXAppInstalled;
+ (void)registerAppSupportContentFlag:(unsigned long long)arg1;
+ (_Bool)registerApp:(id)arg1 enableMTA:(_Bool)arg2;
+ (_Bool)registerApp:(id)arg1;

@end

