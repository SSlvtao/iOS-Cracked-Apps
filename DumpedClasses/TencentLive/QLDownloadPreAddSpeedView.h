//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

@interface QLDownloadPreAddSpeedView : UIView
{
    UILabel *_tiplabel;
    UIButton *_tryUseAddSpeedBtn;
    UIButton *_openVipBtn;
    UIImageView *_shadowImageView;
    CDUnknownBlockType _preAddSpeedBtnActionBlock;
}

+ (void)updateShowCount;
+ (id)curTime;
+ (_Bool)shouldShowView;
@property(copy, nonatomic) CDUnknownBlockType preAddSpeedBtnActionBlock; // @synthesize preAddSpeedBtnActionBlock=_preAddSpeedBtnActionBlock;
@property(retain, nonatomic) UIImageView *shadowImageView; // @synthesize shadowImageView=_shadowImageView;
@property(retain, nonatomic) UIButton *openVipBtn; // @synthesize openVipBtn=_openVipBtn;
@property(retain, nonatomic) UIButton *tryUseAddSpeedBtn; // @synthesize tryUseAddSpeedBtn=_tryUseAddSpeedBtn;
@property(retain, nonatomic) UILabel *tiplabel; // @synthesize tiplabel=_tiplabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dataReport;
- (void)updateButtonWithTag:(long long)arg1 title:(id)arg2;
- (void)setPreAddSpeedBtnClickActionBlock:(CDUnknownBlockType)arg1;
- (void)resetTryButtonTitle;
- (void)buttonAction:(id)arg1;
- (void)configViews;
- (void)updateTryButtonTitle:(id)arg1;
- (void)handleButtonAndHiddenTryUseAddSpeedBtn;
- (void)updateTryUseAddSpeedBtnTitle:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

