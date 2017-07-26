//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QLAnimageImageView, UILabel;

@interface QLPraiseEffectView : UIView
{
    _Bool _curEffectBonding;
    id <QLPraiseEffectDelegate> _delegate;
    QLAnimageImageView *_flyPraiseImageView;
    long long _flyPraiseNumber;
    UILabel *_praiseCountLabel;
    double _lastClickTime;
}

@property(nonatomic) _Bool curEffectBonding; // @synthesize curEffectBonding=_curEffectBonding;
@property(nonatomic) double lastClickTime; // @synthesize lastClickTime=_lastClickTime;
@property(retain, nonatomic) UILabel *praiseCountLabel; // @synthesize praiseCountLabel=_praiseCountLabel;
@property(nonatomic) long long flyPraiseNumber; // @synthesize flyPraiseNumber=_flyPraiseNumber;
@property(retain, nonatomic) QLAnimageImageView *flyPraiseImageView; // @synthesize flyPraiseImageView=_flyPraiseImageView;
@property __weak id <QLPraiseEffectDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)starZanAnimation:(id)arg1;
- (id)getMovePath:(long long)arg1 praiseView:(id)arg2;
- (void)delayRemoveEffect:(id)arg1;
- (void)showFlyLovePrais;
- (void)removeEmitterAnimation;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)delayHidenPraiseCountLabel;
- (void)showAddPraiseCount:(long long)arg1;
- (void)playFlyAnimation:(id)arg1;
- (void)delayPlayPraiseEffect:(id)arg1;
- (void)startPlayAnimation:(id)arg1;
- (void)playBiggerAnimation;
- (id)getFlyPraiseImageView;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

