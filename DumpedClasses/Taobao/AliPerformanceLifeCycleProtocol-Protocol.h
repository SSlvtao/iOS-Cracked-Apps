//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSNotification, NSURL, UIView, UIViewController;

@protocol AliPerformanceLifeCycleProtocol <NSObject>

@optional
- (void)viewDidLayoutSubviews:(UIViewController *)arg1;
- (void)viewDidDisappear:(_Bool)arg1 viewController:(UIViewController *)arg2;
- (void)viewDidAppear:(_Bool)arg1 viewController:(UIViewController *)arg2;
- (void)uiViewLayoutSubviews;
- (void)navigationDidEndTransitionFromView:(UIView *)arg1 toView:(UIView *)arg2;
- (void)handlePageChange:(long long)arg1 fromVC:(UIViewController *)arg2 toVC:(UIViewController *)arg3 args:(NSDictionary *)arg4;
- (void)appWillResignActive:(NSNotification *)arg1;
- (void)applicationOpenURL:(NSURL *)arg1;
- (void)userEvent;
@end

