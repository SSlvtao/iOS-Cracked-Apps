//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface QLLightBanabaCommentView : UIView
{
    UIImageView *_bgImgView;
    UIImageView *_bgImgViewIcon;
    UILabel *_btnLable;
}

@property(retain, nonatomic) UILabel *btnLable; // @synthesize btnLable=_btnLable;
@property(retain, nonatomic) UIImageView *bgImgViewIcon; // @synthesize bgImgViewIcon=_bgImgViewIcon;
@property(retain, nonatomic) UIImageView *bgImgView; // @synthesize bgImgView=_bgImgView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configFrame;
- (id)initWithFrame:(struct CGRect)arg1;

@end

