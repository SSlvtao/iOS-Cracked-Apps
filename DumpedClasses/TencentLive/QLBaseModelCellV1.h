//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseTabelViewCell.h"

#import "QLBaseModelCellDataSource.h"

@class NSString, UIImageView, UILabel, UIViewController<QLModelsUserInfoDataSource>;

@interface QLBaseModelCellV1 : QLBaseTabelViewCell <QLBaseModelCellDataSource>
{
    _Bool _isInDetailIntroSecondPage;
    _Bool _isJceTextUiType;
    UILabel *_titleLabel;
    UILabel *_moreLabel;
    UIImageView *_arrowView;
    UIViewController<QLModelsUserInfoDataSource> *_superCtl;
    long long _jcePosterUiType;
    id _userInfo;
    UIImageView *_seperatorImgView;
}

@property(readonly, nonatomic) __weak UIImageView *seperatorImgView; // @synthesize seperatorImgView=_seperatorImgView;
@property(nonatomic) __weak id userInfo; // @synthesize userInfo=_userInfo;
@property _Bool isJceTextUiType; // @synthesize isJceTextUiType=_isJceTextUiType;
@property _Bool isInDetailIntroSecondPage; // @synthesize isInDetailIntroSecondPage=_isInDetailIntroSecondPage;
@property long long jcePosterUiType; // @synthesize jcePosterUiType=_jcePosterUiType;
@property __weak UIViewController<QLModelsUserInfoDataSource> *superCtl; // @synthesize superCtl=_superCtl;
@property(retain) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(retain) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (double)modelItemCellHeight;
- (id)modelSubTitle;
- (int)ModelDetailViewTitle;
- (id)ModelDetailViewImageUrl;
- (_Bool)modelCanDetailView;
- (_Bool)modelCanAccessMore;
- (id)modelTitle;
- (_Bool)shouldCustomTitleStyle;
- (id)horizontalGridView;
- (void)didMoveToSuperview;
- (void)refreshSubItemColors;
- (void)refreshModelDetailView;
- (void)refreshHeader;
- (void)layoutSubviews;
- (void)singleTaped:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

