//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QLCommentStarView, QLIconLabel, QLONAPosterImageView, UILabel;

@interface QLNewBaseDetailView : UIView
{
    QLONAPosterImageView *_leftPostView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    QLCommentStarView *_commentStarView;
    UILabel *_ratingScoreLabel;
    UILabel *_areaLabel;
    UILabel *_yearLabel;
    QLIconLabel *_playCountLabel;
    UILabel *_areaAndYearLabel;
    UILabel *_typeLabel;
}

@property(retain, nonatomic) QLCommentStarView *commentStarView; // @synthesize commentStarView=_commentStarView;
@property(retain, nonatomic) QLONAPosterImageView *leftPostView; // @synthesize leftPostView=_leftPostView;
@property(retain, nonatomic) UILabel *typeLabel; // @synthesize typeLabel=_typeLabel;
@property(retain, nonatomic) UILabel *areaAndYearLabel; // @synthesize areaAndYearLabel=_areaAndYearLabel;
@property(retain, nonatomic) UILabel *ratingScoreLabel; // @synthesize ratingScoreLabel=_ratingScoreLabel;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (double)heightOfRightDesc;
- (void)layoutSubviews;
- (_Bool)shouldShowPlayCount:(id)arg1;
- (_Bool)shouldShowType:(id)arg1 withInfo:(id *)arg2;
- (_Bool)shouldShowAreaAndYear:(id)arg1 withInfo:(id *)arg2;
- (_Bool)shouldShowRatingStar:(id)arg1;
- (_Bool)shouldShowSubTitle:(id)arg1 subTitle:(id *)arg2;
- (_Bool)shouldShowTitle:(id)arg1;
- (id)initWithIntroData:(id)arg1;

@end

