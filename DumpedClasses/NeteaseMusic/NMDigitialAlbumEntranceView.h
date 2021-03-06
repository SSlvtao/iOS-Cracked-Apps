//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NMCommonAccessoryArrowImageView, UIButton, UIImageView, UILabel;

@interface NMDigitialAlbumEntranceView : UIView
{
    UIButton *_button;
    UILabel *_label;
    UIImageView *_coverBackgroundView;
    UIImageView *_coverImageView;
    UIImageView *_albumCoverBgView;
    NMCommonAccessoryArrowImageView *_arrowView;
    id <SDWebImageOperation> _downloadImageJob;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setImage:(id)arg1;
- (void)setCoverURL:(id)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

