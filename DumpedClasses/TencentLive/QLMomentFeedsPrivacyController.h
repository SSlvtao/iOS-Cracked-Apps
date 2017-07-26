//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLNewBaseTableViewController.h"

#import "KKMediaPlayerTopViewControlProtocolEx.h"
#import "QLSelectButtonDelegate.h"
#import "TimelineEngineDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableArray, NSString, QLPrivacyListModel, QLSelectButton, UILabel;

@interface QLMomentFeedsPrivacyController : QLNewBaseTableViewController <QLSelectButtonDelegate, UITableViewDataSource, UITableViewDelegate, TimelineEngineDelegate, KKMediaPlayerTopViewControlProtocolEx>
{
    id _parentCtrl;
    QLPrivacyListModel *_privacyModel;
    QLSelectButton *_switchPublic;
    QLSelectButton *_switchHiden;
    NSArray *_pluginArray;
    NSMutableArray *_aryItems;
    UILabel *_publicLable;
    UILabel *_notAllowLable;
}

@property(retain, nonatomic) UILabel *notAllowLable; // @synthesize notAllowLable=_notAllowLable;
@property(retain, nonatomic) UILabel *publicLable; // @synthesize publicLable=_publicLable;
@property(retain) NSMutableArray *aryItems; // @synthesize aryItems=_aryItems;
@property(retain) NSArray *pluginArray; // @synthesize pluginArray=_pluginArray;
@property(retain, nonatomic) QLSelectButton *switchHiden; // @synthesize switchHiden=_switchHiden;
@property(retain, nonatomic) QLSelectButton *switchPublic; // @synthesize switchPublic=_switchPublic;
@property(retain, nonatomic) QLPrivacyListModel *privacyModel; // @synthesize privacyModel=_privacyModel;
@property(nonatomic) __weak id parentCtrl; // @synthesize parentCtrl=_parentCtrl;
- (void).cxx_destruct;
- (_Bool)shouldStopPlay;
- (void)didSelectFriends:(id)arg1 withViewController:(id)arg2;
- (void)engineDidFinishLoad:(id)arg1;
- (id)pageDescription;
- (void)qlSelectButton:(id)arg1 selectionDidChange:(_Bool)arg2;
- (void)refreshView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)changeDescLableColor;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)popUp:(_Bool)arg1;
- (id)getTheSelectButtonWithFrame:(struct CGRect)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

