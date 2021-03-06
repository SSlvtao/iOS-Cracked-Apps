//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "UIViewControllerTransitioningDelegate.h"

@class NSString, UIImage, UIImageView;

@interface CTPCodeViewController : CTRootViewController <UIViewControllerTransitioningDelegate>
{
    long long _style;
    UIImage *_codeImage;
    UIImageView *_barCodeContainerView;
    UIImageView *_qrCodeView;
}

@property(retain, nonatomic) UIImageView *qrCodeView; // @synthesize qrCodeView=_qrCodeView;
@property(retain, nonatomic) UIImageView *barCodeContainerView; // @synthesize barCodeContainerView=_barCodeContainerView;
@property(copy, nonatomic) UIImage *codeImage; // @synthesize codeImage=_codeImage;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)hiddenDebugButton:(_Bool)arg1;
- (void)tapGesture:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

