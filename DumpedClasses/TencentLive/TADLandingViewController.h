//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TADBaseLandingViewController.h"

#import "SKStoreProductViewControllerDelegate.h"
#import "TADNJKWebViewProgressDelegate.h"
#import "TADNetworkViewDelegate.h"
#import "TADScanQRCodeViewControllerDelegate.h"
#import "TADTapToReloadViewDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIWebViewDelegate.h"
#import "WKNavigationDelegate.h"
#import "WKScriptMessageHandler.h"
#import "WKUIDelegate.h"

@class NSString, TADBlockedLandingView, TADLandingViewBackgroundView, TADNJKWebViewProgress, TADNJKWebViewProgressView, TADNetworkView, TADShareItem, TADStoreViewController, TADTapToReloadView, UIBarButtonItem, UILabel, UIToolbar, UIView;

@interface TADLandingViewController : TADBaseLandingViewController <UIWebViewDelegate, TADNetworkViewDelegate, TADTapToReloadViewDelegate, WKNavigationDelegate, WKUIDelegate, WKScriptMessageHandler, TADNJKWebViewProgressDelegate, UIActionSheetDelegate, UIGestureRecognizerDelegate, TADScanQRCodeViewControllerDelegate, SKStoreProductViewControllerDelegate>
{
    Class WKWebViewClass;
    _Bool _landingUrlLoadingFinished;
    _Bool _isDownloadAd;
    _Bool _readyToClose;
    _Bool _viewIsLoaded;
    _Bool _openAppstoreInEmptyView;
    _Bool _isStatusBarHiddenInParentView;
    id <TADLandingControlDelegate> _landingControlDelegate;
    TADShareItem *_shareItem;
    double _timeoutInterval;
    NSString *_openUrlType;
    long long _titleToolBarStyle;
    NSString *_oid;
    UIView *_contentView;
    UIToolbar *_titleToolbar;
    UILabel *_titleLabel;
    TADNetworkView *_networkView;
    TADTapToReloadView *_tapToReloadView;
    TADBlockedLandingView *_blockedLandingView;
    UILabel *_jumpingAppstoreLabel;
    NSString *_rawAVAudioSessionCategory;
    UIBarButtonItem *_returnItem;
    UIBarButtonItem *_closeItem;
    UIBarButtonItem *_backItem;
    UIBarButtonItem *_forwardItem;
    UIBarButtonItem *_refreshItem;
    NSString *_userAgentStr;
    long long _originalInterfaceOrientation;
    NSString *_aVAudioSessionCategory;
    TADNJKWebViewProgressView *_progressView;
    TADNJKWebViewProgress *_progressProxy;
    TADStoreViewController *_storeController;
    NSString *_selectedImageURL;
    NSString *_decodeQRCodeURL;
    TADLandingViewBackgroundView *_backgroundView;
    long long _scanQRCodeHandle;
    NSString *_webCallback;
}

