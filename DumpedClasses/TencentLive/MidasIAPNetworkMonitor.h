//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MidasIAPNetworkMonitor : NSObject
{
    NSString *key_;
    struct __SCNetworkReachability *reachabilityRef;
}

+ (id)reachabilityWithHostName:(id)arg1;
+ (_Bool)accessInstanceVariablesDirectly;
@property(copy) NSString *key; // @synthesize key=key_;
- (_Bool)connectionRequired;
- (_Bool)isConnectionRequired;
- (_Bool)isReachable;
- (unsigned int)currentReachabilityStatus;
- (unsigned int)networkStatusForFlags:(unsigned int)arg1;
- (unsigned int)localWiFiStatusForFlags:(unsigned int)arg1;
- (unsigned int)reachabilityFlags;
- (_Bool)isReachableViaWiFi;
- (_Bool)isReachableViaWWAN;
- (_Bool)isInterventionRequired;
- (_Bool)isConnectionOnDemand;
- (_Bool)isEqual:(id)arg1;
- (void)stopNotifier;
- (_Bool)startNotifier;
- (id)initWithReachabilityRef:(struct __SCNetworkReachability *)arg1;
- (void)dealloc;

@end

