//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseTabelViewCell.h"

#import "GMGridViewActionDelegate.h"
#import "GMGridViewDataSource.h"
#import "UIScrollViewDelegate.h"

@class GMGridView, NSString, QLJCEONAVRSSFeed, QLSImageView, UIButton, UILabel;

@interface QLDetailVRSSFeedCellV1 : QLBaseTabelViewCell <GMGridViewDataSource, GMGridViewActionDelegate, UIScrollViewDelegate>
{
    QLJCEONAVRSSFeed *_vrssFeed;
    QLSImageView *_logoImageView;
    UIButton *_rigthBtn;
    UILabel *_mainTitleLabel;
    UILabel *_subTitleLabel;
    GMGridView *_gridView;
}

+ (double)getHeightWithPosterObj:(id)arg1 uInfo:(id)arg2;
@property(retain, nonatomic) GMGridView *gridView; // @synthesize gridView=_gridView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *mainTitleLabel; // @synthesize mainTitleLabel=_mainTitleLabel;
@property(retain, nonatomic) UIButton *rigthBtn; // @synthesize rigthBtn=_rigthBtn;
@property(retain, nonatomic) QLSImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) QLJCEONAVRSSFeed *vrssFeed; // @synthesize vrssFeed=_vrssFeed;
- (void).cxx_destruct;
- (void)GMGridView:(id)arg1 didTapOnItemAtIndex:(long long)arg2;
- (id)GMGridView:(id)arg1 cellForItemAtIndex:(long long)arg2;
- (struct CGSize)GMGridView:(id)arg1 sizeForItemsInInterfaceOrientation:(long long)arg2;
- (long long)numberOfItemsInGMGridView:(id)arg1;
- (void)setObject:(id)arg1;
- (void)refreshVRSSBookStateAndLayout;
- (void)startLoadModel;
- (void)cellClicked:(id)arg1;
- (void)buttonClicked:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

