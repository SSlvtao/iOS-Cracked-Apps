//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "ActionSheetDataDelegate.h"
#import "AvatarServiceDelegate.h"
#import "GSRequestCallBackDelegate.h"
#import "LBSOpenGroupSettingViewCellDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class HCLCNoticeModel, HotChatExitRequest, HotChatMgrExitRequest, NSMutableArray, NSString, QQGroupSettingAdminMemViewController, QQHotChatMembersView, QQHotChatModel, QQWebShareActionSheet, UIButton, UIImage, UILabel, UITableView, UIView;

@interface QQHotChatSettingViewController : QQViewController <UIAlertViewDelegate, ActionSheetDataDelegate, GSRequestCallBackDelegate, AvatarServiceDelegate, UITableViewDataSource, UITableViewDelegate, UIActionSheetDelegate, LBSOpenGroupSettingViewCellDelegate>
{
    QQHotChatModel *_model;
    NSMutableArray *_members;
    UITableView *_tableView;
    QQHotChatMembersView *_membersView;
    UILabel *_noticeDetailLabel;
    _Bool _needDeleteTips;
    NSString *_ownerNick;
    NSString *_ownerAvatarUrl;
    UIImage *_ownerAvatarImage;
    QQWebShareActionSheet *_shareActionSheet;
    HCLCNoticeModel *_configNotice;
    HotChatExitRequest *_exitRequest;
    HotChatMgrExitRequest *_mgrExitRequest;
    UIButton *_inFormButton;
    UIView *_footButton;
    QQGroupSettingAdminMemViewController *_setAdminVC;
}

@property(nonatomic) __weak QQGroupSettingAdminMemViewController *setAdminVC; // @synthesize setAdminVC=_setAdminVC;
@property(nonatomic) __weak UIView *footButton; // @synthesize footButton=_footButton;
@property(nonatomic) __weak UIButton *inFormButton; // @synthesize inFormButton=_inFormButton;
@property(retain, nonatomic) HotChatMgrExitRequest *mgrExitRequest; // @synthesize mgrExitRequest=_mgrExitRequest;
@property(retain, nonatomic) HotChatExitRequest *exitRequest; // @synthesize exitRequest=_exitRequest;
@property(retain, nonatomic) HCLCNoticeModel *configNotice; // @synthesize configNotice=_configNotice;
@property(retain, nonatomic) QQWebShareActionSheet *shareActionSheet; // @synthesize shareActionSheet=_shareActionSheet;
- (void).cxx_destruct;
- (void)createRoomInform:(id)arg1;
- (id)shareTitleWithItem:(int)arg1;
- (void)reportWebShareWithItem:(int)arg1;
- (id)getDataForShareItem:(id)arg1 onThisItem:(int)arg2;
- (id)getDataForConfig:(id)arg1;
- (void)showShareActionSheet;
- (void)didFailedDownloadingImage:(id)arg1 type:(int)arg2 size:(int)arg3 shape:(int)arg4 avatarInfo:(id)arg5;
- (void)didFailedGetAvatarInfo:(id)arg1 type:(int)arg2;
- (void)didLoadImage:(id)arg1 identity:(id)arg2 type:(int)arg3 size:(int)arg4 shape:(int)arg5 avatarInfo:(id)arg6;
- (void)didSelectShareGroup;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)requestDidFailed:(id)arg1 userInfo:(id)arg2;
- (void)requestDidSucceed:(id)arg1 userInfo:(id)arg2;
- (id)getShowGroupNotice;
- (void)onFetchedWifiChatBaseInfo:(id)arg1;
- (void)destoryHotChatGroup;
- (void)exitWifiChatGroup;
- (void)fetchGroupNotice;
- (void)fetchGroupMembersList;
- (void)fetchManagerMembers;
- (void)fetchGroupBaseInfo;
- (void)popToRootViewController;
- (void)dealloc;
- (void)quitAction:(id)arg1;
- (void)destoryAction:(id)arg1;
- (void)onGetGroupAdminsNotify:(id)arg1;
- (void)onHotChatAdminCountChangeNotify:(id)arg1;
- (void)updateMemberNotification:(id)arg1;
- (void)updateSettingNoticeNotification:(id)arg1;
- (void)onGetNoticeNotificationForCreate:(id)arg1;
- (_Bool)isSupportRightDragToGoBack;
- (void)onGetNoticeNotificationForOffice:(id)arg1;
- (void)onDeleteTabWithGroupCode:(id)arg1;
- (void)viewDidLoad;
- (id)initWithModel:(id)arg1;
- (id)initWithGroupCode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

