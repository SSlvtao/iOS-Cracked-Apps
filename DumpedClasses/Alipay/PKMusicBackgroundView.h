//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PKCloudImageView.h"

@class NSString, UIView;

@interface PKMusicBackgroundView : PKCloudImageView
{
    _Bool _showBlur;
    _Bool _isFullViewMask;
    NSString *_customBorerMaskStr;
    UIView *_maskView;
}

@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) NSString *customBorerMaskStr; // @synthesize customBorerMaskStr=_customBorerMaskStr;
@property(nonatomic) _Bool isFullViewMask; // @synthesize isFullViewMask=_isFullViewMask;
@property(nonatomic) _Bool showBlur; // @synthesize showBlur=_showBlur;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (id)setupPrefixCustomBorderAndMaskView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

