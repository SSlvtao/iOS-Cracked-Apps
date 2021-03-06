//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "KGMusicControlViewControllerDelegate.h"
#import "KGMusicTableViewAdapterDataSource.h"
#import "KGMusicTableViewAdapterDelegate.h"
#import "KGNewSpecialOrAlbumCoverViewDelegate.h"
#import "KGShareViewControllerDelegate.h"
#import "UISearchBarDelegate.h"
#import "UserLoginViewControllerDelegate.h"

@class CollectListEntity, KGDefaultHoldTipsView, KGMusicControlViewController, KGMusicTableViewAdapter, KGNewSpecialOrAlbumCoverView, KGSearchNoResultView, KGThemeButton, KGThemeLabel, NSArray, NSMutableDictionary, NSString, UIImageView, UIView;

@interface MyFavorViewController : KGViewController <UserLoginViewControllerDelegate, KGShareViewControllerDelegate, KGMusicControlViewControllerDelegate, KGMusicTableViewAdapterDataSource, UISearchBarDelegate, KGMusicTableViewAdapterDelegate, KGNewSpecialOrAlbumCoverViewDelegate>
{
    KGMusicTableViewAdapter *_tableViewAdapter;
    double _insetHeight;
    double _coverInset;
    UIImageView *_separateLine;
    _Bool _isSynSuccess;
    KGDefaultHoldTipsView *_disAbleView;
    NSArray *_songs;
    _Bool _isOnOffLine;
    _Bool _hadChangeSort;
    _Bool _isFromFirstEnterShowLoading;
    _Bool _isAutoScroll;
    _Bool _isChangedFooterView;
    long long _searchKeyWordChangeCount;
    _Bool _inSearching;
    CollectListEntity *_listEntity;
    KGNewSpecialOrAlbumCoverView *_coverView;
    UIView *_footView;
    KGThemeLabel *_countLabel;
    KGThemeButton *_sortSongBtn;
    KGMusicControlViewController *_tableController;
    double _openBeginTime;
    UIView *_moreView;
    KGSearchNoResultView *_noSearchResultView;
    NSMutableDictionary *_dicMusic;
    NSArray *_searchResultArray;
}

@property(nonatomic) _Bool inSearching; // @synthesize inSearching=_inSearching;
@property(retain, nonatomic) NSArray *searchResultArray; // @synthesize searchResultArray=_searchResultArray;
@property(retain, nonatomic) NSMutableDictionary *dicMusic; // @synthesize dicMusic=_dicMusic;
@property(retain, nonatomic) KGSearchNoResultView *noSearchResultView; // @synthesize noSearchResultView=_noSearchResultView;
@property(retain, nonatomic) UIView *moreView; // @synthesize moreView=_moreView;
@property(nonatomic) double openBeginTime; // @synthesize openBeginTime=_openBeginTime;
@property(retain, nonatomic) KGMusicControlViewController *tableController; // @synthesize tableController=_tableController;
@property(retain, nonatomic) KGThemeButton *sortSongBtn; // @synthesize sortSongBtn=_sortSongBtn;
@property(retain, nonatomic) KGThemeLabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UIView *footView; // @synthesize footView=_footView;
@property(retain, nonatomic) KGNewSpecialOrAlbumCoverView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) CollectListEntity *listEntity; // @synthesize listEntity=_listEntity;
- (void).cxx_destruct;
- (id)bIModuleString;
- (void)setFunViewShotBack:(_Bool)arg1;
- (void)screenShotImage;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)KGUsingControllerState:(int)arg1;
- (void)showDetailView;
- (void)oneClickDownloadBtnClick:(id)arg1;
- (void)playMusicBtnClicked:(id)arg1;
- (void)coverView:(id)arg1 didClickedPlayBtn:(id)arg2;
- (void)coverView:(id)arg1 didClickedDownloadBtn:(id)arg2;
- (void)coverView:(id)arg1 didClickedShareBtn:(id)arg2;
- (void)coverView:(id)arg1 didClickedCoverImgBtn:(id)arg2;
- (void)shareComplete:(_Bool)arg1 AndErrorCode:(unsigned long long)arg2 AndErrorMsg:(id)arg3;
- (_Bool)clickShareViewController:(id)arg1 withItem:(id)arg2;
- (void)sendBIForShare:(long long)arg1;
- (void)notifyNetListupdateFinish:(id)arg1;
- (void)callShareController:(id)arg1;
- (id)loadImageWithUrl:(id)arg1;
- (void)shareBtnPressed:(id)arg1;
- (void)kgMusicControldidClickPlayModeAction;
- (void)kgMusicControldidEditAction;
- (void)didFinishMusicControlCancelAction;
- (void)sortDataWithOldOrNew:(unsigned long long)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 isCheckBoxStyle:(_Bool)arg3;
- (id)tableView:(id)arg1 menuArrayWidthForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)updataRowInfosDic:(id)arg1 needRefresh:(_Bool)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)getFilterLocalMusic:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollToShowCoverAnimated;
- (void)scrollToHideCoverAnimatedWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)searchButtonClicked;
- (void)resignSearchFirstResponder;
- (void)cancelSearch;
- (void)notifyUserLogin;
- (void)notifyUserLoginOut;
- (void)onMyFavorListContentChanged;
- (void)loginSuccess;
- (_Bool)isShowShareBtn;
- (void)deleteSongsArr:(id)arg1;
- (void)deleteSignSong:(id)arg1;
- (void)notifyAddSuccessed:(id)arg1;
- (id)getAllSongInfos;
- (void)deleteSongs:(id)arg1;
- (void)deleSong:(id)arg1;
- (void)showDisableView;
- (void)refreshTableFooterView;
- (void)refreshData;
- (void)loginBtnPressed:(id)arg1;
- (float)viewOffsetToTop;
- (void)reView;
- (void)fitViewWithLoginState;
- (void)fitDisAbleViewWithSongCount;
- (void)sortTheCollectList:(id)arg1;
- (void)refreshShareBtn;
- (void)refreshSplitLineHandler;
- (void)reFreshSortView;
- (void)refreshTopRightView;
- (void)initView;
- (void)initListEntity;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)onChangeTheme:(id)arg1;
- (void)registerNotifications;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

