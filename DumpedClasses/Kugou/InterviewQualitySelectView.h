//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface InterviewQualitySelectView : UIView
{
    CDUnknownBlockType _qualitySelectBtn;
    UIButton *_standarBtn;
    UIButton *_hdBtn;
    UIButton *_superBtn;
    UIButton *_selectedBtn;
}

@property(nonatomic) __weak UIButton *selectedBtn; // @synthesize selectedBtn=_selectedBtn;
@property(retain, nonatomic) UIButton *superBtn; // @synthesize superBtn=_superBtn;
@property(retain, nonatomic) UIButton *hdBtn; // @synthesize hdBtn=_hdBtn;
@property(retain, nonatomic) UIButton *standarBtn; // @synthesize standarBtn=_standarBtn;
@property(copy, nonatomic) CDUnknownBlockType qualitySelectBtn; // @synthesize qualitySelectBtn=_qualitySelectBtn;
- (void).cxx_destruct;
- (void)superBtnClicked:(id)arg1;
- (void)hdBtnClicked:(id)arg1;
- (void)standarBtnClicked:(id)arg1;
- (void)setBtnEnable:(id)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

