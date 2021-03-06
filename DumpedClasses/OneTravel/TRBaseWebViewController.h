//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRTopBaseViewController.h"

#import "DDASRKefuDegegate.h"
#import "KMRecorderTimerDelegate.h"
#import "NSURLConnectionDataDelegate.h"
#import "ONEGestureBackInteractionDelegate.h"
#import "ONEOrientationRotationProtocol.h"
#import "ONEShareControllerDelegate.h"
#import "ONEWebViewJavaScriptBridgeDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIWebViewDelegate.h"
#import "WKNavigationDelegate.h"

@class NSArray, NSData, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString, NSURLRequest, ONEBridgeImagePickerController, ONEBridgePaymentController, ONEFusionScanCommponent, ONEThirdPartyLoginAuthorizationController, ONEWKWebView, ONEWebViewHistoryStack, TRBaseWebProgressBar, TRBaseWebView, UIButton, UIImage, UIImageView, UIPanGestureRecognizer;

@interface TRBaseWebViewController : TRTopBaseViewController <ONEWebViewJavaScriptBridgeDelegate, KMRecorderTimerDelegate, DDASRKefuDegegate, ONEShareControllerDelegate, UIWebViewDelegate, NSURLConnectionDataDelegate, ONEGestureBackInteractionDelegate, UIGestureRecognizerDelegate, WKNavigationDelegate, ONEOrientationRotationProtocol>
{
    _Bool _isHideCloseButton;
    _Bool _isHiddenHUD;
    _Bool _shouldProgressBarHidden;
    _Bool _isRemoveTokenAndPhone;
    _Bool _isRemoveExtendParams;
    _Bool _forceEnableIntelligentCS;
    _Bool _canPageRotate;
    _Bool _hasNoticedDismiss;
    _Bool _enableIntelligentCustomService;
    _Bool _usingWKWebView;
    _Bool _enableJSBConsole;
    TRBaseWebView *_webView;
    ONEWKWebView *_wkWebView;
    NSString *_httpMethod;
    NSData *_postBody;
    NSString *_url;
    NSString *_whiteListUrl;
    UIButton *_moreButton;
    NSString *_shareFromKey;
    CDUnknownBlockType _dismissNotice;
    id <WKNavigationDelegate> _wkNavigationDelegateForSubClass;
    NSString *_navTitle;
    NSArray *_shareDatas;
    NSString *_reloadUrl;
    UIPanGestureRecognizer *_swipeRightGesture;
    UIImageView *_historyView;
    ONEWebViewHistoryStack *_historyStack;
    double _startPanX;
    UIImage *_curPreview;
    NSNumber *_shouldSwipeBackEnabledNumber;
    double _maxTitlelabelWidth;
    TRBaseWebProgressBar *_progressView;
    NSURLRequest *_currentRequest;
    NSMutableArray *_JSBStateArray;
    NSMutableDictionary *_loadingTimeDic;
    ONEFusionScanCommponent *_scanComponent;
}

