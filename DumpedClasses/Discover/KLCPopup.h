//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface KLCPopup : UIView
{
    UIView *_backgroundView;
    UIView *_containerView;
    _Bool _isBeingShown;
    _Bool _isShowing;
    _Bool _isBeingDismissed;
    _Bool _shouldDismissOnBackgroundTouch;
    _Bool _shouldDismissOnContentTouch;
    UIView *_contentView;
    long long _showType;
    long long _dismissType;
    long long _maskType;
    double _dimmedMaskAlpha;
    CDUnknownBlockType _didFinishShowingCompletion;
    CDUnknownBlockType _willStartDismissingCompletion;
    CDUnknownBlockType _didFinishDismissingCompletion;
}

+ (void)dismissAllPopups;
+ (id)popupWithContentView:(id)arg1 showType:(long long)arg2 dismissType:(long long)arg3 maskType:(long long)arg4 dismissOnBackgroundTouch:(_Bool)arg5 dismissOnContentTouch:(_Bool)arg6;
+ (id)popupWithContentView:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType didFinishDismissingCompletion; // @synthesize didFinishDismissingCompletion=_didFinishDismissingCompletion;
@property(copy, nonatomic) CDUnknownBlockType willStartDismissingCompletion; // @synthesize willStartDismissingCompletion=_willStartDismissingCompletion;
@property(copy, nonatomic) CDUnknownBlockType didFinishShowingCompletion; // @synthesize didFinishShowingCompletion=_didFinishShowingCompletion;
@property(nonatomic) _Bool shouldDismissOnContentTouch; // @synthesize shouldDismissOnContentTouch=_shouldDismissOnContentTouch;
@property(nonatomic) _Bool shouldDismissOnBackgroundTouch; // @synthesize shouldDismissOnBackgroundTouch=_shouldDismissOnBackgroundTouch;
@property(nonatomic) double dimmedMaskAlpha; // @synthesize dimmedMaskAlpha=_dimmedMaskAlpha;
@property(nonatomic) long long maskType; // @synthesize maskType=_maskType;
@property(nonatomic) long long dismissType; // @synthesize dismissType=_dismissType;
@property(nonatomic) long long showType; // @synthesize showType=_showType;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) _Bool isBeingDismissed; // @synthesize isBeingDismissed=_isBeingDismissed;
@property(readonly, nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(readonly, nonatomic) _Bool isBeingShown; // @synthesize isBeingShown=_isBeingShown;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (void)didFinishDismissing;
- (void)willStartDismissing;
- (void)didFinishShowing;
- (void)willStartShowing;
- (void)didChangeStatusBarOrientation:(id)arg1;
- (void)updateForInterfaceOrientation;
- (void)dismiss;
- (void)showWithParameters:(id)arg1;
- (void)dismiss:(_Bool)arg1;
- (void)showAtCenter:(struct CGPoint)arg1 inView:(id)arg2 withDuration:(double)arg3;
- (void)showAtCenter:(struct CGPoint)arg1 inView:(id)arg2;
- (void)showWithLayout:(struct KLCPopupLayout)arg1 duration:(double)arg2;
- (void)showWithDuration:(double)arg1;
- (void)showWithLayout:(struct KLCPopupLayout)arg1;
- (void)show;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)dealloc;

@end
