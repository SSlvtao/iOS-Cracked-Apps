//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QLReachability : NSObject
{
    _Bool _alwaysReturnLocalWiFiStatus;
    struct __SCNetworkReachability *_reachabilityRef;
}

+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithAddress:(const struct sockaddr *)arg1;
+ (id)reachabilityWithHostName:(id)arg1;
- (_Bool)isReachable;
- (unsigned long long)currentReachabilityStatus;
- (_Bool)connectionRequired;
- (unsigned long long)networkStatusForFlags:(unsigned int)arg1;
- (unsigned long long)localWiFiStatusForFlags:(unsigned int)arg1;
- (void)dealloc;
- (void)stopNotifier;
- (_Bool)startNotifier;
- (_Bool)isReachableViaWWAN;
- (_Bool)isReachableViaWiFi;

@end

