//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQSearchBaseViewController.h"

#import "DiscussGroupListViewDelegate.h"
#import "GroupListViewDelegate.h"
#import "QQSearchResultClickResponding.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class DiscussGroupListViewNew, GroupListViewNew, NSString, QQTabWithInPageControl, UIView;

@interface QQFriendSelectedGroupAndDiscussViewController : QQSearchBaseViewController <UITableViewDataSource, UITableViewDelegate, QQSearchResultClickResponding, GroupListViewDelegate, DiscussGroupListViewDelegate>
{
    _Bool _hideCellAccessory;
    id <FriendSelectedChildViewDeletage> _friendSelectedDelegate;
    long long _initialIndex;
    long long _curIndex;
    long long _curType;
    long long _contentStyle;
    GroupListViewNew *_groupListView;
    DiscussGroupListViewNew *_discussTableView;
    UIView *_segmentPanel;
    UIView *_contentView;
    QQTabWithInPageControl *_segmentControl;
}

@property(retain, nonatomic) QQTabWithInPageControl *segmentControl; // @synthesize segmentControl=_segmentControl;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *segmentPanel; // @synthesize segmentPanel=_segmentPanel;
@property(retain, nonatomic) DiscussGroupListViewNew *discussTableView; // @synthesize discussTableView=_discussTableView;
@property(retain, nonatomic) GroupListViewNew *groupListView; // @synthesize groupListView=_groupListView;
@property(nonatomic) long long contentStyle; // @synthesize contentStyle=_contentStyle;
@property(readonly, nonatomic) long long curType; // @synthesize curType=_curType;
@property(readonly, nonatomic) long long curIndex; // @synthesize curIndex=_curIndex;
@property(nonatomic) long long initialIndex; // @synthesize initialIndex=_initialIndex;
@property(nonatomic) _Bool hideCellAccessory; // @synthesize hideCellAccessory=_hideCellAccessory;
@property(nonatomic) __weak id <FriendSelectedChildViewDeletage> friendSelectedDelegate; // @synthesize friendSelectedDelegate=_friendSelectedDelegate;
- (void).cxx_destruct;
- (void)onResultCellClick:(id)arg1;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)discussGroupListSelected:(id)arg1;
- (void)groupListSelected:(id)arg1;
- (void)refreshDiscussInfo;
- (void)reloadAppearance;
- (id)getTableViewByType:(long long)arg1;
- (void)modifySelectedIndex:(long long)arg1;
- (long long)convertIndexToType:(long long)arg1;
- (void)valueChanged:(id)arg1;
- (void)initializeSegmentControl:(id)arg1;
- (void)loadDiscussListView;
- (void)loadGroopListView;
- (void)initContentView;
- (void)registerNotification;
- (_Bool)isSupportFullScreenLayout;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
