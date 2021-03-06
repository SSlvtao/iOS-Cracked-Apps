//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseTableViewController.h"

#import "QLSMultiSelectToolbarDataSource.h"
#import "QLSMultiSelectToolbarDelegate.h"

@class NSMutableArray, NSString, QLSMultiSelectToolbar, UIButton, UIImageView;

@interface QLNewPseudoEditableViewController : QLBaseTableViewController <QLSMultiSelectToolbarDataSource, QLSMultiSelectToolbarDelegate>
{
    struct UIEdgeInsets contentInset;
    UIImageView *_headerEditView;
    QLSMultiSelectToolbar *_toolBar;
    _Bool _hidesTabBarWhenPushed;
    NSMutableArray *indexPathsToDelete;
    _Bool _pseudoEditing;
    UIButton *_editButton;
    long long _pageTag;
}

@property(nonatomic) long long pageTag; // @synthesize pageTag=_pageTag;
@property(nonatomic, getter=isPseudoEditing) _Bool pseudoEditing; // @synthesize pseudoEditing=_pseudoEditing;
@property(nonatomic) _Bool hidesTabBarWhenPushed; // @synthesize hidesTabBarWhenPushed=_hidesTabBarWhenPushed;
@property(retain, nonatomic) UIImageView *headerEditView; // @synthesize headerEditView=_headerEditView;
- (void).cxx_destruct;
- (id)generateCurrentPageReportKey;
- (id)currentPageTableViewForReport;
- (void)deleteBatch;
- (void)itemDeselectAll;
- (void)itemSelectAll;
- (unsigned long long)getAllCount;
- (unsigned long long)getDeleteCount;
- (void)setPseudoEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)isDataSourceEmpty;
- (_Bool)isSelectAll;
- (long long)numberOfSelectedItem;
- (void)toolBarDidClickDeleteSelected:(id)arg1;
- (void)toolBarDidClickSelectAll:(id)arg1;
- (void)hideToolbar;
- (void)showToolbar;
- (void)updateToolbarButtons;
- (void)btnEditDown:(id)arg1;
- (void)refreshNaviBarItem;
@property(readonly, nonatomic) UIButton *editButton;
- (void)hideNaviBarItem;
- (void)showNaviBarItem;
- (void)toggleEditing;
- (id)toolbar;
- (struct CGRect)rectForOverlayView;
- (void)showEmpty:(_Bool)arg1;
- (void)batchEditDown:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidUnload;
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

