//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseViewController.h"

#import "QLThemeHorizMenuDatasource.h"
#import "QLThemeHorizMenuDelegate.h"
#import "UIPageViewControllerDataSource.h"
#import "UIPageViewControllerDelegate.h"

@class NSDate, NSMutableDictionary, NSString, QLThemeHorizMenu, UIPageViewController, UIScrollView, UIView, UIViewController;

@interface QLBaseMenuPageViewController : QLBaseViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, QLThemeHorizMenuDelegate, QLThemeHorizMenuDatasource>
{
    NSString *mLastPageKey;
    struct CGRect mOrigResultPageVCFrame;
    _Bool _isScrollBySelectTab;
    _Bool _isRefreshingMenu;
    _Bool _isSwitchingPage;
    UIView *_menu;
    UIViewController *_visibleViewController;
    long long _lastPageIndex;
    long long _curPageIndex;
    UIPageViewController *_resultPageVC;
    UIScrollView *_resultPageScrollView;
    NSMutableDictionary *_dicCtls;
    Class _menuClass;
    NSDate *_dateLastLoaded;
    unsigned long long _refreshMenuRetryCount;
    unsigned long long _switchPageRetryCount;
    QLThemeHorizMenu *_myThemeHorizMenu;
}

@property(retain, nonatomic) QLThemeHorizMenu *myThemeHorizMenu; // @synthesize myThemeHorizMenu=_myThemeHorizMenu;
@property unsigned long long switchPageRetryCount; // @synthesize switchPageRetryCount=_switchPageRetryCount;
@property unsigned long long refreshMenuRetryCount; // @synthesize refreshMenuRetryCount=_refreshMenuRetryCount;
@property(retain, nonatomic) NSDate *dateLastLoaded; // @synthesize dateLastLoaded=_dateLastLoaded;
@property _Bool isSwitchingPage; // @synthesize isSwitchingPage=_isSwitchingPage;
@property _Bool isRefreshingMenu; // @synthesize isRefreshingMenu=_isRefreshingMenu;
@property(nonatomic) _Bool isScrollBySelectTab; // @synthesize isScrollBySelectTab=_isScrollBySelectTab;
@property(nonatomic) Class menuClass; // @synthesize menuClass=_menuClass;
@property(retain, nonatomic) NSMutableDictionary *dicCtls; // @synthesize dicCtls=_dicCtls;
@property(retain, nonatomic) UIScrollView *resultPageScrollView; // @synthesize resultPageScrollView=_resultPageScrollView;
@property(retain, nonatomic) UIPageViewController *resultPageVC; // @synthesize resultPageVC=_resultPageVC;
@property(nonatomic) long long curPageIndex; // @synthesize curPageIndex=_curPageIndex;
@property(nonatomic) long long lastPageIndex; // @synthesize lastPageIndex=_lastPageIndex;
@property(nonatomic) __weak UIViewController *visibleViewController; // @synthesize visibleViewController=_visibleViewController;
@property(nonatomic) __weak UIView *menu; // @synthesize menu=_menu;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)requestModel:(id)arg1 didFailedLoadWithError:(id)arg2;
- (void)requestModelDidFinishLoad:(id)arg1;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (void)pageNagatorScrollStatus:(id)arg1;
- (id)currentTopChannelController;
- (id)pageViewControllerAtIndex:(long long)arg1;
- (void)initResultPageVC;
- (_Bool)pageScrollViewEnabled;
- (void)enablePageScrollView:(_Bool)arg1;
- (void)pageViewCacheWarningEliminateExceptFor:(long long)arg1;
- (void)pageViewCacheEliminatePrepareForSetPageViewAtIndex:(long long)arg1;
- (_Bool)removeCachePageViewControllerAtIndex:(long long)arg1;
- (_Bool)setCachePageViewController:(id)arg1 AtIndex:(long long)arg2;
- (id)cachePageViewControllerAtIndex:(long long)arg1;
- (void)setCurPageIndex:(long long)arg1 synchronMenu:(_Bool)arg2;
- (void)prepareSwitchPageWithForce:(_Bool)arg1 operation:(CDUnknownBlockType)arg2;
- (void)prepareSwitchPage:(CDUnknownBlockType)arg1;
- (void)commitSwitchPage;
- (void)startSwitchPage;
- (void)prepareUpdateMenuWithForce:(_Bool)arg1 operation:(CDUnknownBlockType)arg2;
- (void)prepareUpdateMenu:(CDUnknownBlockType)arg1;
- (void)commitUpdateMenu;
- (void)startUpdateMenu;
- (void)setMenuSlideGradientImage:(id)arg1 height:(double)arg2;
- (void)setMenuSlideGridentColor:(id)arg1 height:(double)arg2;
- (void)setMenuBackgroundColor:(id)arg1;
- (void)resetContentPageViewFrameToNormal;
- (void)setContentPageViewOffset:(struct CGPoint)arg1;
- (_Bool)didAddPageIndex:(long long)arg1;
- (_Bool)addPageIndex:(long long)arg1;
- (_Bool)didRemovePageIndex:(long long)arg1;
- (_Bool)removePageWithPageKey:(id)arg1;
- (_Bool)removePageIndex:(long long)arg1;
- (CDUnknownBlockType)animationOfJumpPageIndex:(long long)arg1 pageViewController:(id)arg2;
- (void)didChangePageIndex:(unsigned long long)arg1 pageViewController:(id)arg2;
- (void)willJumpPageIndex:(long long)arg1 pageViewController:(id)arg2;
- (void)jumpPageIndex:(long long)arg1;
- (void)setSelectedMenuIndex:(unsigned long long)arg1 notify:(_Bool)arg2;
- (_Bool)reloadMenu;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)scrollToTop;
- (_Bool)responseDragbackAtScreenPoint:(struct CGPoint)arg1;
- (void)recordDateLastLoaded:(_Bool)arg1;
- (id)pageScrollReportParams;
- (id)pageScrollReportKey;
- (_Bool)isMenuPagesOutDated;
- (struct CGRect)frameOfPageViewMenu;
- (unsigned long long)topBarStyle;
- (id)menuPageUniqueKeyWithIndex:(long long)arg1;
- (long long)menuPageIndexWithPageUniqueKey:(id)arg1;
- (id)menuPageViewControllerWithIndex:(long long)arg1;
- (id)menuPageChannelItemWithIndex:(long long)arg1;
- (unsigned long long)numberOfMenuPage;
- (id)menuPageChannelKeyWithIndex:(long long)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithMenuClass:(Class)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

