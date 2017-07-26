//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QLDownloadPanelDefaultDelegate.h"
#import "QLDownloadPanelTVEpisodeDelegate.h"
#import "QLDownloadPanelVarietyDelegate.h"
#import "QLMovieDownloadDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class HVMPRightSectionHeaderView, KKMediaRootViewController, KKVideoInfo, NSArray, NSDate, NSMutableArray, NSString, NSTimer, PanelTableView, QLASIHTTPRequest, QLActivityLabel, QLDownloadPanelController, QLDownloadPanelInfoButton, QLFooterDragRefreshView, QLHeaderDragRefreshView, QLMainMovieControlView, QLMovieItem, UITableViewCell;

@interface QLDownloadPanelView : UIView <QLMovieDownloadDelegate, UITableViewDataSource, UITableViewDelegate, QLDownloadPanelTVEpisodeDelegate, QLDownloadPanelDefaultDelegate, QLDownloadPanelVarietyDelegate>
{
    long long lastSelectedVideoIndex;
    _Bool loaded;
    _Bool hideHeaderView;
    _Bool isLastRequestFinished;
    NSMutableArray *episodeInfoList;
    NSMutableArray *episodeTitles;
    NSMutableArray *episodeIndicesTitles;
    NSMutableArray *episodeFlags;
    NSMutableArray *trailerTitles;
    NSMutableArray *trailerIndices;
    long long lastSelectedEpisodeIndex;
    NSMutableArray *aryRelatedMovieItems;
    NSMutableArray *varietyMovieItems;
    long long curRelyYearIndex;
    long long curRelyMonthIndex;
    long long topRelyYearIndex;
    long long topRelyMonthIndex;
    long long bottomRelyYearIndex;
    long long bottomRelyMonthIndex;
    long long curVarietyCoverCellRow;
    long long curVarietyEpisodeCellRow;
    long long loadedRelyMonthCount;
    _Bool hasLoadedVarietyEpisodes;
    NSArray *varietyRelys;
    NSDate *programRequestTime;
    NSMutableArray *programList;
    long long currentLiveDayOffset;
    NSMutableArray *defaultMovieItems;
    QLASIHTTPRequest *dataRequest;
    QLASIHTTPRequest *relateRequest;
    HVMPRightSectionHeaderView *headerView;
    QLActivityLabel *loadingView;
    QLFooterDragRefreshView *_footerView;
    QLHeaderDragRefreshView *_headerView;
    UIView *_backgroundView;
    _Bool _isLoadNextVarietyLastTime;
    NSMutableArray *makeshiftForLive;
    struct CGPoint lastPoint;
    struct CGPoint firstPoint;
    double yOffset;
    _Bool needResume;
    NSMutableArray *_movieItemsToDownload;
    NSMutableArray *_movieItemsDownloaded;
    NSMutableArray *_selectedInfoButtons;
    _Bool needShow;
    _Bool isShowingErrorView;
    unsigned long long totalTaskSize;
    _Bool _simpleLoadingStyle;
    _Bool _resetWithDetailInfo;
    _Bool _ignoreFreeSpaceNotice;
    _Bool _hasShowofflineLimitTimeToast;
    _Bool _networkAvailable;
    _Bool _shortRelateRequested;
    int _listStyle;
    PanelTableView *_tableView;
    KKMediaRootViewController *_mediaRootViewController;
    QLMainMovieControlView *_movieMask;
    QLDownloadPanelController *_panelCtl;
    NSMutableArray *_playBackAry;
    UIView *_errorView;
    KKVideoInfo *_videoInfo;
    NSTimer *_loadVarietyRelyTimer;
    QLDownloadPanelInfoButton *_currentInfoButton;
    QLMovieItem *_currentItem;
    UITableViewCell *_currentCell;
}

