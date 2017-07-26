//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface QLPullRefreshStatusCheckModel : NSObject
{
    NSArray *_pullRefreshData;
    double _serverTime;
    CDUnknownBlockType _setCurrentPullRefreshConfig;
}

@property(copy, nonatomic) CDUnknownBlockType setCurrentPullRefreshConfig; // @synthesize setCurrentPullRefreshConfig=_setCurrentPullRefreshConfig;
@property(nonatomic) double serverTime; // @synthesize serverTime=_serverTime;
@property(copy, nonatomic) NSArray *pullRefreshData; // @synthesize pullRefreshData=_pullRefreshData;
- (void).cxx_destruct;
- (void)cancelOldPullRefreshStatusCheck;
- (void)timeUpWithPullRefreshConfig:(id)arg1;
- (void)startRunTimerToUpdataPullRefreshStatus;
- (void)startRunTimerToUpdataPullRefreshStatusBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithPullRefreshData:(id)arg1 serverTime:(double)arg2;

@end

