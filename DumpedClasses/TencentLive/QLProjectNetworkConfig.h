//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLProjectConfigObserver.h"

#import "NetworkCheckerDelegate.h"
#import "P_QNBNetworkConfig.h"

@class NSString;

@interface QLProjectNetworkConfig : QLProjectConfigObserver <NetworkCheckerDelegate, P_QNBNetworkConfig>
{
    unsigned long long _preNetworkSate;
}

@property(nonatomic) unsigned long long preNetworkSate; // @synthesize preNetworkSate=_preNetworkSate;
- (double)speed;
- (unsigned long long)networkState;
- (void)networkStateChange:(unsigned long long)arg1 preNetworkState:(unsigned long long)arg2;
- (void)networkCheckerUpdateFinish;
- (void)reachabilityChanged;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

