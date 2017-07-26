//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QLJCEONAVRSSInfoFeed, QLSImageView, UIButton, UIImageView, UILabel;

@interface QLONAVRSSInfoFeedTopView : UIView
{
    id <QLONAVRSSInfoFeedTopViewDelegate> _delegate;
    QLSImageView *_logoImageView;
    UIButton *_rigthBtn;
    UILabel *_mainTitleLabel;
    UIImageView *_rightArrowImgView;
    UILabel *_rightAccessoryLabel;
    UIImageView *_redDot;
    QLJCEONAVRSSInfoFeed *_onaInfoFeed;
}

@property(retain, nonatomic) QLJCEONAVRSSInfoFeed *onaInfoFeed; // @synthesize onaInfoFeed=_onaInfoFeed;
@property(retain, nonatomic) UIImageView *redDot; // @synthesize redDot=_redDot;
@property(retain, nonatomic) UILabel *rightAccessoryLabel; // @synthesize rightAccessoryLabel=_rightAccessoryLabel;
@property(retain, nonatomic) UIImageView *rightArrowImgView; // @synthesize rightArrowImgView=_rightArrowImgView;
@property(retain, nonatomic) UILabel *mainTitleLabel; // @synthesize mainTitleLabel=_mainTitleLabel;
@property(retain, nonatomic) UIButton *rigthBtn; // @synthesize rigthBtn=_rigthBtn;
@property(retain, nonatomic) QLSImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(nonatomic) __weak id <QLONAVRSSInfoFeedTopViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cellClicked:(id)arg1;
- (void)buttonClicked:(id)arg1;
- (void)refreshVRSSBookStateAndLayout;
- (void)layoutSubviews;
- (id)findKVItemValueForValueId:(id)arg1;
- (_Bool)isShowRedPoint;
- (void)refreshInterfaceUI;
- (void)setObjcet:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

