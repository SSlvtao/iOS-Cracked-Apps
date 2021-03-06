//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDictionary, NSMutableArray, UIButton;

@interface GMPostMenuView : UIView
{
    float _h;
    float _buttonSize;
    NSMutableArray *_bubbles;
    NSMutableArray *_bubblesTitle;
    UIView *_bgView;
    int _color;
    _Bool _isAnimating;
    id <GMPostMenuViewDelegate> _delegate;
    UIView *_parentView;
    NSDictionary *_buttons;
    UIButton *_post;
}

@property(retain, nonatomic) UIButton *post; // @synthesize post=_post;
@property(retain, nonatomic) NSDictionary *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) UIView *parentView; // @synthesize parentView=_parentView;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) id <GMPostMenuViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)post:(id)arg1;
- (void)shareViewBackgroundTapped:(id)arg1;
- (void)buttonTapped:(id)arg1;
- (id)imageWithView:(id)arg1;
- (id)colorFromRGB:(int)arg1;
- (void)setButton:(id)arg1 title:(id)arg2 andBackgroundColorRGB:(int)arg3;
- (void)setButton:(id)arg1 image:(id)arg2 andBackgroundColorRGB:(int)arg3;
- (void)setButton:(id)arg1 backgroundColorRGB:(int)arg2;
- (void)setButton:(id)arg1 Icon:(id)arg2 andBackgroundColorRGB:(int)arg3;
- (void)hideBubbleWithAnimation:(id)arg1;
- (void)showBubbleWithAnimation:(id)arg1;
- (void)hide;
- (void)show;
- (id)initWithFrame:(struct CGRect)arg1 inView:(id)arg2 withbuttons:(id)arg3;

@end

