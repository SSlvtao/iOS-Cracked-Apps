//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface QLShowRoomErrorTipView : UIView
{
    UILabel *_errorLabel;
    UILabel *_repairLabel;
    UIButton *_retryButton;
    double _totolHeight;
    CDUnknownBlockType _retryBlock;
}

@property(copy, nonatomic) CDUnknownBlockType retryBlock; // @synthesize retryBlock=_retryBlock;
@property(nonatomic) double totolHeight; // @synthesize totolHeight=_totolHeight;
@property(retain, nonatomic) UIButton *retryButton; // @synthesize retryButton=_retryButton;
@property(retain, nonatomic) UILabel *repairLabel; // @synthesize repairLabel=_repairLabel;
@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)retryNetwork;
- (void)dismissFromSuper;
- (id)initWithFrame:(struct CGRect)arg1;

@end

