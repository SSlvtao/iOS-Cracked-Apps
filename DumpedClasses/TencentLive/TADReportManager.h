//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TADAdViewabilityDelegate.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, RNTimer;

@interface TADReportManager : NSObject <TADAdViewabilityDelegate>
{
    _Bool _channelDidEntered;
    _Bool _isOnScreen;
    float _impDuration;
    float _impRatio;
    NSString *_channel;
    NSString *_childChannel;
    id <TADReportManagerDelegate> _delegate;
    NSArray *_adList;
    NSMutableArray *_pvItemsArray;
    NSMutableArray *_iABItemsArray;
    NSMutableArray *_iABReportedItemsArray;
    NSMutableDictionary *_viewableEmptyItemsMap;
    RNTimer *_impTimer;
    long long _impCount;
}

+ (void)pingMindForItem:(id)arg1 withActionId:(long long)arg2;
+ (void)mmaSdkPingWithUrl:(id)arg1;
+ (void)pingWithUrl:(id)arg1;
+ (void)reportItem:(id)arg1 ended:(_Bool)arg2;
+ (void)pingForVideoPlayStatus:(unsigned long long)arg1 adItem:(id)arg2;
+ (void)pingForVideoPlayAction:(id)arg1;
+ (void)pingForUnlikeOps:(id)arg1;
+ (float)iabRatio;
+ (long long)iabInterval;
+ (long long)iabCount;
+ (void)reportClickItem:(id)arg1 actionType:(int)arg2;
@property(nonatomic) _Bool isOnScreen; // @synthesize isOnScreen=_isOnScreen;
@property(nonatomic) float impRatio; // @synthesize impRatio=_impRatio;
@property(nonatomic) long long impCount; // @synthesize impCount=_impCount;
@property(nonatomic) float impDuration; // @synthesize impDuration=_impDuration;
@property(retain) RNTimer *impTimer; // @synthesize impTimer=_impTimer;
@property(retain) NSMutableDictionary *viewableEmptyItemsMap; // @synthesize viewableEmptyItemsMap=_viewableEmptyItemsMap;
@property(retain) NSMutableArray *iABReportedItemsArray; // @synthesize iABReportedItemsArray=_iABReportedItemsArray;
@property(retain) NSMutableArray *iABItemsArray; // @synthesize iABItemsArray=_iABItemsArray;
@property(retain) NSMutableArray *pvItemsArray; // @synthesize pvItemsArray=_pvItemsArray;
@property(retain) NSArray *adList; // @synthesize adList=_adList;
@property(nonatomic) __weak id <TADReportManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *childChannel; // @synthesize childChannel=_childChannel;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(nonatomic) _Bool channelDidEntered; // @synthesize channelDidEntered=_channelDidEntered;
- (void).cxx_destruct;
- (void)pingForJCEInfo:(id)arg1;
- (id)p_findReportItemWithOid:(id)arg1 InArray:(id)arg2;
- (id)p_findReportItem:(id)arg1 InArray:(id)arg2;
- (id)viewableEmptyItemForKey:(id)arg1;
- (void)addViewableEmptyItem:(id)arg1 forKey:(id)arg2;
- (void)adViewDidDisappear;
- (void)adViewDidAppear;
- (void)p_stopTimerIfNeeded;
- (void)p_startTimerIfNeeded;
- (void)p_calculateiABItems;
- (void)reportiABItem:(id)arg1 actionType:(int)arg2;
- (id)p_findStreamAdByUoid:(id)arg1;
- (id)p_findStreamAd:(id)arg1;
- (void)p_removeAd:(id)arg1;
- (void)p_removeUnlikedAd:(id)arg1;
- (void)p_checkPvLimitWithInfo:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)reportPreloadItemsForType:(int)arg1;
- (void)reportClickItem:(id)arg1 actionType:(int)arg2;
- (void)reportPlaceHolderNotMatchWithAdItem:(id)arg1;
- (void)reportItem:(id)arg1 forTADActionType:(int)arg2;
- (void)reportItems:(id)arg1 forTADActionType:(int)arg2;
- (void)p_reportItem:(id)arg1 forTADActionType:(int)arg2;
- (void)dealloc;
- (void)reset;
- (id)initWithChannel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

