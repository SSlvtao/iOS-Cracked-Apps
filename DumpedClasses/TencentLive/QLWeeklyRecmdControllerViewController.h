//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseViewController.h"

#import "MKHorizMenuDataSource.h"
#import "MKHorizMenuDelegate.h"
#import "QLJumpObjectOpenUrlDelegate.h"
#import "QLPageNavigatorDatasource.h"
#import "QLPageNavigatorDelegate.h"

@class MKHorizMenu, NSMutableArray, NSMutableDictionary, NSString, QLPageNavigator, QLWeeklyRecmdMenuModel, UIButton, UIView;

@interface QLWeeklyRecmdControllerViewController : QLBaseViewController <MKHorizMenuDataSource, MKHorizMenuDelegate, QLPageNavigatorDatasource, QLPageNavigatorDelegate, QLJumpObjectOpenUrlDelegate>
{
    MKHorizMenu *_horizMenu;
    UIView *_bgHeaderView;
    QLPageNavigator *_pageNavi;
    long long _lastPageIndex;
    NSMutableDictionary *_dicCtls;
    QLWeeklyRecmdMenuModel *_dataModel;
    UIButton *_shareBtn;
    UIButton *_moreActionBtn;
    UIButton *_btnAddChannel;
    NSString *_dataKey;
    NSString *_type;
    NSString *_tabId;
    NSString *_jumpData;
    NSString *_vid;
    NSString *_cid;
    _Bool _forceLoadData;
    NSString *_tabColorStr;
    NSMutableArray *_aryItemsShouldShowOnHorizMenu;
}

+ (_Bool)OpenJumpUrlWithobject;
@property(retain, nonatomic) NSMutableArray *aryItemsShouldShowOnHorizMenu; // @synthesize aryItemsShouldShowOnHorizMenu=_aryItemsShouldShowOnHorizMenu;
@property(retain, nonatomic) NSString *tabColorStr; // @synthesize tabColorStr=_tabColorStr;
@property(nonatomic) _Bool forceLoadData; // @synthesize forceLoadData=_forceLoadData;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (id)titleForEmpty;
- (id)titleForError:(id)arg1;
- (_Bool)responseDragbackAtScreenPoint:(struct CGPoint)arg1;
- (void)showNavBottomShadow:(_Bool)arg1;
- (void)hideShareButton:(_Bool)arg1;
- (id)pageDescription;
- (void)selectPageWithTabId:(id)arg1;
- (void)scrollToTop;
- (id)getCurrentViewCtl;
- (void)preLoadBesidesPages;
- (_Bool)needCustomStatusBarScrollTopGesture;
- (void)addChannelBtnClick:(id)arg1;
- (void)moreBtnClick;
- (void)shareBtnClick;
- (void)horizMenu:(id)arg1 itemDoubleClickAtIndex:(unsigned long long)arg2;
- (void)horizMenu:(id)arg1 itemSelectedAtIndex:(unsigned long long)arg2;
- (id)horizMenu:(id)arg1 subTtitleForItemAtIndex:(unsigned long long)arg2;
- (id)horizMenu:(id)arg1 titleForItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsForMenu:(id)arg1;
- (id)selectedItemNaviMaskColorForHorizMenu:(id)arg1;
- (id)selectedItemTitleColorForHorizMenu:(id)arg1;
- (id)backgroundColorForMenu:(id)arg1;
- (id)buttonFontForHorizMenu:(id)arg1;
- (id)selectedItemImageForMenu:(id)arg1;
- (unsigned long long)eachItemWidthForMenu:(id)arg1;
- (void)pageNavigatorDidScroll:(id)arg1;
- (void)pageNavigator:(id)arg1 didNaviToIndex:(long long)arg2;
- (_Bool)pageNavigator:(id)arg1 pageExsistAtIndex:(long long)arg2;
- (id)pageNavigator:(id)arg1 viewCtlForIndex:(long long)arg2;
- (long long)numberOfPagesInNavigator:(id)arg1;
- (void)requestModelDidFinishLoad:(id)arg1;
- (void)popUp:(_Bool)arg1;
- (void)retryDown:(id)arg1;
- (id)getCurrentPageCtl;
- (_Bool)isCurrentCtlContainSubPageCtl;
- (void)leaveCurrentSubPage;
- (void)enterCurrentSubPage;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)blurBgView;
- (id)initWithDataKey:(id)arg1 andType:(id)arg2 andTabId:(id)arg3 andJumpData:(id)arg4 andVid:(id)arg5 andCid:(id)arg6;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

