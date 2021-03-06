//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FXViewController.h"

#import "FXMobileLiveLabelsViewDelegate.h"
#import "KGPageViewProtocol.h"
#import "UIScrollViewDelegate.h"

@class FXMobileHomeClassifyVM, FXMobileLiveListTopMenuView, FXMobileLiveListVC, KGThemeButton, NSMutableDictionary, NSString, UIScrollView, UIView;

@interface FXMobileLiveHomeListVC : FXViewController <UIScrollViewDelegate, FXMobileLiveLabelsViewDelegate, KGPageViewProtocol>
{
    _Bool _showMenuView;
    _Bool _startDragging;
    _Bool _buttonIsShow;
    _Bool _isPageCover;
    FXMobileHomeClassifyVM *_homeListVM;
    FXMobileLiveListTopMenuView *_titleMenuView;
    UIView *_menuView;
    KGThemeButton *_menuViewShowMenuButton;
    unsigned long long _selectIndex;
    UIScrollView *_scrollView;
    FXMobileLiveListVC *_listAllVc;
    NSMutableDictionary *_vcsDic;
    CDUnknownBlockType _updateTitleBlock;
    NSString *_cityName;
}

@property(nonatomic) _Bool isPageCover; // @synthesize isPageCover=_isPageCover;
@property(nonatomic) _Bool buttonIsShow; // @synthesize buttonIsShow=_buttonIsShow;
@property(retain, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(copy, nonatomic) CDUnknownBlockType updateTitleBlock; // @synthesize updateTitleBlock=_updateTitleBlock;
@property(nonatomic) _Bool startDragging; // @synthesize startDragging=_startDragging;
@property(retain, nonatomic) NSMutableDictionary *vcsDic; // @synthesize vcsDic=_vcsDic;
@property(retain, nonatomic) FXMobileLiveListVC *listAllVc; // @synthesize listAllVc=_listAllVc;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) _Bool showMenuView; // @synthesize showMenuView=_showMenuView;
@property(nonatomic) unsigned long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(retain, nonatomic) KGThemeButton *menuViewShowMenuButton; // @synthesize menuViewShowMenuButton=_menuViewShowMenuButton;
@property(retain, nonatomic) UIView *menuView; // @synthesize menuView=_menuView;
@property(retain, nonatomic) FXMobileLiveListTopMenuView *titleMenuView; // @synthesize titleMenuView=_titleMenuView;
@property(retain, nonatomic) FXMobileHomeClassifyVM *homeListVM; // @synthesize homeListVM=_homeListVM;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateProvinceTitleWithCity:(id)arg1;
- (void)updateTitle;
- (void)didChangeCity:(id)arg1;
- (void)didReceiveMemoryWarning;
- (id)pageSrollview;
- (long long)currentPage;
- (long long)totalPageCount;
- (void)hotClassifyGetSuccess;
- (id)getCityName;
- (void)didSelectOtherLabelsItem:(id)arg1;
- (void)onRemoveFromSuperview;
- (void)labelsView:(id)arg1 classify:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)showMenuButtonClick:(id)arg1;
- (void)listViewRequestData:(long long)arg1;
- (id)getExistListVC:(id)arg1 classifyName:(id)arg2;
- (void)changeSubViewLayout;
- (void)KGUsingControllerState:(int)arg1;
- (void)downloadFxApp;
- (void)openLiveClick:(id)arg1;
- (void)updateRightItemStatusView;
- (void)checkIsMobileLiveStar;
- (void)initView;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

