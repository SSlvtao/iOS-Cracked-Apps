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
#import "QLShareDataSource.h"

@class MKHorizMenu, NSArray, NSData, NSDictionary, NSMutableDictionary, NSString, QLJCEMiniProgramInfo, QLMovieItem, QLPageNavigator, QLPropertyActPopMgr, QLRankPopularModel, UIButton, UIImage, UIView, UIViewController;

@interface QLRankPopularViewCtl : QLBaseViewController <MKHorizMenuDataSource, MKHorizMenuDelegate, QLPageNavigatorDatasource, QLPageNavigatorDelegate, QLJumpObjectOpenUrlDelegate, QLShareDataSource>
{
    MKHorizMenu *_horizMenu;
    long long _lastPageIndex;
    UIView *_bgHeaderView;
    QLPageNavigator *_pageNavi;
    NSMutableDictionary *_dicCtls;
    QLRankPopularModel *_dataModel;
    UIButton *_btnShare;
    QLPropertyActPopMgr *_actPopMgr;
    NSString *_type;
    NSString *_dataKey;
    NSString *_tabId;
}

+ (_Bool)OpenJumpUrlWithobject;
+ (id)viewControllerForZTID:(id)arg1;
@property(copy, nonatomic) NSString *tabId; // @synthesize tabId=_tabId;
@property(copy, nonatomic) NSString *dataKey; // @synthesize dataKey=_dataKey;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)responseDragbackAtScreenPoint:(struct CGPoint)arg1;
- (void)scrollToTop;
- (id)getCurrentViewCtl;
- (id)getCurrentModuleInfo;
- (void)scrollViewDidScroll:(id)arg1;
- (void)horizMenu:(id)arg1 itemDoubleClickAtIndex:(unsigned long long)arg2;
- (void)preLoadBesidesPages;
- (void)horizMenu:(id)arg1 itemSelectedAtIndex:(unsigned long long)arg2;
- (id)horizMenu:(id)arg1 subTtitleForItemAtIndex:(unsigned long long)arg2;
- (id)horizMenu:(id)arg1 titleForItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsForMenu:(id)arg1;
- (id)backgroundColorForMenu:(id)arg1;
- (id)selectedItemImageForMenu:(id)arg1;
- (id)buttonFontForHorizMenu:(id)arg1;
- (unsigned long long)eachItemWidthForMenu:(id)arg1;
- (_Bool)shouldUseIndexToLoadModule;
- (void)requestModelDidFinishLoad:(id)arg1;
- (void)retryDown:(id)arg1;
- (void)leavePageWithIndex:(long long)arg1;
- (void)enterPageWithIndex:(long long)arg1;
- (id)getFilterOptionWithIndex:(long long)arg1;
- (void)pageNavigatorDidScroll:(id)arg1;
- (void)pageNavigator:(id)arg1 didNaviToIndex:(long long)arg2;
- (_Bool)pageNavigator:(id)arg1 pageExsistAtIndex:(long long)arg2;
- (id)pageNavigator:(id)arg1 viewCtlForIndex:(long long)arg2;
- (long long)numberOfPagesInNavigator:(id)arg1;
@property(readonly, nonatomic) NSArray *sharePictureList;
@property(readonly, nonatomic) NSString *shareContentTail;
@property(readonly, nonatomic) NSString *shareSingleTitle;
@property(readonly, nonatomic) NSString *shareContent;
@property(readonly, nonatomic) unsigned long long shareStyle;
- (unsigned long long)actionShouldSupportActionTypeMask:(id)arg1;
@property(readonly, nonatomic) unsigned long long sharePlatformMask;
@property(readonly, nonatomic) QLMovieItem *shareVideoInfo;
@property(readonly, nonatomic) NSString *shareFromPage;
@property(readonly, nonatomic) unsigned long long shareDataType;
@property(readonly, nonatomic) NSString *shareURL;
@property(readonly, nonatomic) UIImage *shareImage;
@property(readonly, nonatomic) NSString *shareImageURL;
@property(readonly, nonatomic) NSString *shareSubTitle;
@property(readonly, nonatomic) NSString *shareTitle;
@property(readonly, nonatomic) NSString *shareID;
- (id)getCurrentPageCtl;
- (_Bool)isCurrentCtlContainSubPageCtl;
- (id)getShareItem;
- (void)clickShareButton:(id)arg1;
- (void)releaseUnusedCtls;
- (void)didReceiveMemoryWarning;
- (void)showNavBottomShadow:(_Bool)arg1;
- (_Bool)isNeedShowShareButton;
- (void)flushShareButton;
- (void)flushPageHorizMenu;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool needShare;
@property(readonly, nonatomic) NSString *shareActionUrl;
@property(readonly, nonatomic) UIViewController *shareController;
@property(readonly, nonatomic) NSString *shareCopyContent;
@property(readonly, nonatomic) NSDictionary *shareExtendInfo;
@property(readonly, nonatomic) NSData *shareGifData;
@property(readonly, nonatomic) QLJCEMiniProgramInfo *shareMiniProgramInfo;
@property(readonly, nonatomic) NSData *shareOriImgData;
@property(readonly, nonatomic) NSDictionary *shareReportInfo;
@property(readonly) Class superclass;

@end

