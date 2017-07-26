//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@protocol ALIJWebViewControllerProtocol <NSObject>
- (void)setRewritedActionURL:(NSURL *)arg1 forWebCtrl:(id)arg2;
- (void)setOriginalActionURL:(NSURL *)arg1 forWebCtrl:(id)arg2;
- (void)registeHandler:(NSString *)arg1 withClassName:(NSString *)arg2 handler:(void (^)(id, void (^)(NSString *, NSDictionary *)))arg3 forWebCtrl:(id)arg4;
- (_Bool)webviewIsAlreadyOnTop:(id)arg1;
- (void)webviewScrollToTop:(id)arg1;
- (void)gobackWithWebCtrl:(id)arg1;
- (_Bool)canGobackWithWebCtrl:(id)arg1;
- (void)stopLoadingForWebCtrl:(id)arg1;
- (void)loadURL:(NSURL *)arg1 forWebCtrl:(id)arg2;
- (void)reloadURL:(NSURL *)arg1 forWebCtrl:(id)arg2;
- (id)webViewOfWebCtrl:(id)arg1;
- (id)newWebViewCtrlWithURL:(NSURL *)arg1 h5NaviBarControlEnabled:(_Bool)arg2 isLoadTitle:(_Bool)arg3 supportFestivalStyle:(_Bool)arg4;
- (id)newWebViewCtrlWithH5NaviBarControlEnabled:(_Bool)arg1 isLoadTitle:(_Bool)arg2 supportFestivalStyle:(_Bool)arg3;
- (id)newWebViewCtrlWithURL:(NSURL *)arg1;
- (id)newWebViewCtrl;
@end
