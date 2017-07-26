//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseTableViewController.h"

#import "QLJumpObjectOpenUrlDelegate.h"
#import "QLPushTextStyleCellDelegate.h"

@class NSArray, NSDictionary, NSString;

@interface QLPushSettingsViewController : QLBaseTableViewController <QLPushTextStyleCellDelegate, QLJumpObjectOpenUrlDelegate>
{
    NSArray *_settingsConfigures;
    NSDictionary *_typeMap;
    NSDictionary *_reportMap;
}

+ (_Bool)OpenJumpUrlWithobject;
@property(retain, nonatomic) NSDictionary *reportMap; // @synthesize reportMap=_reportMap;
@property(retain, nonatomic) NSDictionary *typeMap; // @synthesize typeMap=_typeMap;
@property(retain, nonatomic) NSArray *settingsConfigures; // @synthesize settingsConfigures=_settingsConfigures;
- (void).cxx_destruct;
- (_Bool)textStyleCell:(id)arg1 shouldChangeSwithValue:(_Bool)arg2;
- (void)textStyleCell:(id)arg1 didSwitchValueChanged:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)appAuthrizationUpdated:(id)arg1;
- (void)refreshSettingsConfig;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

