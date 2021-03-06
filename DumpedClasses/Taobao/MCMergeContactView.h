//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MCMergeContactViewProtocol.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, UITableView;

@interface MCMergeContactView : UIView <UITableViewDataSource, UITableViewDelegate, MCMergeContactViewProtocol>
{
    UITableView *_mergeContactTableView;
    id <MCMergeContactViewDelegate> _delegate;
}

@property(nonatomic) __weak id <MCMergeContactViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITableView *mergeContactTableView; // @synthesize mergeContactTableView=_mergeContactTableView;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

