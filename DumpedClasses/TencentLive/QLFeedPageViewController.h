//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseTableViewController.h"

#import "P_QLDragToRefresh.h"
#import "QLMomentTimelineViewDelegate.h"
#import "QLThumbCreationUserInfo.h"

@class NSMutableArray, NSString;

@interface QLFeedPageViewController : QLBaseTableViewController <P_QLDragToRefresh, QLThumbCreationUserInfo, QLMomentTimelineViewDelegate>
{
    NSMutableArray *_aryItems;
}

@property(retain, nonatomic) NSMutableArray *aryItems; // @synthesize aryItems=_aryItems;
- (void).cxx_destruct;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)updateMomentNotification:(id)arg1;
- (void)needToUpdateCommentView:(id)arg1 withItem:(id)arg2;
- (void)needToUpdateLikeView:(id)arg1 withItem:(id)arg2;
- (id)commentWillBegin:(id)arg1 withItem:(id)arg2;
- (void)dragReload:(_Bool)arg1;
- (_Bool)hasFootterDragRefresh;
- (_Bool)hasHeaderDragRefresh;
- (id)dragRefreshView;
- (id)currentPageTableViewForReport;
- (struct CGRect)frameOfPageStatusView;
- (void)retryDown:(id)arg1;
- (_Bool)shouldReportNavPage;
- (void)leavePage;
- (void)enterPage;
- (void)tableView:(id)arg1 tableDidReloaded:(_Bool)arg2;
- (void)reloadTableView:(id)arg1 needSetContentOffset:(_Bool)arg2 animated:(_Bool)arg3;
- (void)reloadTableView:(id)arg1;
- (void)updateTableView:(id)arg1;
- (void)mergeFakeCommentForItem:(id)arg1;
- (void)mergeFakeItemForAryItems;
- (id)indexPathWithObject:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

