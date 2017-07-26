//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TADGLPlayerDelegate.h"

@class NSArray, NSDictionary, NSString, TADPlotAdReport;

@interface TADPlotAdManager : NSObject <TADGLPlayerDelegate>
{
    CDUnknownBlockType _showAdBlock;
    CDUnknownBlockType _showLandingViewBlock;
    _Bool _isDragged;
    _Bool _isClearShow;
    NSDictionary *_videoInfo;
    NSArray *_mediaItems;
    NSArray *_fastIndex;
    TADPlotAdReport *_reporter;
    struct CGRect _preRect;
}

+ (id)sharedManager;
@property(nonatomic) _Bool isClearShow; // @synthesize isClearShow=_isClearShow;
@property(nonatomic) _Bool isDragged; // @synthesize isDragged=_isDragged;
@property(nonatomic) struct CGRect preRect; // @synthesize preRect=_preRect;
@property(retain, nonatomic) TADPlotAdReport *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) NSArray *fastIndex; // @synthesize fastIndex=_fastIndex;
@property(retain, nonatomic) NSArray *mediaItems; // @synthesize mediaItems=_mediaItems;
@property(retain, nonatomic) NSDictionary *videoInfo; // @synthesize videoInfo=_videoInfo;
- (void).cxx_destruct;
- (void)cacheVideo:(id)arg1 expired:(unsigned long long)arg2;
- (void)loadJsonInfo:(id)arg1 videoInfo:(id)arg2 requestId:(id)arg3;
- (void)glPlayerDidStop:(id)arg1;
- (void)glPlayerWillStop:(id)arg1;
- (void)glPlayerFailed:(id)arg1 error:(id)arg2;
- (void)glPlayer:(id)arg1 playAtTime:(double)arg2;
- (void)glPlayerDidPlay:(id)arg1;
- (void)glPlayerWillPlay:(id)arg1;
- (id)getPlotAdItem:(long long)arg1;
- (void)viewWillLayoutGlPlayer:(id)arg1 holderRect:(struct CGRect)arg2 mediaItem:(id)arg3;
- (id)createGlPlayer:(id)arg1 holderRect:(struct CGRect)arg2;
- (void)cleanAllViewAndIndex;
- (void)tapControlView:(id)arg1;
- (void)memoryWarning;
- (void)restoreAd;
- (void)removeAd;
- (void)resumeAd;
- (void)pauseAd;
- (void)updateMovieTime:(double)arg1;
- (void)updateDragged;
- (void)updateRect:(struct CGRect)arg1;
- (void)setClickAdBlock:(CDUnknownBlockType)arg1;
- (void)setShowAdBlock:(CDUnknownBlockType)arg1;
- (void)loadAdWithJsonData:(id)arg1 videoInfo:(id)arg2 requestId:(id)arg3;
- (void)loadAdFailedWithInfo:(id)arg1;
- (void)finishPlotAd;
- (_Bool)hasPlotAd;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

