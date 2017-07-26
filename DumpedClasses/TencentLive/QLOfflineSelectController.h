//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseCollectionViewController.h"

#import "KKMediaPlayerTopViewControlProtocolEx.h"
#import "P_QLDragToRefresh.h"
#import "QLDownloadClaritySelectActionMenuDelegate.h"
#import "QLJumpObjectOpenUrlDelegate.h"
#import "QLMovieDownloadDelegate.h"
#import "QLSelectedGestureRecognizerDelegate.h"
#import "QLTouchIndicatorViewDataSource.h"
#import "QLTouchIndicatorViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSIndexPath, NSMutableArray, NSMutableDictionary, NSString, QLDownloadClaritySelectActionMenu, QLDownloadClaritySelectBtn, QLDownloadConfirmButton, QLMultiSelectConfirmDownloadView, QLOfflineCacheListModel, QLSelectedGestureRecognizer, QLTouchIndicatorView, UIButton;

@interface QLOfflineSelectController : QLBaseCollectionViewController <QLSelectedGestureRecognizerDelegate, UICollectionViewDelegateFlowLayout, QLDownloadClaritySelectActionMenuDelegate, QLMovieDownloadDelegate, QLTouchIndicatorViewDelegate, QLTouchIndicatorViewDataSource, QLJumpObjectOpenUrlDelegate, P_QLDragToRefresh, KKMediaPlayerTopViewControlProtocolEx>
{
    NSIndexPath *_checkingIndexPath;
    _Bool _forceReload;
    _Bool _isFromH5;
    _Bool _ignoreFreeSpaceNotice;
    _Bool _hadAddDownloadTask;
    _Bool _hasUseMultiSelectedGesture;
    _Bool _multiSelectMode;
    NSString *_lid;
    NSString *_cid;
    NSString *_vid;
    NSString *_cacheDataKey;
    long long _videoType;
    id <QLOfflineSelectControllerDataSource> _offlineDataSource;
    QLOfflineCacheListModel *_listModel;
    QLDownloadConfirmButton *_confirmButton;
    QLDownloadClaritySelectBtn *_claritySelectButton;
    UIButton *_multiSelectButton;
    QLSelectedGestureRecognizer *_selectedGesture;
    QLMultiSelectConfirmDownloadView *_multiSelectConfirmView;
    NSMutableArray *_multiSelectedIndexPaths;
    QLTouchIndicatorView *_indicatorView;
    NSMutableDictionary *_cacheCheckVips;
    QLDownloadClaritySelectActionMenu *_actionMenu;
}

