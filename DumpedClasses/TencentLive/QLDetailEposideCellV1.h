//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseModelCellV1.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "UIScrollViewDelegate.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, QLJCEONADetailsVideoList, QLJCEVideoDataList, UIButton, UICollectionView, UICollectionViewFlowLayout;

@interface QLDetailEposideCellV1 : QLBaseModelCellV1 <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate, UIScrollViewDelegate>
{
    UICollectionView *_gridView;
    UICollectionViewFlowLayout *_flowLayout;
    _Bool _indexChangedByTouchUp;
    _Bool _lastPlayIsTrailer;
    int _vipSeeAllInseretLoaction;
    long long _current;
    NSArray *_aryItems;
    long long _trailerCount;
    UIButton *_vipSeeAllSetBtn;
    QLJCEONADetailsVideoList *_videoList;
    NSDictionary *_dicExtroInfo;
    QLJCEVideoDataList *_dataList;
    NSMutableArray *_aryReportCellIndexes;
}

@property(nonatomic) _Bool lastPlayIsTrailer; // @synthesize lastPlayIsTrailer=_lastPlayIsTrailer;
@property(retain, nonatomic) NSMutableArray *aryReportCellIndexes; // @synthesize aryReportCellIndexes=_aryReportCellIndexes;
@property int vipSeeAllInseretLoaction; // @synthesize vipSeeAllInseretLoaction=_vipSeeAllInseretLoaction;
@property(retain, nonatomic) QLJCEVideoDataList *dataList; // @synthesize dataList=_dataList;
@property(retain, nonatomic) NSDictionary *dicExtroInfo; // @synthesize dicExtroInfo=_dicExtroInfo;
@property(retain, nonatomic) QLJCEONADetailsVideoList *videoList; // @synthesize videoList=_videoList;
@property(retain, nonatomic) UIButton *vipSeeAllSetBtn; // @synthesize vipSeeAllSetBtn=_vipSeeAllSetBtn;
@property(nonatomic) _Bool indexChangedByTouchUp; // @synthesize indexChangedByTouchUp=_indexChangedByTouchUp;
@property(nonatomic) long long trailerCount; // @synthesize trailerCount=_trailerCount;
@property(retain, nonatomic) NSArray *aryItems; // @synthesize aryItems=_aryItems;
@property long long current; // @synthesize current=_current;
- (void).cxx_destruct;
- (void)reportShowUp;
- (void)reportCell:(id)arg1;
- (_Bool)isCellNewlyExpourse:(id)arg1;
- (void)reportCellItems:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)executeTouchActionWihtIndex:(long long)arg1;
- (void)removeCellResouresWhenReused;
- (void)layoutSubviews;
- (id)horizontalGridView;
- (void)startLoadModel;
- (id)getVideoList;
- (void)setVideoListItem:(id)arg1;
- (void)handleOuterPlayWithUrl:(id)arg1 index:(long long)arg2;
- (void)eposideDownWithIndexPath:(id)arg1;
- (void)vipSeeAllSetAction:(id)arg1;
- (void)removeAllButtons;
- (void)initVipSeeALlSetButtonInfo:(id)arg1;
- (id)generateButton;
- (void)reNewPlayingIndex;
- (void)vipStateChanged;
- (void)playerVideoInfoChanged:(id)arg1;
- (void)resetPlayIndex;
- (void)scrollCurrentToVisable:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