+ (void)setCommonValueForReq:(CDUnknownBlockType)arg1 resp:(CDUnknownBlockType)arg2;
+ (void)setShouldSwipeRightBackEnabled:(_Bool)arg1;
+ (id)channelNo;
+ (void)setChannelNo:(id)arg1;
+ (void)load;
@property(retain, nonatomic) ONEFusionScanCommponent *scanComponent; // @synthesize scanComponent=_scanComponent;
@property(retain, nonatomic) NSMutableDictionary *loadingTimeDic; // @synthesize loadingTimeDic=_loadingTimeDic;
@property(retain, nonatomic) NSMutableArray *JSBStateArray; // @synthesize JSBStateArray=_JSBStateArray;
@property(nonatomic) _Bool enableJSBConsole; // @synthesize enableJSBConsole=_enableJSBConsole;
@property(nonatomic) _Bool usingWKWebView; // @synthesize usingWKWebView=_usingWKWebView;
@property(retain, nonatomic) NSURLRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(nonatomic) _Bool enableIntelligentCustomService; // @synthesize enableIntelligentCustomService=_enableIntelligentCustomService;
@property(retain, nonatomic) TRBaseWebProgressBar *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) double maxTitlelabelWidth; // @synthesize maxTitlelabelWidth=_maxTitlelabelWidth;
@property(retain, nonatomic) NSNumber *shouldSwipeBackEnabledNumber; // @synthesize shouldSwipeBackEnabledNumber=_shouldSwipeBackEnabledNumber;
@property(retain, nonatomic) UIImage *curPreview; // @synthesize curPreview=_curPreview;
@property(nonatomic) double startPanX; // @synthesize startPanX=_startPanX;
@property(retain, nonatomic) ONEWebViewHistoryStack *historyStack; // @synthesize historyStack=_historyStack;
@property(retain, nonatomic) UIImageView *historyView; // @synthesize historyView=_historyView;
@property(retain, nonatomic) UIPanGestureRecognizer *swipeRightGesture; // @synthesize swipeRightGesture=_swipeRightGesture;
@property(nonatomic) _Bool hasNoticedDismiss; // @synthesize hasNoticedDismiss=_hasNoticedDismiss;
@property(nonatomic) _Bool canPageRotate; // @synthesize canPageRotate=_canPageRotate;
@property(copy, nonatomic) NSString *reloadUrl; // @synthesize reloadUrl=_reloadUrl;
@property(nonatomic) _Bool forceEnableIntelligentCS; // @synthesize forceEnableIntelligentCS=_forceEnableIntelligentCS;
@property(nonatomic) _Bool isRemoveExtendParams; // @synthesize isRemoveExtendParams=_isRemoveExtendParams;
@property(nonatomic) _Bool isRemoveTokenAndPhone; // @synthesize isRemoveTokenAndPhone=_isRemoveTokenAndPhone;
@property(nonatomic) _Bool shouldProgressBarHidden; // @synthesize shouldProgressBarHidden=_shouldProgressBarHidden;
@property(nonatomic) _Bool isHiddenHUD; // @synthesize isHiddenHUD=_isHiddenHUD;
@property(nonatomic) _Bool isHideCloseButton; // @synthesize isHideCloseButton=_isHideCloseButton;
@property(retain, nonatomic) NSArray *shareDatas; // @synthesize shareDatas=_shareDatas;
@property(retain, nonatomic) NSString *navTitle; // @synthesize navTitle=_navTitle;
@property(nonatomic) __weak id <WKNavigationDelegate> wkNavigationDelegateForSubClass; // @synthesize wkNavigationDelegateForSubClass=_wkNavigationDelegateForSubClass;
@property(copy, nonatomic) CDUnknownBlockType dismissNotice; // @synthesize dismissNotice=_dismissNotice;
@property(retain, nonatomic) NSString *shareFromKey; // @synthesize shareFromKey=_shareFromKey;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) NSString *whiteListUrl; // @synthesize whiteListUrl=_whiteListUrl;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSData *postBody; // @synthesize postBody=_postBody;
@property(copy, nonatomic) NSString *httpMethod; // @synthesize httpMethod=_httpMethod;
@property(retain, nonatomic) ONEWKWebView *wkWebView; // @synthesize wkWebView=_wkWebView;
@property(retain, nonatomic) TRBaseWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (id)realWebView;
- (void)handleSingleTap:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)disableGuesture;
- (_Bool)shouldSwipeRightBackEnabled;
- (void)configureSwipeGesture:(_Bool)arg1;
- (void)panGesture:(id)arg1;
- (void)tapGesture:(id)arg1;
- (void)addHistoryModelWithWebView:(id)arg1 request:(id)arg2;
- (void)screenShoot;
- (void)determinedRotateAfterHTMLLoaded;
- (_Bool)webViewOrientationIsLandscape;
- (_Bool)canRotate;
- (void)parserNavWithUrl:(id)arg1;
- (void)loadInitParams;
- (void)setUserAgent;
- (void)progressViewEnd;
- (void)progressViewStart;
- (void)hideHUD;
- (void)showHUD;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)trWebViewWillGoBack:(id)arg1;
- (void)trWebView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)trWebViewDidFinishLoad:(id)arg1;
- (void)trWebViewDidStartLoad:(id)arg1;
- (_Bool)trWebView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (_Bool)isWebViewHasNetwork;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (_Bool)canGoBack;
- (void)updateNaviTitle:(id)arg1;
- (void)webViewGoBack;
- (void)backEvent;
- (void)backEvent:(id)arg1;
- (void)closeButtonClick:(id)arg1;
- (void)moreButtonClick:(id)arg1;
- (void)setNavTitleLable:(id)arg1;
- (void)initNaviView;
- (id)imageFromThisPodNamed:(id)arg1;
- (void)loginSuccess:(id)arg1;
- (void)endPerformance;
- (void)startPerformance;
- (void)showScanView:(_Bool)arg1;
- (void)showAdditionView:(_Bool)arg1;
- (void)showRightView:(_Bool)arg1;
- (void)cleanCache;
- (id)getParamsString;
- (id)additionalUrl;
- (id)URLEncodeWithString:(id)arg1;
- (id)sigAddedUrlWithUrlStr:(id)arg1;
- (id)totalUrl;
- (id)baseUrl;
- (id)urlMappingSupport:(id)arg1;
- (void)setJSBState:(id)arg1;
- (void)initJSBConsole;
- (void)reload;
- (void)loadRequest:(id)arg1;
- (void)loadRequest;
- (void)reloadWebView;
- (void)viewDidLoad;
- (void)didMoveToParentViewController:(id)arg1;
- (void)configureParams;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)shouldUseProgressBarStyle;
- (id)initWithUrl:(id)arg1 usingWKWebView:(_Bool)arg2;
- (void)forInit;
- (id)initWithUrl:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
- (void)setSwipeBackEnabled:(_Bool)arg1;
- (void)webViewJavaScriptBridge:(id)arg1 callShouldStartLoadRequestWithURL:(id)arg2;
- (void)one_executeBridgeHandlerCallback:(CDUnknownBlockType)arg1 withData:(id)arg2;
- (void)one_registerCommonAuthorizeHandler;
- (void)one_registerOpenVerifyComponentHandler;
- (void)one_registerClearCacheHandler;
- (void)one_registerCommonPayHandler;
- (void)one_registerGetSystemInfoHandler;
- (void)one_registerGetBase64ImageHandler;
- (void)one_registerSetPayHandler;
- (void)one_registerSetTitleHandler;
- (void)one_registerRequestLoginHandler;
- (void)one_registerGetLocationInfoHandler;
- (void)one_registerRefreshPageHandler;
- (void)one_registerOpenPageHandler;
- (void)one_registerClosePageHandler;
- (void)one_registerGetUserInfoHandler;
- (void)one_registerHideEntranceHandler;
- (void)one_registerShowEntranceHandler;
- (void)one_registerInvokeEntranceHandler;
- (void)one_registerInitEntranceHandler;
- (void)one_registerAliSceneTimelineShareHandler;
- (void)one_registerAliSceneSessionShareHandler;
- (void)one_registerSinaWeiboShareHandler;
- (void)one_registerQQShareHandler;
- (void)one_registerQzoneShareHandler;
- (void)one_registerWechatTimelineShareHandler;
- (void)one_registerWechatSessionShareHandler;
- (void)one_registerSelectCouponCallHandler:(CDUnknownBlockType)arg1;
- (void)one_registerAgreeMarkupCallHandler:(CDUnknownBlockType)arg1;
- (void)one_setupBridgeV5xWithBridgeV4x:(id)arg1;
- (id)one_bridge;
@property(retain, nonatomic) ONEBridgeImagePickerController *one_imagePickerController;
@property(retain, nonatomic) ONEBridgePaymentController *one_paymentController;
@property(copy, nonatomic) NSString *one_bridgeShareCallbackHandler;
@property(copy, nonatomic) CDUnknownBlockType one_bridgeShareCallback;
@property(retain, nonatomic) ONEThirdPartyLoginAuthorizationController *one_loginAuthorizationController;
- (void)callbackResultWithParams:(id)arg1;
- (void)initJSBridgeForDiDiPay;
- (void)one_bridgeCallShouldStartLoadRequestWithURL:(id)arg1;
- (void)initJSBridgeOpenPayComponent;
- (void)initJSBridgeUpdateNaviTitle;
- (void)initJSbridgeConnetCMB;
- (void)initJSbridgeJumpToPayVC;
- (void)initJSBridgeGetH5Cache;
- (void)initJSBridgeSetH5Cache;
- (void)initJSBridgeForApolloSDK;
- (void)initJSBridgeTraceLog;
- (void)initJSBridgeOpenNativeWebPage;
- (void)initJSBridgeCallCameraOrPhotoLibary;
- (void)initJSBridgeGetLocationInfo;
- (void)initJSBridgeGetSystemInfo;
- (void)initJSBridgeGetUserInfo;
- (id)__JSONSerializationData:(id)arg1;
- (void)callHandler:(id)arg1 data:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)registerHandler:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)callEnterpriseResult:(id)arg1;
- (void)callWxPayResult:(id)arg1;
- (id)addressBook;
- (void)initJSBridgeReadAddressBookWithHandler:(CDUnknownBlockType)arg1;
- (void)callAlipayResult:(id)arg1;
- (void)initJSBridgeLoadAlipayWithHandler:(CDUnknownBlockType)arg1;
- (void)initJSBridgeLoadWeChatWithHandler:(CDUnknownBlockType)arg1;
- (void)initJSBridgeEnterGameWithHandler:(CDUnknownBlockType)arg1;
- (void)initJSBridgeGameDownloadWithHandler:(CDUnknownBlockType)arg1;
- (void)initJSBridgePaycheckWithHandler:(CDUnknownBlockType)arg1;
- (void)initJSBridgeSelectPayWayWithHandler:(CDUnknownBlockType)arg1;
- (void)addAlipayAblity;
- (void)addWeChatPayAblity;
- (void)initJSBridgeOpenFreePayWithHandler:(CDUnknownBlockType)arg1;
- (void)initJSBridgeUploadUserLogWithHandler:(CDUnknownBlockType)arg1;
- (void)initJSBridgeO2OWithHandler:(CDUnknownBlockType)arg1;
- (void)initJSBridgeCancelTripShareWithHandler:(CDUnknownBlockType)arg1;
- (void)initJSBridgeUploadLocationWithHandler:(CDUnknownBlockType)arg1;
- (void)initJSBridgeCancelOrderWithHandler:(CDUnknownBlockType)arg1;
- (void)initJSBridgeHideProgressHud;
- (void)initJSBridgeShowProgressHud;
- (void)selectDynamicPriceCallBack:(id)arg1;
- (void)initJSBridgeShowPriceDialog:(CDUnknownBlockType)arg1;
- (void)initJSBridgeDynamicPriceWithHandler:(CDUnknownBlockType)arg1;
- (void)initJSBridgeCompanyBaoXiaoWithHandler:(CDUnknownBlockType)arg1;
- (void)selectCityCallBackToWeb:(id)arg1;
- (void)initJSBridgeActivitySelectAddrWithHandler:(CDUnknownBlockType)arg1;
- (void)initJSBridgeActivitySelectCityWithHandler:(CDUnknownBlockType)arg1;
- (void)initJSBridgeActivityCreateOrderWithHandler:(CDUnknownBlockType)arg1;
- (void)initJSBridgeMessageCenterAction;
- (void)initJSBridgeNativeRedirectWithHandler:(CDUnknownBlockType)arg1;
- (void)initJSBridgeShareAction;
- (void)refreshPage;
- (void)closePage;
- (void)initJSBridgeRefreshAction;
- (void)initJSBridgeCloseAction;
- (void)registerGameParas;
- (void)initJSBridgeEntranceAction;
- (void)initJSBridgeOpenURL;
- (void)initJSBridgeLoginWithCallback;
- (void)initJSBridgeLog;
- (void)initJSBridgeLoginAction;
- (void)initJSBridgeInitAction;
- (void)initJSBridgeGetHydraData;
- (void)setWhiteListState:(_Bool)arg1;
- (void)initWebViewHelper;
- (id)whiteUrl;
- (id)webViewHelper;
- (id)kefuClient;
- (void)setKefuClient:(id)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)recountTimer;
- (void)setRecountTimer:(id)arg1;
- (id)KFFileID;
- (void)setKFFileID:(id)arg1;
- (long long)KFTimeValue;
- (void)setKFTimeValue:(long long)arg1;
- (_Bool)KFGetRecordReturn;
- (void)setKFGetRecordReturn:(_Bool)arg1;
- (_Bool)KFGetLocalReturn;
- (void)setKFGetLocalReturn:(_Bool)arg1;
- (_Bool)KFGetUploadReturn;
- (void)setKFGetUploadReturn:(_Bool)arg1;
- (_Bool)KFisFirstStart;
- (void)setKFisFirstStart:(_Bool)arg1;
- (void)TimerActionValueChange:(int)arg1;
- (void)GetMessgeFromKefu:(id)arg1 withStatus:(int)arg2;
- (void)getFinishMsgWhenFinishTranslate:(id)arg1 withErrornum:(id)arg2 AndStatus:(long long)arg3;
- (void)getErrorMsgWhenFinishTranslate:(id)arg1 withErrornum:(id)arg2 AndStatus:(long long)arg3;
- (void)getFileName:(id)arg1 AndPath:(id)arg2 AndERRORNumber:(id)arg3 AndStatus:(long long)arg4;
- (void)isPhoneCallIN;
- (void)initKFOnleinHelper;
- (void)initKfFunction;
- (void)closeCustomService;
- (void)setupCustomService;
- (_Bool)checkCustomServiceOpenWithUrlString:(id)arg1;
- (void)_evaluateJavaScript:(id)arg1;
- (void)one_shareCallbackForChannel:(long long)arg1 resultType:(long long)arg2;
- (void)shareControllerShareCanceled:(long long)arg1;
- (void)shareControllerShareFailed:(long long)arg1 withError:(id)arg2;
- (void)shareControllerShareSuccess:(long long)arg1;
- (id)one_shareController;
- (void)one_showSharePanelView;
- (void)one_shareWithData:(id)arg1 forType:(long long)arg2 inBridgeV5x:(_Bool)arg3;
- (void)one_didClickSharePanelItemTrackWithType:(id)arg1;
- (void)one_didShowSharePanelTrackForDatas:(id)arg1 slidetp:(_Bool)arg2;
- (void)one_clickSharePanelViewItemWithData:(id)arg1;
- (void)one_refreshPage;
- (void)one_setSharePanelDatas:(id)arg1 inBridgeV5x:(_Bool)arg2;
@property(copy, nonatomic) NSString *one_bridgeV4xCallback;
- (_Bool)one_inBridgeV5x;
- (void)setOne_inBridgeV5x:(_Bool)arg1;
- (void)setOne_sharePanelDatas:(id)arg1;
- (id)one_sharePanelDatas;
@property(copy, nonatomic) CDUnknownBlockType one_shareSDKCallback;
- (id)scaleToSize:(id)arg1 size:(struct CGSize)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)upLoadImageDataWithUrl:(id)arg1 withImage:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)callCameraOrPhotoLibary;
- (void)callPhotoLibary;
- (void)callCamera;
- (void)initDataWithCallbackDataDict:(id)arg1 withCallbackJS:(CDUnknownBlockType)arg2 withType:(int)arg3;
@property(copy, nonatomic) CDUnknownBlockType responseCallbackJS; // @dynamic responseCallbackJS;
@property(retain, nonatomic) NSDictionary *callbackDataDict; // @dynamic callbackDataDict;
@property(retain, nonatomic) NSString *rootUrl; // @dynamic rootUrl;
- (_Bool)__isMatchThirdPartyDomain:(id)arg1;
- (_Bool)__isValidateWebUrl:(id)arg1 rootDomain:(id)arg2;
- (_Bool)__isMatchRootDomain:(id)arg1;
- (_Bool)isMatchWhiteList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

