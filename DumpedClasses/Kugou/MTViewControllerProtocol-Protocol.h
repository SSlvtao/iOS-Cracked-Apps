//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTRouterHandlerProtocol.h"

@class NSArray, NSString, UIView;

@protocol MTViewControllerProtocol <MTRouterHandlerProtocol>
@property(nonatomic) _Bool shouldHiddenBackgroundView;
- (void)setIsDisableLeftScroll:(_Bool)arg1;
- (void)setIsLayTop:(_Bool)arg1;
- (void)setTopViewTitle:(NSString *)arg1;
- (long long)getTopViewHeight;
- (void)setTopViewShowBackground:(_Bool)arg1 andAnimation:(_Bool)arg2;
- (void)dismissHud:(_Bool)arg1;
- (void)dismissHudWithDelay:(double)arg1;
- (void)dismissHud;
- (void)dismissWithError:(NSString *)arg1 afterDelay:(double)arg2;
- (void)dismissWithSuccess:(NSString *)arg1 afterDelay:(double)arg2;
- (void)showWithStatus:(NSString *)arg1;
- (void)showErrorWithStatus:(NSString *)arg1 duration:(double)arg2;
- (void)showSuccessWithStatus:(NSString *)arg1 duration:(double)arg2;
- (void)showErrorWithStatus:(NSString *)arg1;
- (void)showSuccessWithStatus:(NSString *)arg1;
- (void)showMessageWithContent:(NSString *)arg1 duration:(double)arg2;
- (void)showMessageWithContent:(NSString *)arg1;
- (_Bool)shouldHiddenNavigationBar;
- (void)addNavigationBarRightItem:(UIView *)arg1;
- (void)addNavigationBarLeftItem:(UIView *)arg1;
- (void)setRightItems:(NSArray *)arg1;
- (void)viewWillRemove:(_Bool)arg1;
@end