@property(copy, nonatomic) NSString *webCallback; // @synthesize webCallback=_webCallback;
@property(nonatomic) long long scanQRCodeHandle; // @synthesize scanQRCodeHandle=_scanQRCodeHandle;
@property(retain, nonatomic) TADLandingViewBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) NSString *decodeQRCodeURL; // @synthesize decodeQRCodeURL=_decodeQRCodeURL;
@property(copy, nonatomic) NSString *selectedImageURL; // @synthesize selectedImageURL=_selectedImageURL;
@property(retain, nonatomic) TADStoreViewController *storeController; // @synthesize storeController=_storeController;
@property(retain, nonatomic) TADNJKWebViewProgress *progressProxy; // @synthesize progressProxy=_progressProxy;
@property(retain, nonatomic) TADNJKWebViewProgressView *progressView; // @synthesize progressView=_progressView;
@property(copy, nonatomic) NSString *aVAudioSessionCategory; // @synthesize aVAudioSessionCategory=_aVAudioSessionCategory;
@property(nonatomic) _Bool isStatusBarHiddenInParentView; // @synthesize isStatusBarHiddenInParentView=_isStatusBarHiddenInParentView;
@property(nonatomic) long long originalInterfaceOrientation; // @synthesize originalInterfaceOrientation=_originalInterfaceOrientation;
@property(copy, nonatomic) NSString *userAgentStr; // @synthesize userAgentStr=_userAgentStr;
@property(retain, nonatomic) UIBarButtonItem *refreshItem; // @synthesize refreshItem=_refreshItem;
@property(retain, nonatomic) UIBarButtonItem *forwardItem; // @synthesize forwardItem=_forwardItem;
@property(retain, nonatomic) UIBarButtonItem *backItem; // @synthesize backItem=_backItem;
@property(retain, nonatomic) UIBarButtonItem *closeItem; // @synthesize closeItem=_closeItem;
@property(retain, nonatomic) UIBarButtonItem *returnItem; // @synthesize returnItem=_returnItem;
@property _Bool openAppstoreInEmptyView; // @synthesize openAppstoreInEmptyView=_openAppstoreInEmptyView;
@property _Bool viewIsLoaded; // @synthesize viewIsLoaded=_viewIsLoaded;
@property _Bool readyToClose; // @synthesize readyToClose=_readyToClose;
@property(copy, nonatomic) NSString *rawAVAudioSessionCategory; // @synthesize rawAVAudioSessionCategory=_rawAVAudioSessionCategory;
@property(retain, nonatomic) UILabel *jumpingAppstoreLabel; // @synthesize jumpingAppstoreLabel=_jumpingAppstoreLabel;
@property(retain, nonatomic) TADBlockedLandingView *blockedLandingView; // @synthesize blockedLandingView=_blockedLandingView;
@property(retain, nonatomic) TADTapToReloadView *tapToReloadView; // @synthesize tapToReloadView=_tapToReloadView;
@property(retain, nonatomic) TADNetworkView *networkView; // @synthesize networkView=_networkView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIToolbar *titleToolbar; // @synthesize titleToolbar=_titleToolbar;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) NSString *oid; // @synthesize oid=_oid;
@property(nonatomic) _Bool isDownloadAd; // @synthesize isDownloadAd=_isDownloadAd;
@property(nonatomic, setter=setTitleToolBarStyle:) long long titleToolBarStyle; // @synthesize titleToolBarStyle=_titleToolBarStyle;
@property(nonatomic) _Bool landingUrlLoadingFinished; // @synthesize landingUrlLoadingFinished=_landingUrlLoadingFinished;
@property(copy, nonatomic) NSString *openUrlType; // @synthesize openUrlType=_openUrlType;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(retain, nonatomic) TADShareItem *shareItem; // @synthesize shareItem=_shareItem;
@property(nonatomic) __weak id <TADLandingControlDelegate> landingControlDelegate; // @synthesize landingControlDelegate=_landingControlDelegate;
- (void).cxx_destruct;
- (void)jsSetShareData:(id)arg1;
- (void)tadUserHasClosedScanController;
- (void)tadQRcodeScanResult:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)imageFromView:(id)arg1;
- (id)decodeImgWith:(id)arg1;
- (void)longPressHandle:(id)arg1;
- (void)tadImage:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)saveImageWithUrlToPhotosAlbum:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showActionSheetWithWebTags:(id)arg1 tagSrc:(id)arg2 inContainView:(id)arg3;
- (void)openContextualMenuAt:(struct CGPoint)arg1;
- (id)getCurrentPageUrl;
- (id)getCurrentPageFirstImgSrc;
- (void)jsInjection;
- (id)evaluateJavaScript:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)webViewProgress:(id)arg1 updateProgress:(float)arg2;
- (void)finishLoadingUrl:(id)arg1;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (id)scriptToAddToDocumentWithType:(long long)arg1;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentAppWithParams:(id)arg1;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)p_showReloadTip;
- (void)p_removeJumpingAppstoreTip;
- (void)p_showJumpingAppstoreTip;
- (void)p_presentInternalAppstore;
- (void)presentAppWithLink:(id)arg1 Id:(id)arg2 InEmptyWebview:(_Bool)arg3;
- (void)hideBlockedLandingView;
- (void)showBlockedLandingView;
- (id)tadGetCurrentPageFilterByJs;
- (id)tadHackWXJsBridgeForShareInfo;
- (void)tadQRcodeHandleWithResult:(id)arg1;
- (void)scanQRCode:(long long)arg1 withWebCallback:(id)arg2;
- (void)setTADLandingViewSupportExtendAPIs;
- (_Bool)isHttpScheme:(id)arg1;
- (id)barButtonItemWithImage:(id)arg1 disabledImage:(id)arg2 touchAction:(SEL)arg3 size:(struct CGSize)arg4;
- (id)spaceItemWithWidth:(double)arg1;
- (id)getWebviewTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)updateTitleToolBarButtons;
- (void)stopAnimating;
- (void)startAnimating;
- (void)loadAdURL;
- (void)tapToReloadViewTouched:(id)arg1;
- (void)adNetworkViewTouched:(id)arg1;
- (void)clickWithURL:(id)arg1 actionId:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)setUserKeyForJSBridge;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)handleCloseNotification:(id)arg1;
- (void)closeAnimated:(_Bool)arg1;
- (void)popUp:(_Bool)arg1;
- (int)dragbackType;
- (void)prepareToClose;
- (void)closeAction;
- (void)shareActionHandle:(id)arg1;
- (void)refreshAction;
- (void)forwardAction;
- (void)backAction;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)loadView;
- (void)setRefreshItemWithLoadStatus:(_Bool)arg1;
- (void)setTitleToolbarItemsForStyle:(long long)arg1;
- (void)dealloc;
- (id)uiwebviewUserAgent;
- (void)setUserAgent;
- (void)resetUserAgent;
- (id)init;
- (id)initWithStyle:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

