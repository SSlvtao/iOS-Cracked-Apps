//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMURLRouter, FMURLRouterObject, FMURLRouterOptions, UINavigationController, UIViewController;

@protocol FMURLRouterAppDelegate <NSObject>
- (void)urlRouter:(FMURLRouter *)arg1 applicationOpenLoginWithResult:(void (^)(_Bool))arg2;
- (void)urlRouter:(FMURLRouter *)arg1 applicationOpenTabWithObject:(FMURLRouterObject *)arg2;
- (FMURLRouterOptions *)applicationWebViewRouterOptions:(FMURLRouter *)arg1;
- (UINavigationController *)applicationCurrentNavigationController:(FMURLRouter *)arg1;
- (UIViewController *)applicationCurrentController:(FMURLRouter *)arg1;
@end

