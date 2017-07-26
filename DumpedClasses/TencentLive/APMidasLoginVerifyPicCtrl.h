//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APMidasBaseViewCtrl.h"

#import "UITextFieldDelegate.h"

@class APMidasUIInsectTextField, NSData, NSString, UIButton;

@interface APMidasLoginVerifyPicCtrl : APMidasBaseViewCtrl <UITextFieldDelegate>
{
    id <APMidasVerifyPicDelegate> delegate;
    APMidasUIInsectTextField *verifyCodeTf;
    UIButton *picBtn;
    UIButton *cancelBtn;
    NSData *picData;
}

@property(nonatomic) NSData *picData; // @synthesize picData;
@property(nonatomic) __weak UIButton *cancelBtn; // @synthesize cancelBtn;
@property(nonatomic) __weak UIButton *picBtn; // @synthesize picBtn;
@property(nonatomic) __weak APMidasUIInsectTextField *verifyCodeTf; // @synthesize verifyCodeTf;
@property(nonatomic) id <APMidasVerifyPicDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)setVcImage:(id)arg1;
- (void)updatePic:(id)arg1;
- (void)onSubmit:(id)arg1;
- (void)onGetVerifyCode:(id)arg1;
- (void)onCancel:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillUnload;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)uiSetting;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

