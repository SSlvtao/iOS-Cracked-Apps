//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KKMediaPlayerPayVideoPlayAuthDelegate.h"
#import "KKMediaPlayerTryWatchDelegate.h"

@class KKMediaRootViewController, NSString, QLMovieItem, QLSprayContext;

@interface QLHollywoodSprayVideoModel : NSObject <KKMediaPlayerTryWatchDelegate, KKMediaPlayerPayVideoPlayAuthDelegate>
{
    _Bool _hasRefreshPayStatus;
    _Bool _isSprayVideoAppear;
    QLMovieItem *_movieItem;
    KKMediaRootViewController *_rootPlayer;
    QLSprayContext *_sprayContext;
    double _currentPlayTime;
}

+ (id)movieItemFromSprayItem:(id)arg1;
+ (void)sprayVideoItem:(id)arg1;
@property(nonatomic) double currentPlayTime; // @synthesize currentPlayTime=_currentPlayTime;
@property(nonatomic) __weak QLSprayContext *sprayContext; // @synthesize sprayContext=_sprayContext;
@property(nonatomic) _Bool isSprayVideoAppear; // @synthesize isSprayVideoAppear=_isSprayVideoAppear;
@property(nonatomic) _Bool hasRefreshPayStatus; // @synthesize hasRefreshPayStatus=_hasRefreshPayStatus;
@property(nonatomic) __weak KKMediaRootViewController *rootPlayer; // @synthesize rootPlayer=_rootPlayer;
@property(retain, nonatomic) QLMovieItem *movieItem; // @synthesize movieItem=_movieItem;
- (void).cxx_destruct;
- (id)titleOfVipActivity;
- (id)titleForPlayerRightTopBecomeVIPBtn;
- (_Bool)didLiveEnded;
- (void)payStatusChangeRefreshDetail;
- (void)updateHotSpotModeSprayInfoWithIndex:(long long)arg1;
- (_Bool)isPreWatchVideo;
- (id)currentVideoMainTitle;
- (id)getMovieItem;
- (void)detailPageNavibarDidClickVIPBtn:(id)arg1;
- (_Bool)shouldAutoPlayVideo;
- (id)headerView;
- (id)myNaviBar;
- (double)prewatchDurationForVideo;
- (void)refreshCurrentBill;
- (_Bool)payCanbePlayed;
- (id)getCurrentVideoIDFromMovieItem:(id)arg1;
- (_Bool)playerCanbePlayed;
- (void)payStatusRefreshFinish;
- (void)loginStateChange:(id)arg1;
- (void)vipStateChanged:(id)arg1;
- (void)savePlayTime;
- (void)handerPlayerAfterPlayActionFromSprayItem:(id)arg1;
- (id)getMovieItemFromSprayItem:(id)arg1;
- (void)tryPlay;
- (void)sprayVideoDisAppear;
- (void)sprayVideoAppear;
- (void)iAPDetailViewControllerClosed;
- (void)dealloc;
- (id)init;
- (id)initWithSprayContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

