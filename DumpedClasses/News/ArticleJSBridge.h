//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSJSBridge.h"

#import "SSActivityViewDelegate.h"

@class NSDictionary, NSString, NSTimer, SDWebImageManager, SSActivityView, TTActivityShareManager, TTDetailContainerViewModel;

@interface ArticleJSBridge : SSJSBridge <SSActivityViewDelegate>
{
    TTActivityShareManager *_shareManager;
    SDWebImageManager *_imageManager;
    NSTimer *_imageDownloadTimeoutTimer;
    NSString *_loginCallbackID;
    NSString *_sharePGCCallbackID;
    id _closeReference;
    SSActivityView *_phoneShareView;
    NSDictionary *_shareData;
    NSString *_mediaID;
    NSString *_userID;
    TTDetailContainerViewModel *_detailModel;
    long long _curShareSourceType;
}

+ (id)defaultIconImg;
@property(nonatomic) long long curShareSourceType; // @synthesize curShareSourceType=_curShareSourceType;
@property(retain, nonatomic) TTDetailContainerViewModel *detailModel; // @synthesize detailModel=_detailModel;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *mediaID; // @synthesize mediaID=_mediaID;
@property(retain, nonatomic) NSDictionary *shareData; // @synthesize shareData=_shareData;
@property(retain, nonatomic) SSActivityView *phoneShareView; // @synthesize phoneShareView=_phoneShareView;
@property(retain, nonatomic) id closeReference; // @synthesize closeReference=_closeReference;
@property(retain, nonatomic) NSString *sharePGCCallbackID; // @synthesize sharePGCCallbackID=_sharePGCCallbackID;
@property(retain, nonatomic) NSString *loginCallbackID; // @synthesize loginCallbackID=_loginCallbackID;
@property(retain, nonatomic) NSTimer *imageDownloadTimeoutTimer; // @synthesize imageDownloadTimeoutTimer=_imageDownloadTimeoutTimer;
@property(retain, nonatomic) SDWebImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(retain, nonatomic) TTActivityShareManager *shareManager; // @synthesize shareManager=_shareManager;
- (void).cxx_destruct;
- (void)sendVideoSubjectShareTrackWithItemType:(int)arg1;
- (void)sendPGCShareTrackWithItemType:(int)arg1;
- (_Bool)shouldReplaceShareData:(id)arg1;
- (id)replacedSharedDataForData:(id)arg1;
- (void)registerCopyToClipboard;
- (void)registerSystemShare;
- (void)registerGetSubScribedChannelList;
- (void)registerAddChannel;
- (void)changeSubscribeCount:(id)arg1;
- (void)registerPageStateChange;
- (void)blockUnblockUserNotification:(id)arg1;
- (void)pgcArticleDonateFinishedNotification:(id)arg1;
- (void)concernCareStatusChangedNotification:(id)arg1;
- (void)forumLikeStatusChangedNotification:(id)arg1;
- (void)relationActionNotification:(id)arg1;
- (void)subscribeStatusChangedNotification:(id)arg1;
- (void)registerAddEventListener;
- (void)registerStatusRelatedNotification;
- (void)removeAccountNotification;
- (void)activityView:(id)arg1 didCompleteByItemType:(int)arg2;
- (void)registerOpenHotsoon;
- (void)registerOpenAction;
- (void)shareWithUserID:(id)arg1 callbackId:(id)arg2;
- (void)shareWithmediaID:(id)arg1 callbackId:(id)arg2;
- (void)shareWithExploreEntry:(id)arg1;
- (void)shareWithArticle:(id)arg1;
- (void)registerSharePanel;
- (void)registerSharePGC;
- (void)registerMediaUnlike;
- (void)registerMediaLike;
- (void)registerGallery;
- (void)registerClose;
- (void)shareWithImage:(id)arg1 data:(id)arg2;
- (id)sharedPlatformForData:(id)arg1;
- (void)timeoutTimer:(id)arg1;
- (void)startShareWithData:(id)arg1;
- (void)registerShareHandler;
- (void)registerAccountStatus;
- (void)cancelLogin:(id)arg1;
- (void)loginClosed:(id)arg1;
- (void)accountChanged:(id)arg1;
- (void)listenCall:(long long)arg1;
- (void)registerCallNativePhone;
- (void)registerTemaiLinkService;
- (void)registerToast;
- (void)registerLogin;
- (void)registerAppInstalled;
- (void)registerPauseVideo;
- (void)registerPlayVideo;
- (void)registerPlayNativeVideo;
- (void)registerPay;
- (void)registerIsVisibleJSBridgeHandler;
- (void)articleCommonInit;
- (id)init;
- (id)initWithWebView:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
