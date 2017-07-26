//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, QLMovieItem;

@protocol KKMediaHollywoodTabPlayerDelegate <NSObject>
- (_Bool)supportPreloadNextVideo;
- (_Bool)supportPlayAd;
- (_Bool)checkRouteChange;
- (_Bool)shouldSaveRecord;
- (void)reachabilityChangedForHollywoodPlayer;
- (void)forceCloseHollywoodPlayer;
- (void)reportWatchHollywoodPositiveWithFullPlayer:(_Bool)arg1 movieItem:(QLMovieItem *)arg2;
- (_Bool)shouldCallFirstResponce;
- (_Bool)shouldResetPlayTime;
- (_Bool)shouldShowListButton;
- (void)updatePositiveButtonWithNetChangeAvaiable:(_Bool)arg1;
- (void)backForeGroundBeginPlaying:(_Bool)arg1;
- (void)updateCurrentPlayToIndex:(unsigned long long)arg1;
- (NSArray *)allPosterItem;
- (id)currentPlayPosterItem;
@end

