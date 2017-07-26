//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseViewController.h"

#import "QLHorizMenuDataSource.h"
#import "QLHorizMenuDelegate.h"
#import "QNBPageViewControllerDataSource.h"
#import "QNBPageViewControllerDelegate.h"
#import "UIPageViewControllerDataSource.h"
#import "UIPageViewControllerDelegate.h"

@class NSMutableDictionary, NSString, QLHorizMenuView, QNBPageViewController, UIPageViewController, UIScrollView, UIView, UIViewController;

@interface QLBaseTabPageViewController : QLBaseViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, QLHorizMenuDelegate, QLHorizMenuDataSource, QNBPageViewControllerDataSource, QNBPageViewControllerDelegate>
{
    UIPageViewController *_resultPageVC;
    NSMutableDictionary *_dicCtls;
    _Bool _usingQNBPageVC;
    _Bool _isScrollBySelectTab;
    _Bool _canChangePage;
    _Bool _isChangingPage;
    UIViewController *_hostCtl;
    QLHorizMenuView *_horizMenu;
    long long _lastPageIndex;
    UIScrollView *_resultPageScrollView;
    UIView *_coverView;
    double _horizMenuOriginY;
    long long _tabScrollDirection;
    long long _retryChangePageCount;
    UIViewController *_pageController;
    QNBPageViewController *_qnbPageController;
    struct CGPoint _tableViewContentOffset;
}

@property(retain, nonatomic) QNBPageViewController *qnbPageController; // @synthesize qnbPageController=_qnbPageController;
@property(retain, nonatomic) UIViewController *pageController; // @synthesize pageController=_pageController;
@property(nonatomic) long long retryChangePageCount; // @synthesize retryChangePageCount=_retryChangePageCount;
@property(nonatomic) _Bool isChangingPage; // @synthesize isChangingPage=_isChangingPage;
@property(nonatomic) _Bool canChangePage; // @synthesize canChangePage=_canChangePage;
@property(nonatomic) _Bool isScrollBySelectTab; // @synthesize isScrollBySelectTab=_isScrollBySelectTab;
@property(nonatomic) long long tabScrollDirection; // @synthesize tabScrollDirection=_tabScrollDirection;
@property(nonatomic) double horizMenuOriginY; // @synthesize horizMenuOriginY=_horizMenuOriginY;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) _Bool usingQNBPageVC; // @synthesize usingQNBPageVC=_usingQNBPageVC;
@property(nonatomic) struct CGPoint tableViewContentOffset; // @synthesize tableViewContentOffset=_tableViewContentOffset;
@property(retain, nonatomic) UIScrollView *resultPageScrollView; // @synthesize resultPageScrollView=_resultPageScrollView;
@property(nonatomic) long long lastPageIndex; // @synthesize lastPageIndex=_lastPageIndex;
@property(retain, nonatomic) QLHorizMenuView *horizMenu; // @synthesize horizMenu=_horizMenu;
@property(nonatomic) __weak UIViewController *hostCtl; // @synthesize hostCtl=_hostCtl;
- (void).cxx_destruct;
- (void)pageViewController:(id)arg1 pageContentOffset:(struct CGPoint)arg2;
- (void)pageViewController:(id)arg1 DidTransitionFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)pageViewController:(id)arg1 willTransitionFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)pageViewController:(id)arg1 DidSwitchFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)pageViewController:(id)arg1 willSwitchFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 animated:(_Bool)arg4;
- (struct CGSize)sizeOfPageInPageViewController:(id)arg1;
- (long long)numberOfControllersInPageViewController:(id)arg1;
- (id)pageViewController:(id)arg1 controllerAtIndex:(unsigned long long)arg2;
- (void)resetPageContentOffset:(long long)arg1;
- (void)addCoverViewInHomePage;
- (void)resetTargetViewContentOffset:(long long)arg1;
- (void)resetBesideViewsContentOffset;
- (void)handleWhenMenuInCover;
- (void)handleWhenMenuInNaviBar;
- (void)resetHeaderLocation:(_Bool)arg1;
- (void)handleScrollAction:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (void)pageViewControllerDidFinish:(_Bool)arg1 currentIndex:(long long)arg2;
- (void)requestModel:(id)arg1 didFailedLoadWithError:(id)arg2;
- (void)requestModelDidFinishLoad:(id)arg1;
- (id)pageViewControllerAtIndex:(long long)arg1;
- (_Bool)disablePageScrollAnimation;
- (void)jumpPageIndex:(long long)arg1;
- (_Bool)needCustomStatusBarScrollTopGesture;
- (id)horizMenu:(id)arg1 titleForItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsForMenu:(id)arg1;
- (id)backgroundColorForMenu:(id)arg1;
- (void)horizMenu:(id)arg1 itemDoubleClickAtIndex:(unsigned long long)arg2;
- (void)horizMenu:(id)arg1 itemSelectedAtIndex:(unsigned long long)arg2;
- (id)topChannelControllerWithIndex:(long long)arg1;
- (id)topChannelTitleWithIndex:(long long)arg1;
- (unsigned long long)topChannelNumber;
- (id)topChannelKeyWithIndex:(long long)arg1;
- (id)currentTopChannelController;
- (id)pageScrollReportParams;
- (id)pageScrollReportKey;
- (id)getHorizView;
- (double)getTopViewHeight;
- (double)getTopViewBottom;
- (_Bool)menuIsInTopView;
- (void)updatePageForDataNotFromCached;
- (void)didChangePage:(unsigned long long)arg1;
- (id)customNavigationBar;
- (void)addTopBarInCoverView:(id)arg1 originY:(double)arg2;
- (void)reloadTopBarData;
- (unsigned long long)topBarStyle;
- (void)naviBar:(id)arg1 didClickBackBtn:(id)arg2;
- (void)scrollToTop;
- (_Bool)responseDragbackAtScreenPoint:(struct CGPoint)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (double)horizMenuWidth;
- (double)horizMenuHeight;
- (void)viewWillLayoutSubviews;
- (void)initializeHorizeMenu;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)enableHostCtlPageScroll:(_Bool)arg1;
- (_Bool)pageScrollViewEnabled;
- (void)enablePageScrollView:(_Bool)arg1;
- (void)initResultPageVC;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

