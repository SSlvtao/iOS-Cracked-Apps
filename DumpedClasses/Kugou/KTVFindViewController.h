//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVBaseViewController.h"

#import "KTVInviteTableHeadViewDelegate.h"
#import "KTVTableViewDataSource.h"
#import "KTVTableViewDelegate.h"

@class KGDefaultNetErrorView, KTVCommonTableViewRE, KTVEmptyView, KTVInviteTableHeadView, KTVNearInviteSongModel, KTVUserCenterVM, NSString, UIView;

@interface KTVFindViewController : KTVBaseViewController <KTVTableViewDelegate, KTVTableViewDataSource, KTVInviteTableHeadViewDelegate>
{
    KTVInviteTableHeadView *_tableHeadView;
    UIView *_tableSectionView;
    _Bool _isFirstGetData;
    _Bool _isFirstFresh;
    KTVUserCenterVM *_userCenterVM;
    KTVNearInviteSongModel *_inviteSongModel;
    KTVCommonTableViewRE *_tableview;
    KGDefaultNetErrorView *_errorView;
    KTVEmptyView *_noDataView;
}

@property(retain, nonatomic) KTVEmptyView *noDataView; // @synthesize noDataView=_noDataView;
@property(retain, nonatomic) KGDefaultNetErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) KTVCommonTableViewRE *tableview; // @synthesize tableview=_tableview;
@property(retain, nonatomic) KTVNearInviteSongModel *inviteSongModel; // @synthesize inviteSongModel=_inviteSongModel;
@property(retain, nonatomic) KTVUserCenterVM *userCenterVM; // @synthesize userCenterVM=_userCenterVM;
- (void).cxx_destruct;
- (long long)showPlayBarWay;
- (void)ktvTableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)ktvTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)ktvTableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)ktvTableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)ktvTableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)ktvTableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)ktvTableView:(id)arg1 startAsyncRequestData:(_Bool)arg2;
- (void)actionMore;
- (void)IReceiveInvite;
- (void)myInviteSong;
- (void)shakeInvite;
- (void)IWantToInvite;
- (void)createSectionView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)KGUsingControllerState:(int)arg1;
- (void)updateInviteSongNum;
- (void)doAgain;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

