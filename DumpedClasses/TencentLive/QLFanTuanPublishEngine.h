//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NetworkCheckerDelegate.h"

@class ANKeyValueTable, NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString;

@interface QLFanTuanPublishEngine : NSObject <NetworkCheckerDelegate>
{
    NSRecursiveLock *_mgrLock;
    NSMutableArray *_infoQueue;
    NSMutableDictionary *_taskMap;
    ANKeyValueTable *_infoTable;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)momentDidLogoutSuccess:(id)arg1;
- (void)momentDidLoginSuccess:(id)arg1;
- (void)reachabilityChanged;
- (void)retryTaskWithUniquedId:(id)arg1;
- (id)tryToMergePublishItem:(id)arg1 seqId:(id)arg2 originalList:(id)arg3 ascending:(_Bool)arg4 uInfo:(id)arg5;
- (id)tryToMergePublishFeed:(id)arg1 originalList:(id)arg2 ascending:(_Bool)arg3 uInfo:(id)arg4;
- (void)removeCommentItem:(id)arg1;
- (void)removeFeed:(id)arg1;
- (void)publishComment:(id)arg1 type:(int)arg2 title:(id)arg3 content:(id)arg4 photos:(id)arg5;
- (void)publishFeed:(id)arg1 title:(id)arg2 content:(id)arg3 photos:(id)arg4 miniVideoes:(id)arg5 sourceVideoInfo:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)publishFeed:(id)arg1 title:(id)arg2 content:(id)arg3 photos:(id)arg4;
- (void)startTask;
- (_Bool)matchPageType:(unsigned long long)arg1 uInfo:(id)arg2;
- (void)postNotification:(id)arg1 object:(id)arg2;
- (void)addFakeCommentItem:(id)arg1 intoList:(id)arg2 ascending:(_Bool)arg3;
- (void)addFakeFeed:(id)arg1 intoList:(id)arg2 ascending:(_Bool)arg3;
- (void)addFakeItem:(id)arg1 intoList:(id)arg2 ascending:(_Bool)arg3;
- (void)fireTaskDelay;
- (void)fireTask:(id)arg1;
- (void)clearInfoQueueAndTasks;
- (_Bool)removeInfoForQueueWithSeq:(id)arg1;
- (_Bool)removeInfoForQueue:(id)arg1;
- (void)saveQueueToDisk;
- (id)readQueueForDisk;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

