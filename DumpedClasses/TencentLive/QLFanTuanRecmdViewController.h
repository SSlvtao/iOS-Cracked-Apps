//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLChannelRecmdViewCtl.h"

#import "QLBaseTabPageViewSubViewControllerProtocol.h"

@class QLBaseTabPageViewController, QLJCEFanInvolveItem, QLJCELiveTabModuleInfo, QLPlayerViewScrollMgr;

@interface QLFanTuanRecmdViewController : QLChannelRecmdViewCtl <QLBaseTabPageViewSubViewControllerProtocol>
{
    _Bool _isPageFirstLoad;
    _Bool _viewHasAppear;
    QLBaseTabPageViewController *_homeCtl;
    QLJCEFanInvolveItem *_fanInfo;
    QLJCELiveTabModuleInfo *_tabInfo;
    QLPlayerViewScrollMgr *_miniPlayerMgr;
}

@property(retain, nonatomic) QLPlayerViewScrollMgr *miniPlayerMgr; // @synthesize miniPlayerMgr=_miniPlayerMgr;
@property(retain, nonatomic) QLJCELiveTabModuleInfo *tabInfo; // @synthesize tabInfo=_tabInfo;
@property(nonatomic) _Bool viewHasAppear; // @synthesize viewHasAppear=_viewHasAppear;
@property(nonatomic) _Bool isPageFirstLoad; // @synthesize isPageFirstLoad=_isPageFirstLoad;
@property(retain, nonatomic) QLJCEFanInvolveItem *fanInfo; // @synthesize fanInfo=_fanInfo;
@property(nonatomic) __weak QLBaseTabPageViewController *homeCtl; // @synthesize homeCtl=_homeCtl;
- (void).cxx_destruct;
- (void)tabPageViewWillChangePage;
- (double)floatPlayerTopPosition;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)requestModelDidFinishLoad:(id)arg1;
- (_Bool)hideTabBarWhenPushed;
- (void)showRefreshingWordToastView;
- (void)resetCategoryCode;
- (long long)headerDragRefreshStyle;
- (double)defaultTopOffsetValue;
- (struct CGRect)frameOfPageStatusView;
- (long long)qlStausBarStyle;
- (id)pageDescription;
- (void)didReceiveMemoryWarning;
- (void)leavePage;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithTabInfo:(id)arg1;
- (void)dealloc;

@end