@property _Bool shortRelateRequested; // @synthesize shortRelateRequested=_shortRelateRequested;
@property _Bool networkAvailable; // @synthesize networkAvailable=_networkAvailable;
@property(nonatomic) _Bool hasShowofflineLimitTimeToast; // @synthesize hasShowofflineLimitTimeToast=_hasShowofflineLimitTimeToast;
@property(nonatomic) _Bool ignoreFreeSpaceNotice; // @synthesize ignoreFreeSpaceNotice=_ignoreFreeSpaceNotice;
@property _Bool resetWithDetailInfo; // @synthesize resetWithDetailInfo=_resetWithDetailInfo;
@property(retain, nonatomic) UITableViewCell *currentCell; // @synthesize currentCell=_currentCell;
@property(retain, nonatomic) QLMovieItem *currentItem; // @synthesize currentItem=_currentItem;
@property(retain, nonatomic) QLDownloadPanelInfoButton *currentInfoButton; // @synthesize currentInfoButton=_currentInfoButton;
@property(retain, nonatomic) NSMutableArray *selectedInfoButtons; // @synthesize selectedInfoButtons=_selectedInfoButtons;
@property(retain, nonatomic) NSMutableArray *movieItemsDownloaded; // @synthesize movieItemsDownloaded=_movieItemsDownloaded;
@property(retain, nonatomic) NSMutableArray *movieItemsToDownload; // @synthesize movieItemsToDownload=_movieItemsToDownload;
@property(retain, nonatomic) NSTimer *loadVarietyRelyTimer; // @synthesize loadVarietyRelyTimer=_loadVarietyRelyTimer;
@property(retain, nonatomic) KKVideoInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(retain, nonatomic) UIView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) NSMutableArray *playBackAry; // @synthesize playBackAry=_playBackAry;
@property(nonatomic) _Bool simpleLoadingStyle; // @synthesize simpleLoadingStyle=_simpleLoadingStyle;
@property(nonatomic) int listStyle; // @synthesize listStyle=_listStyle;
@property(nonatomic) __weak QLDownloadPanelController *panelCtl; // @synthesize panelCtl=_panelCtl;
@property(nonatomic) __weak QLMainMovieControlView *movieMask; // @synthesize movieMask=_movieMask;
@property(nonatomic) __weak KKMediaRootViewController *mediaRootViewController; // @synthesize mediaRootViewController=_mediaRootViewController;
@property(retain, nonatomic) PanelTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)clickStatusBar:(id)arg1;
- (struct CGRect)getDismissRect;
- (void)showofflineLimitTimeToast:(long long)arg1;
- (void)applyDownload;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)configureFooterDragRefreshView;
- (_Bool)hasLoadedLastPage;
- (_Bool)hasLoadedFirstPage;
- (long long)currentPlayerViewStyle;
- (long long)viewStyleOfCurrentPlayerView;
- (void)removeErrorView;
- (void)dismissView:(id)arg1;
- (_Bool)isShowing;
- (void)disMiss;
- (void)downloadWithInfoButton:(id)arg1;
- (void)updateDownloadState:(id)arg1;
- (void)episodeButtonSelected:(id)arg1;
- (long long)styleOfCurrentPlayerView;
- (unsigned long long)countForTableViewCell;
- (long long)movieItemIndexOfMovieItemsToDownload:(id)arg1;
- (void)updateMovieItemsToDownload;
- (_Bool)shouldDisableForMovieItem:(id)arg1;
- (_Bool)shouldSelectForMovieItem:(id)arg1;
- (_Bool)check3gDownloadAndPromptWithState2:(int)arg1;
- (_Bool)check3gDownloadAndPromptWithState:(int)arg1;
- (void)setIgnoreFreeSpaceNotice;
- (_Bool)checkDiskSpaceForDownloadForSpace:(unsigned long long)arg1;
- (_Bool)checkDiskSpaceForDownload;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)removeFootView;
- (void)showErrorView;
- (void)preShow;
- (void)refreshList;
- (void)loadList;
- (void)showLoading:(_Bool)arg1;
- (void)configTableView;
- (void)resetTableviewContentOffset;
- (void)layoutSubviews;
- (void)dealloc;
- (void)swipScrollTableView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

