//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CAAnimationDelegate.h"

@class CAShapeLayer, NSString, UIButton, UIImage;

@interface NMPlayNextMVButton : UIView <CAAnimationDelegate>
{
    UIButton *_innerButton;
    UIButton *_cancelButton;
    CAShapeLayer *_circleLayer;
    UIImage *_buttonNormalImage;
    UIImage *_buttonNormalPrsImage;
    UIImage *_buttonFullImage;
    UIImage *_buttonFullPrsImage;
    _Bool _isFullScreen;
    id <NMPlayNextMVButtonDelegate> _delegate;
}

+ (struct CGSize)size:(_Bool)arg1;
@property(nonatomic) __weak id <NMPlayNextMVButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)_removeCountingDown;
- (void)resetCountingDown;
- (void)startCountingDownAnimation;
- (void)cancelButtonClicked:(id)arg1;
- (void)playNextButtonClicked:(id)arg1;
- (void)updateButtonImage;
- (void)switchFullScreen:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
