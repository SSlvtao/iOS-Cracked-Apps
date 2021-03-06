//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class NSString, UIAlertController, UIAlertView, UIViewController;

@interface ArgoAlertDialog : NSObject <UIAlertViewDelegate>
{
    CDUnknownBlockType _onClickedLeftButtonBlock;
    CDUnknownBlockType _onClickedRightButtonBlock;
    NSString *_title;
    NSString *_message;
    NSString *_leftButtonTitle;
    NSString *_rightButtonTitle;
    UIViewController *_presentController;
    UIAlertView *_alertView;
    UIAlertController *_alertController;
}

+ (id)sharedInstance;
@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) UIAlertView *alertView; // @synthesize alertView=_alertView;
@property(nonatomic) __weak UIViewController *presentController; // @synthesize presentController=_presentController;
@property(retain, nonatomic) NSString *rightButtonTitle; // @synthesize rightButtonTitle=_rightButtonTitle;
@property(retain, nonatomic) NSString *leftButtonTitle; // @synthesize leftButtonTitle=_leftButtonTitle;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) CDUnknownBlockType onClickedRightButtonBlock; // @synthesize onClickedRightButtonBlock=_onClickedRightButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType onClickedLeftButtonBlock; // @synthesize onClickedLeftButtonBlock=_onClickedLeftButtonBlock;
- (void).cxx_destruct;
- (void)dismiss;
- (void)onClickRightButton;
- (void)onClickLeftButton;
- (void)showAlert;
- (void)clear;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showWithTitle:(id)arg1 message:(id)arg2 leftButtonTitle:(id)arg3 rightButtonTitle:(id)arg4 presentController:(id)arg5 onClickedLeftButton:(CDUnknownBlockType)arg6 onClickedRightButton:(CDUnknownBlockType)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

