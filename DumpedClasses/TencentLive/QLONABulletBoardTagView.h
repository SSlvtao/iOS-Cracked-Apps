//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLUIButton.h"

@class QLHTMLFontLabel, QLJCEIconTagText, QLSImageView, UIImageView;

@interface QLONABulletBoardTagView : QLUIButton
{
    QLSImageView *_headImgView;
    QLHTMLFontLabel *_nameLabel;
    QLSImageView *_headImgViewMaskView;
    UIImageView *_maskImageView;
    QLJCEIconTagText *_iconTagText;
}

@property(retain, nonatomic) QLJCEIconTagText *iconTagText; // @synthesize iconTagText=_iconTagText;
@property(retain, nonatomic) UIImageView *maskImageView; // @synthesize maskImageView=_maskImageView;
- (void).cxx_destruct;
- (void)addSubview:(id)arg1;
- (void)layoutSubviews;
- (void)setTagText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

