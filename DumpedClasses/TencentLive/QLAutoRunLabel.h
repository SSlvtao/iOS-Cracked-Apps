//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CAAnimationDelegate.h"

@class NSString, QLRichLabel, UIColor, UIFont;

@interface QLAutoRunLabel : UIView <CAAnimationDelegate>
{
    QLRichLabel *_autoRunLabel;
    _Bool _isStop;
    id <QLAutoRunLabelDelegate> _delegate;
    UIColor *_textColor;
    double _speed;
    NSString *_content;
    UIFont *_font;
}

@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) __weak id <QLAutoRunLabelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)stopAutoRunAnimation;
- (void)startAutoRunAnimation;
- (void)updateSubViewFrame;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

