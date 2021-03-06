//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGBaseContentView.h"

@class UIImageView, UIView;

@interface KGContentContainerView : KGBaseContentView
{
    _Bool _isAddedBackGroundImglayoutConstraintOfBottom;
    _Bool _isAddedBackGroundImgAutoresizingMaskOfFlexibleHeight;
    double _constantBottom;
    UIView *_contentView;
    UIImageView *_backgroundImageView;
}

@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)setBackgroundViewWithImg:(id)arg1 imgViewWidth:(double)arg2 referenceHeight:(double)arg3;
- (void)contentViewFlexibleReferenceSuperview:(_Bool)arg1;

@end

