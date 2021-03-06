//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ExploreDetailNatantRelateReadView.h"

@class SSThemedButton, SSThemedView, UILabel;

@interface ExploreDetailNatantRelateReadPureTitleView : ExploreDetailNatantRelateReadView
{
    UILabel *_titleLabel;
    SSThemedView *_bottomLineView;
    SSThemedButton *_bgButton;
    SSThemedView *_titleLeftCircleView;
}

+ (id)showTitleForTitle:(id)arg1 tags:(id)arg2;
@property(retain, nonatomic) SSThemedView *titleLeftCircleView; // @synthesize titleLeftCircleView=_titleLeftCircleView;
@property(retain, nonatomic) SSThemedButton *bgButton; // @synthesize bgButton=_bgButton;
@property(retain, nonatomic) SSThemedView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (float)titleHeightForArticle:(id)arg1 cellWidth:(float)arg2;
- (void)refreshBottomLineView;
- (void)refreshUI;
- (void)refreshTitleWithTags:(id)arg1;
- (void)refreshTitleUI;
- (void)themeChanged:(id)arg1;
- (void)sendClickTrack;
- (void)bgButtonClicked;
- (void)hideBottomLine:(_Bool)arg1;
- (id)initWithWidth:(double)arg1;

@end

