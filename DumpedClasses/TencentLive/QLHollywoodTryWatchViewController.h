//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class KKMediaRootViewController, QLMovieIAPView;

@interface QLHollywoodTryWatchViewController : UIViewController
{
    _Bool _sholdJumpH5AfterLogin;
    _Bool _isFromH5PayPage;
    _Bool _hasClickPaySingleVideo;
    _Bool _hasIapDetailClosed;
    _Bool _showAletViewOfSinglePay;
    KKMediaRootViewController *_rootPlayer;
    QLMovieIAPView *_iapView;
}

@property(nonatomic) _Bool showAletViewOfSinglePay; // @synthesize showAletViewOfSinglePay=_showAletViewOfSinglePay;
@property(nonatomic) _Bool hasIapDetailClosed; // @synthesize hasIapDetailClosed=_hasIapDetailClosed;
@property(nonatomic) _Bool hasClickPaySingleVideo; // @synthesize hasClickPaySingleVideo=_hasClickPaySingleVideo;
@property(nonatomic) _Bool isFromH5PayPage; // @synthesize isFromH5PayPage=_isFromH5PayPage;
@property(nonatomic) _Bool sholdJumpH5AfterLogin; // @synthesize sholdJumpH5AfterLogin=_sholdJumpH5AfterLogin;
@property(readonly, nonatomic) QLMovieIAPView *iapView; // @synthesize iapView=_iapView;
@property(nonatomic) __weak KKMediaRootViewController *rootPlayer; // @synthesize rootPlayer=_rootPlayer;
- (void).cxx_destruct;
- (id)getPayDialogCopyWriting;
- (_Bool)isBecameVipButtonHidden;
- (void)hideSmallCtlPlayButton:(_Bool)arg1;
- (id)responceForTopviewBigBangConfigInfo;
- (void)configTopViewGiftBtn;
- (void)configtryWatchNaviBtnHidden:(_Bool)arg1 shouldReport:(_Bool)arg2;
- (int)styleForIapViewLeftBtnToPaySingleWhenPlayNeedPaySeries;
- (_Bool)payOrVipStatusShowLeftPayButton;
- (void)resetPlayStateWhenplayAuthorizeChange;
- (void)configLivetryWatchNaviBtn;
- (void)updateNaviBarHidden:(_Bool)arg1;
- (void)handleVipBttonMiddleTypeId:(unsigned long long)arg1 serviceState:(unsigned long long)arg2;
- (void)updateNaviBarButtonType:(long long)arg1;
- (_Bool)controlVideoVipButtonHidden:(_Bool)arg1;
- (_Bool)controlPreWatchVideoVipButtonHidden:(_Bool)arg1;
- (void)setBecomeVipButtonHidden:(_Bool)arg1;
- (void)controlRemoteButton;
- (void)preWatchVideoFinish;
- (void)jumpPayH5ForSeries;
- (void)forceRereshPayBillForPayVideo;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)titleOfSinglePayVideoTitle:(id)arg1 endString:(id)arg2;
- (id)stringForPayTimeOutWithButtonType:(long long)arg1;
- (void)couponPayFailed;
- (void)showUseCouponWatchVideoView;
- (void)preWatchVideoFinishStatistics;
- (void)showChoosePayWayView;
- (void)registerBtnAction:(id)arg1;
- (void)iapViewActionSwitchLogin:(id)arg1;
- (void)iapViewActionPayGiftWithBtn:(id)arg1;
- (void)paySingleVideoWithConfirmBlock:(CDUnknownBlockType)arg1;
- (void)transferVIPAlert;
- (_Bool)isPayOrVipSeries;
- (void)checkPayFromID:(id)arg1 type:(int)arg2 block:(CDUnknownBlockType)arg3;
- (void)confirmSingleVideoPay;
- (double)priceOfPaySingleVideo;
- (void)paySingleVideo;
- (_Bool)shouldShowChoosePayWayView;
- (_Bool)shouldShowLoginAlert;
- (void)iapViewActionRePaySingleVideoAfterLogin:(id)arg1;
- (void)iapViewActionPaySingleVideo:(id)arg1;
- (_Bool)checkMomentLogin;
- (void)iapViewActionLogin:(id)arg1;
- (void)iapViewActionCoupon:(id)arg1;
- (void)iapViewActionBecomeVip:(id)arg1;
- (void)iapViewActionExitFullScreen:(id)arg1;
- (void)hollywoodPreWatchBtnActionDataStaticsWithReplay:(_Bool)arg1;
- (void)iapViewActionRePlay:(id)arg1;
- (void)iapViewActionPlay:(id)arg1;
- (void)iapViewActionWithButton:(id)arg1;
- (void)configIAPViewTipInfoWithLogin:(_Bool)arg1 isVIP:(_Bool)arg2;
- (void)hiddenIapViewWhenSwitchPreWatchVideoPlay;
- (void)loadBigBangInfo;
- (void)updateIApViewPreWatchButtonTitle;
- (void)configStyleForIapViewLeftBtnToPaySingleWhenPlayNeedPaySeries;
- (void)handleUIWhenNonAutoPlay;
- (void)downLoadInfoHandle;
- (void)configIapViewWithPreWatchTime:(long long)arg1;
- (void)tryToHiddenPreWatchViewOfDownloadAndPlayTask;
- (void)prewtachForDownloadAndPlayVideoFinish;
- (void)configView:(id)arg1 mediaRootViewController:(id)arg2 destMovieID:(id)arg3 displayStyle:(int)arg4;
- (void)configIAPViewHidden;
- (void)preWatchIapViewHidden:(_Bool)arg1;
- (void)configIAPView;
- (struct CGRect)getFullScreenFrame;
- (struct CGRect)getSmallScreenFrame;
- (id)getCurrentVideoID;
- (id)myNaviBar;
- (void)performTryWatchSelector:(SEL)arg1 withObject:(id)arg2;
- (id)headerView;
- (_Bool)shouldAutoPlay;
- (void)tryShowAlertViewOfPaySingle;
- (void)tryToContiunePlay;
- (void)handleIapViewLeftButtonHidden;
- (void)movieVoucherLoadFinish;
- (void)loginInfoDidUpdate;
- (void)iAPDetailViewControllerClosed;
- (void)dealloc;
- (id)init;

@end

