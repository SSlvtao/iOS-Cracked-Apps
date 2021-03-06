//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVViewController.h"

#import "KTVLocalRecordCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class KTVOpusShareVC, KTVPlayerBaseInfo, KTV_LocalWorkDBMgr, NSMutableArray, NSString, UITableView, UIView;

@interface KTVLocalRecordViewController : KTVViewController <UITableViewDelegate, UITableViewDataSource, KTVLocalRecordCellDelegate>
{
    KTV_LocalWorkDBMgr *_lcoalWorkDBMgr;
    KTVPlayerBaseInfo *_inviterPlayer;
    long long _inviteId;
    NSString *_userID;
    NSMutableArray *_localRecordList;
    UITableView *_listTableView;
    KTVOpusShareVC *_shareVC;
    UIView *_emptyView;
}

@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) KTVOpusShareVC *shareVC; // @synthesize shareVC=_shareVC;
@property(nonatomic) __weak UITableView *listTableView; // @synthesize listTableView=_listTableView;
@property(retain, nonatomic) NSMutableArray *localRecordList; // @synthesize localRecordList=_localRecordList;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(nonatomic) long long inviteId; // @synthesize inviteId=_inviteId;
@property(retain, nonatomic) KTVPlayerBaseInfo *inviterPlayer; // @synthesize inviterPlayer=_inviterPlayer;
- (void).cxx_destruct;
- (void)goToSingSong;
- (void)dismissEmpty;
- (void)showEmptyOnView:(id)arg1;
- (long long)showPlayBarWay;
- (void)ktvlocalRecordCell:(id)arg1 clickedChooseSongIndex:(long long)arg2;
- (id)convertTimeToString:(int)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)getLocalData;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)KGUsingControllerState:(int)arg1;
- (id)initWithUserID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