+ (_Bool)OpenJumpUrlWithobject;
@property(nonatomic) __weak QLDownloadClaritySelectActionMenu *actionMenu; // @synthesize actionMenu=_actionMenu;
@property(retain, nonatomic) NSMutableDictionary *cacheCheckVips; // @synthesize cacheCheckVips=_cacheCheckVips;
@property(retain, nonatomic) QLTouchIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) NSMutableArray *multiSelectedIndexPaths; // @synthesize multiSelectedIndexPaths=_multiSelectedIndexPaths;
@property(retain, nonatomic) QLMultiSelectConfirmDownloadView *multiSelectConfirmView; // @synthesize multiSelectConfirmView=_multiSelectConfirmView;
@property(nonatomic, getter=isMultiSelectMode) _Bool multiSelectMode; // @synthesize multiSelectMode=_multiSelectMode;
@property(nonatomic) _Bool hasUseMultiSelectedGesture; // @synthesize hasUseMultiSelectedGesture=_hasUseMultiSelectedGesture;
@property(nonatomic) _Bool hadAddDownloadTask; // @synthesize hadAddDownloadTask=_hadAddDownloadTask;
@property(retain, nonatomic) QLSelectedGestureRecognizer *selectedGesture; // @synthesize selectedGesture=_selectedGesture;
@property(retain, nonatomic) UIButton *multiSelectButton; // @synthesize multiSelectButton=_multiSelectButton;
@property(retain, nonatomic) QLDownloadClaritySelectBtn *claritySelectButton; // @synthesize claritySelectButton=_claritySelectButton;
@property(retain, nonatomic) QLDownloadConfirmButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) QLOfflineCacheListModel *listModel; // @synthesize listModel=_listModel;
@property(nonatomic) __weak id <QLOfflineSelectControllerDataSource> offlineDataSource; // @synthesize offlineDataSource=_offlineDataSource;
@property(nonatomic) _Bool ignoreFreeSpaceNotice; // @synthesize ignoreFreeSpaceNotice=_ignoreFreeSpaceNotice;
@property(nonatomic) _Bool isFromH5; // @synthesize isFromH5=_isFromH5;
@property(nonatomic) long long videoType; // @synthesize videoType=_videoType;
@property(copy, nonatomic) NSString *cacheDataKey; // @synthesize cacheDataKey=_cacheDataKey;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(copy, nonatomic) NSString *lid; // @synthesize lid=_lid;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *currentVid;
- (id)currentViewForTouchIndicator;
- (_Bool)needToShowTipsInTouchIndicator:(id)arg1;
- (id)tipsTextForTouchIndicator:(id)arg1 atPoint:(struct CGPoint)arg2;
- (_Bool)shouldShowIndicatorView:(id)arg1;
- (void)adjustIndicatorViewFrameWhenScrolling;
- (_Bool)hasFootterDragRefresh;
- (_Bool)hasHeaderDragRefresh;
- (void)dragReload:(_Bool)arg1;
- (id)dragRefreshView;
- (_Bool)responseDragbackAtScreenPoint:(struct CGPoint)arg1;
- (void)downloadActionMenu:(id)arg1 didSelectAtIndex:(long long)arg2;
- (void)showPreCacheTips;
- (_Bool)showPreCacheTipsIfNeeded:(_Bool)arg1;
- (void)didClickPreCacheTipBtn:(id)arg1;
- (void)reportConfirmAction;
- (void)clickMultiSelectConfirmDownloadView;
- (void)didClickMultiSelectButton:(id)arg1;
- (void)didClickClaritySelectBtn:(id)arg1;
- (void)confirmDownload:(id)arg1;
- (void)showNavBottomShadowIfNeeded;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)shouldStopPlay;
- (void)reportItemApplyDownload:(id)arg1;
- (void)_refreshCollectionView;
- (void)_refreshMultipleviews;
- (void)_refreshClarityButton;
- (void)_refreshConfirmButton;
- (void)refreshSubviews;
- (void)startRequest:(int)arg1 more:(_Bool)arg2 showLoading:(_Bool)arg3 forceReload:(_Bool)arg4;
- (void)showAnimationForItemAtIndexPath:(id)arg1;
- (void)showofflineLimitTimeToastIfNeeded:(id)arg1;
- (void)refreshStateBeforeStartDownload:(id)arg1;
- (void)startDownloadAtIndexPath:(id)arg1;
- (_Bool)checkDiskSpaceForAddingSpace:(unsigned long long)arg1;
- (void)applyItemAtIndexPathToDownload:(id)arg1;
- (void)updateDownloadState:(id)arg1;
- (void)loginStateChange;
- (void)retryDown:(id)arg1;
- (id)pageDescription;
- (void)leavePage;
- (void)enterPage;
- (_Bool)shouldIgnorePageForNaviReport;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithVid:(id)arg1 cid:(id)arg2 lid:(id)arg3;
- (void)switchSelectMode:(_Bool)arg1;
- (void)showMultiSelectGestureGuideView;
- (void)selectItemAtIndexPath:(id)arg1;
- (void)updateMultiSelectedConfirmDownloadView;
- (_Bool)shouldNotSelectItemAtIndex:(id)arg1;
- (_Bool)whetherShouldDeselectedWhenGestureEndAtIndexPath:(id)arg1;
- (void)gestureRecognizer:(id)arg1 didEndWithCurrentSelectedIndexPaths:(id)arg2 shouldDeselectedIndexPaths:(id)arg3 currentDeselectedIndexPaths:(id)arg4;
- (_Bool)gestureRecognizer:(id)arg1 whetherShouldDeselectedWhenGestureEndAtIndexPath:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldNotSelectItemAtIndexPath:(id)arg2;
- (id)gestureRecognizer:(id)arg1 itemAtIndexPath:(id)arg2;
- (id)gestureRecognizer:(id)arg1 indexPathForItem:(id)arg2;
- (void)gestureRecognizer:(id)arg1 didEndWithSelectedIndexPaths:(id)arg2;
- (void)gestureRecognizer:(id)arg1 didMultiSelectionTrigger:(_Bool)arg2;
- (long long)gestureRecognizer:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

