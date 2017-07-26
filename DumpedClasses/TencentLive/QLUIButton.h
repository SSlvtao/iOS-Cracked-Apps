//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIColor;

@interface QLUIButton : UIButton
{
    UIColor *_selectedColor;
    UIColor *_origenBgColor;
    unsigned long long _qlb_style;
    double _qlb_innerGap;
}

@property(nonatomic) double qlb_innerGap; // @synthesize qlb_innerGap=_qlb_innerGap;
@property(nonatomic) unsigned long long qlb_style; // @synthesize qlb_style=_qlb_style;
@property(retain, nonatomic) UIColor *origenBgColor; // @synthesize origenBgColor=_origenBgColor;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
- (void).cxx_destruct;
- (void)touchCancel:(id)arg1;
- (void)dragExit:(id)arg1;
- (void)dragEnter:(id)arg1;
- (void)touchUpInside:(id)arg1;
- (void)touchDown:(id)arg1;
- (void)doSetOrigenBgColor;
- (void)doSetSelectedColor;
- (void)layoutSubviews;
- (void)setQLButtonStyle:(unsigned long long)arg1 innerGap:(double)arg2;
- (void)setQLButtonStyle:(unsigned long long)arg1;
- (void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

