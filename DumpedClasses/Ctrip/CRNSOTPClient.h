//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTSender.h"

#import "RCTBridgeModule.h"

@class NSObject<OS_dispatch_queue>, NSString, RCTBridge;

@interface CRNSOTPClient : CTSender <RCTBridgeModule>
{
}

+ (id)sendCRNSOTPWithReqArray:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
+ (id)__rct_export__send360;
+ (void)load;
+ (id)moduleName;
- (void)request:(id)arg1 resolve:(CDUnknownBlockType)arg2 reject:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

