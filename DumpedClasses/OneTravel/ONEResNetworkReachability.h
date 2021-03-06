//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ONEResNetworkReachability : NSObject
{
    id _reachability;
    long long _networkReachabilityStatus;
    CDUnknownBlockType _networkReachabilityStatusBlock;
}

+ (id)sharedManager;
@property(copy, nonatomic) CDUnknownBlockType networkReachabilityStatusBlock; // @synthesize networkReachabilityStatusBlock=_networkReachabilityStatusBlock;
@property(nonatomic) long long networkReachabilityStatus; // @synthesize networkReachabilityStatus=_networkReachabilityStatus;
@property(retain, nonatomic) id reachability; // @synthesize reachability=_reachability;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopMonitoring;
- (void)startMonitoring;
@property(readonly, nonatomic) long long reachabilityStatus;
@property(readonly, nonatomic, getter=isReachableViaWiFi) _Bool reachableViaWiFi;
@property(readonly, nonatomic, getter=isReachableViaWWAN) _Bool reachableViaWWAN;
@property(readonly, nonatomic, getter=isReachable) _Bool reachable;
- (id)initWithReachability:(struct __SCNetworkReachability *)arg1;

@end

