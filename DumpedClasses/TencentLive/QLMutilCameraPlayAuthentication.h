//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QLHeadStatusLoadingView, QLMBProgressHUD, QLMovieItem, QLMutilCameraInfo, QLMutilCameraPlayAuthenticationView, QLVideoPayActionHandler;

@interface QLMutilCameraPlayAuthentication : NSObject
{
    QLMutilCameraPlayAuthenticationView *_mutilCameraPlayAuthenticationView;
    CDUnknownBlockType _playAuthBlock;
    CDUnknownBlockType _authTargetViewBlock;
    QLMutilCameraInfo *_cameraInfo;
    QLMBProgressHUD *_hudView;
    QLMovieItem *_movieItem;
    QLVideoPayActionHandler *_payActionHandler;
    QLHeadStatusLoadingView *_statusLoadingView;
}

+ (void)jumpThirdAppWithCameraInfo:(id)arg1;
+ (id)tipStringForType:(long long)arg1;
@property(retain, nonatomic) QLHeadStatusLoadingView *statusLoadingView; // @synthesize statusLoadingView=_statusLoadingView;
@property(retain, nonatomic) QLVideoPayActionHandler *payActionHandler; // @synthesize payActionHandler=_payActionHandler;
@property(retain, nonatomic) QLMovieItem *movieItem; // @synthesize movieItem=_movieItem;
@property(retain, nonatomic) QLMBProgressHUD *hudView; // @synthesize hudView=_hudView;
@property(retain, nonatomic) QLMutilCameraInfo *cameraInfo; // @synthesize cameraInfo=_cameraInfo;
@property(copy, nonatomic) CDUnknownBlockType authTargetViewBlock; // @synthesize authTargetViewBlock=_authTargetViewBlock;
@property(copy, nonatomic) CDUnknownBlockType playAuthBlock; // @synthesize playAuthBlock=_playAuthBlock;
@property(retain, nonatomic) QLMutilCameraPlayAuthenticationView *mutilCameraPlayAuthenticationView; // @synthesize mutilCameraPlayAuthenticationView=_mutilCameraPlayAuthenticationView;
- (void).cxx_destruct;
- (void)showHUDWithTip:(_Bool)arg1 tip:(id)arg2 markImg:(id)arg3 userMemberVar:(_Bool)arg4;
- (id)hudViewWithUserMemberVar:(_Bool)arg1;
- (void)showTipViewWithType:(long long)arg1;
- (long long)payStateForCurrentCamera;
- (void)checkUserVip;
- (void)paySinglePrice:(double)arg1;
- (void)paySingleVideoDiscount;
- (void)paySingleVideo;
- (void)openVip;
- (void)actionWithButton:(id)arg1;
- (void)showPayAuthViewWithCameraInfo:(id)arg1;
- (void)updatePayAuthViewWhenloginStateChangeCameInfo:(id)arg1;
- (void)updateNotificationStatus:(long long)arg1 cameraInfo:(id)arg2;
- (void)refreshCurrentBillForCameraInfo:(id)arg1;
- (void)showLoadingView;
- (void)hiddenLoadingView;
- (void)removeLoadingView;
- (id)getCurrentCID;
- (void)jumpIAPController;
- (void)checkPlayAuth;
- (_Bool)shouldAutorotateMutilCamera;
- (void)forceShowCameraViewToTop;
- (void)clearInfo;
- (void)dealloc;
- (id)initWithCameraInfo:(id)arg1 authBlock:(CDUnknownBlockType)arg2 movieItem:(id)arg3 showAuthInTargetView:(CDUnknownBlockType)arg4;

@end

