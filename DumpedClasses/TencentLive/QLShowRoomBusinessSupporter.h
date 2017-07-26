//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, QLLiveV3DetailModel;

@interface QLShowRoomBusinessSupporter : NSObject
{
    NSHashTable *_delegateList;
    long long _liveStatus;
    QLLiveV3DetailModel *_detailModel;
}

@property(retain, nonatomic) QLLiveV3DetailModel *detailModel; // @synthesize detailModel=_detailModel;
@property(nonatomic) long long liveStatus; // @synthesize liveStatus=_liveStatus;
@property(retain, nonatomic) NSHashTable *delegateList; // @synthesize delegateList=_delegateList;
- (void).cxx_destruct;
- (void)__roomInfoHasGetNotification:(id)arg1;
- (void)__storeRedDotPollDataKeyReceivedNotification:(id)arg1;
- (void)__liveStatusChangedNotification:(long long *)arg1 detailModel:(id)arg2;
- (void)__onlineNumberChangedNotification:(long long)arg1;
- (void)__liveTitleChangedNotification:(id)arg1;
- (void)__tabInfoHasReadyNotification:(id)arg1;
- (void)notifyBusinessOperationStatusChanged;
- (void)notifyBusinessWillEnterShowRoomPage:(_Bool)arg1;
- (void)pollModelHasFinishLoad:(id)arg1;
- (void)storeRedDotStartRequest:(id)arg1;
- (void)detailModelHasFinishLoad:(id)arg1;
- (void)removeBusinessWithObject:(id)arg1;
- (void)registBusinessWithObject:(id)arg1;
- (id)init;
- (void)dealloc;

@end

