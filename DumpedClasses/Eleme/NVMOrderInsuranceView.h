//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NVMOrderOntime, UIButton, UIImageView, UILabel;

@interface NVMOrderInsuranceView : UIView
{
    NVMOrderOntime *_ontimeInfo;
    UIImageView *_backView;
    UILabel *_subLabel;
    UIButton *_iconButton;
}

@property(retain, nonatomic) UIButton *iconButton; // @synthesize iconButton=_iconButton;
@property(retain, nonatomic) UILabel *subLabel; // @synthesize subLabel=_subLabel;
@property(retain, nonatomic) UIImageView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) NVMOrderOntime *ontimeInfo; // @synthesize ontimeInfo=_ontimeInfo;
- (void).cxx_destruct;
- (void)gotoOnTimePage;
- (void)configViews;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

