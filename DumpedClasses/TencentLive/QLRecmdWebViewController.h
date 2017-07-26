//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLWebViewController.h"

#import "P_QLDragToRefresh.h"

@class NSString;

@interface QLRecmdWebViewController : QLWebViewController <P_QLDragToRefresh>
{
    _Bool _isLoaded;
    NSString *_channelName;
    NSString *_channelID;
    long long *_statusBarStyle;
}

@property(nonatomic) long long *statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(copy, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
@property(copy, nonatomic) NSString *channelName; // @synthesize channelName=_channelName;
@property(nonatomic) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
- (void).cxx_destruct;
- (long long)qlStausBarStyle;
- (void)configStatusBarStyle:(long long)arg1;
- (_Bool)shouldShowRefreshViewInActivityTime;
- (void)doSomethingAfterViewRefresh;
- (id)webCtlClassNameForOpenUrl;
- (id)pageDescription;
- (void)setChannelCtrlName:(id)arg1 channelID:(id)arg2;
- (_Bool)hideTabBarWhenPushed;
- (void)dragReload:(_Bool)arg1;
- (_Bool)hasFootterDragRefresh;
- (id)dragRefreshView;
- (_Bool)hasHeaderDragRefresh;
- (void)viewWillLayoutSubviews;
- (void)dealloc;
- (void)viewDidLoad;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)showLoading:(_Bool)arg1;
- (void)retryDown:(id)arg1;
- (void)preEnterPage;
- (void)refreshTimeout;
- (void)refreshRequest;
- (void)leavePage;
- (void)enterPage;
- (void)scrollToTop;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

