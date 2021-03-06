//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSMutableArray, UIButton, UIImageView, UILabel, UITapGestureRecognizer, UIView, UIWindow;

@interface ONEAlertView : UIViewController
{
    _Bool _visible;
    _Bool _autoDismiss;
    _Bool _checkButtonSelected;
    UIWindow *_mainWindow;
    UIWindow *_alertWindow;
    UIView *_backgroundView;
    UIView *_alertView;
    UILabel *_titleLabel;
    UIView *_contentView;
    UIView *_contentBackgroundView;
    UILabel *_messageLabel;
    UILabel *_detialMessageLabel;
    UIImageView *_checkImageView;
    UIButton *_checkViewButton;
    UIButton *_close;
    NSMutableArray *_buttons;
    UITapGestureRecognizer *_tap;
    CDUnknownBlockType _completion;
}

+ (id)alertViews;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) UITapGestureRecognizer *tap; // @synthesize tap=_tap;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) UIButton *close; // @synthesize close=_close;
@property(retain, nonatomic) UIButton *checkViewButton; // @synthesize checkViewButton=_checkViewButton;
@property(nonatomic) _Bool checkButtonSelected; // @synthesize checkButtonSelected=_checkButtonSelected;
@property(retain, nonatomic) UIImageView *checkImageView; // @synthesize checkImageView=_checkImageView;
@property(retain, nonatomic) UILabel *detialMessageLabel; // @synthesize detialMessageLabel=_detialMessageLabel;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UIView *contentBackgroundView; // @synthesize contentBackgroundView=_contentBackgroundView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIWindow *alertWindow; // @synthesize alertWindow=_alertWindow;
@property(retain, nonatomic) UIWindow *mainWindow; // @synthesize mainWindow=_mainWindow;
@property(nonatomic) _Bool autoDismiss; // @synthesize autoDismiss=_autoDismiss;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
- (void).cxx_destruct;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)setupButtons:(double)arg1 titles:(id)arg2;
- (void)setCloseButtonUnPressed:(id)arg1;
- (void)setCloseButtonPressed:(id)arg1;
- (void)setupCloseButton;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)prefersStatusBarHidden;
- (id)lineLayer;
- (void)dismissAlertAnimation;
- (void)showAlertAnimation;
- (void)dismiss:(id)arg1 animated:(_Bool)arg2;
- (void)runComplateBlock:(id)arg1;
- (void)dismiss:(id)arg1;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)hide;
- (void)showBackgroundView;
- (void)showInternal;
- (void)show;
- (void)checkImageViewDidSelected:(id)arg1;
- (void)clearBackgroundColorForButton:(id)arg1;
- (void)setBackgroundColorForButton:(id)arg1;
- (void)resizeViews;
- (void)repositionFrame;
- (void)setupGestures;
- (double)statusBarOffset;
- (struct CGPoint)centerWithFrame:(struct CGRect)arg1;
- (id)genericButton:(id)arg1;
- (struct CGRect)adjustLabelFrameHeight:(id)arg1;
- (struct CGRect)frameForOrientation;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShown:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 messageAlignment:(long long)arg3 messageOfAttributed:(id)arg4 checkMessaage:(id)arg5 detialMessage:(id)arg6 buttonTitles:(id)arg7 canClose:(_Bool)arg8 contentView:(id)arg9 isCustom:(_Bool)arg10 completion:(CDUnknownBlockType)arg11;
- (id)initWithCustomView:(id)arg1 buttonsTitle:(id)arg2 canClose:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)windowWithLevel:(double)arg1;

@end

