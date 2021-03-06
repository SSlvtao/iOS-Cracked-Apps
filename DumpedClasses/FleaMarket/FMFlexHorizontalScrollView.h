//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FMHorListViewDataSource.h"
#import "FMHorListViewDelegate.h"

@class FMHorListView, NSObject<OS_dispatch_source>, NSString;

@interface FMFlexHorizontalScrollView : UIView <FMHorListViewDataSource, FMHorListViewDelegate>
{
    unsigned long long _scrollType;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _originCount;
    double _cellWidth;
    _Bool _pageControlEnable;
    FMHorListView *_listView;
    id <FMFlexHorizontalScrollViewDataSource> _dataSource;
    id <FMFlexHorizontalScrollViewDelegate> _delegate;
    unsigned long long _minCellsCountOfInifite;
}

@property(nonatomic) unsigned long long minCellsCountOfInifite; // @synthesize minCellsCountOfInifite=_minCellsCountOfInifite;
@property(nonatomic) _Bool pageControlEnable; // @synthesize pageControlEnable=_pageControlEnable;
@property(nonatomic) __weak id <FMFlexHorizontalScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <FMFlexHorizontalScrollViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) FMHorListView *listView; // @synthesize listView=_listView;
- (void).cxx_destruct;
- (id)dequeueReusableCellWithIdentifier:(id)arg1;
- (unsigned long long)realIndex:(long long)arg1;
- (void)listViewPageChanged:(unsigned long long)arg1;
- (void)listView:(id)arg1 didSelectColumnAtIndex:(long long)arg2;
- (id)listView:(id)arg1 viewForColumnAtIndex:(long long)arg2;
- (double)listView:(id)arg1 widthForColumnAtIndex:(long long)arg2;
- (long long)numberOfColumnsInListView:(id)arg1;
- (_Bool)isCarousel;
- (_Bool)isInfinite;
- (void)setCellWidth:(double)arg1;
- (void)setPageControlFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (double)getCellWidth;
- (void)resetListView;
- (void)reloadDataWithInitPosition:(unsigned long long)arg1;
- (void)reloadData;
- (void)setCurrentPage:(unsigned long long)arg1;
- (void)carouselScrollView;
- (void)startToCarousel;
- (void)setScrollType:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 scrollType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

