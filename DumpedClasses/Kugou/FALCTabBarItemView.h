//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UILabel, UIView;

@interface FALCTabBarItemView : UIButton
{
    _Bool _showRedDot;
    unsigned long long _tipNum;
    UIView *_redDotView;
    UILabel *_tipNumLabel;
}

@property(retain, nonatomic) UILabel *tipNumLabel; // @synthesize tipNumLabel=_tipNumLabel;
@property(retain, nonatomic) UIView *redDotView; // @synthesize redDotView=_redDotView;
@property(nonatomic) unsigned long long tipNum; // @synthesize tipNum=_tipNum;
@property(nonatomic) _Bool showRedDot; // @synthesize showRedDot=_showRedDot;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

