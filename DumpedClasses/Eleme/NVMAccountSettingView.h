//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMTableView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableArray, NSString, NVMAccountIconCell, NVMUserExtraInfo;

@interface NVMAccountSettingView : NVMTableView <UITableViewDataSource, UITableViewDelegate>
{
    CDUnknownBlockType _iconAction;
    CDUnknownBlockType _resetNameAction;
    CDUnknownBlockType _bindMobileAction;
    CDUnknownBlockType _bindWeChatAction;
    CDUnknownBlockType _bindQQAction;
    CDUnknownBlockType _bindWeiboAction;
    CDUnknownBlockType _bindEmailAction;
    CDUnknownBlockType _bindTaobaoAction;
    CDUnknownBlockType _resetPasswordAction;
    CDUnknownBlockType _resetPaymentPasswordAction;
    CDUnknownBlockType _resetChargeFreeAction;
    NVMUserExtraInfo *_info;
    NSMutableArray *_userInfoSectionData;
    NSMutableArray *_bindInfoSectionData;
    NSMutableArray *_securitySectionData;
    NSArray *_sectionData;
    NSArray *_headerTexts;
    NVMAccountIconCell *_avatorCell;
}

@property(nonatomic) __weak NVMAccountIconCell *avatorCell; // @synthesize avatorCell=_avatorCell;
@property(retain, nonatomic) NSArray *headerTexts; // @synthesize headerTexts=_headerTexts;
@property(retain, nonatomic) NSArray *sectionData; // @synthesize sectionData=_sectionData;
@property(retain, nonatomic) NSMutableArray *securitySectionData; // @synthesize securitySectionData=_securitySectionData;
@property(retain, nonatomic) NSMutableArray *bindInfoSectionData; // @synthesize bindInfoSectionData=_bindInfoSectionData;
@property(retain, nonatomic) NSMutableArray *userInfoSectionData; // @synthesize userInfoSectionData=_userInfoSectionData;
@property(retain, nonatomic) NVMUserExtraInfo *info; // @synthesize info=_info;
@property(copy, nonatomic) CDUnknownBlockType resetChargeFreeAction; // @synthesize resetChargeFreeAction=_resetChargeFreeAction;
@property(copy, nonatomic) CDUnknownBlockType resetPaymentPasswordAction; // @synthesize resetPaymentPasswordAction=_resetPaymentPasswordAction;
@property(copy, nonatomic) CDUnknownBlockType resetPasswordAction; // @synthesize resetPasswordAction=_resetPasswordAction;
@property(copy, nonatomic) CDUnknownBlockType bindTaobaoAction; // @synthesize bindTaobaoAction=_bindTaobaoAction;
@property(copy, nonatomic) CDUnknownBlockType bindEmailAction; // @synthesize bindEmailAction=_bindEmailAction;
@property(copy, nonatomic) CDUnknownBlockType bindWeiboAction; // @synthesize bindWeiboAction=_bindWeiboAction;
@property(copy, nonatomic) CDUnknownBlockType bindQQAction; // @synthesize bindQQAction=_bindQQAction;
@property(copy, nonatomic) CDUnknownBlockType bindWeChatAction; // @synthesize bindWeChatAction=_bindWeChatAction;
@property(copy, nonatomic) CDUnknownBlockType bindMobileAction; // @synthesize bindMobileAction=_bindMobileAction;
@property(copy, nonatomic) CDUnknownBlockType resetNameAction; // @synthesize resetNameAction=_resetNameAction;
@property(copy, nonatomic) CDUnknownBlockType iconAction; // @synthesize iconAction=_iconAction;
- (void).cxx_destruct;
- (id)mobileCellString;
- (id)chargeFreeSettingCell;
- (id)paymentPasswordSettingCell;
- (id)passwordSettingCell;
- (id)userNameCell;
- (id)userIconCell;
- (id)securtyCellWithIndexPath:(id)arg1;
- (id)bindInfoCellWithIndexPath:(id)arg1;
- (id)userInfoCellWithIndexPath:(id)arg1;
- (id)cellWithText:(id)arg1;
- (void)selectSecurityRow:(id)arg1;
- (void)selectBindInfoRow:(long long)arg1;
- (void)selectUserInfoRow:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)loadData;
- (void)configView;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

