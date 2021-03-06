//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NetworkCheckerDelegate.h"

@class NSArray, NSNumber, NSString, QLAttentionOperateTaskQueue, QLGetAttentionListTask;

@interface QLNewAttentionManager : NSObject <NetworkCheckerDelegate>
{
    QLAttentionOperateTaskQueue *_attentOperateQueue;
    QLGetAttentionListTask *_attentListTask;
    _Bool _newUpdateComing;
    NSArray *_aryAttentionList;
}

+ (void)clearAttentionCache;
+ (id)sharedManager;
@property(retain, nonatomic) NSArray *aryAttentionList; // @synthesize aryAttentionList=_aryAttentionList;
@property(nonatomic) _Bool newUpdateComing; // @synthesize newUpdateComing=_newUpdateComing;
- (void).cxx_destruct;
- (void)appTerminated:(id)arg1;
- (void)reachabilityChanged;
- (void)resumeAttentionTasks;
- (void)removeOprateTask:(id)arg1;
- (_Bool)isAttentionItemNew:(id)arg1;
- (_Bool)isAttentionedByItem:(id)arg1;
- (void)batchDeleteAttentionItems:(id)arg1;
- (void)deleteAttentionItem:(id)arg1;
- (void)addAttentionItem:(id)arg1;
- (id)getAllAttentionList;
- (void)cleanUpdateInfoWithEntry;
- (void)cleanNewComingBadge;
@property(readonly) NSNumber *updateNum;
- (void)attentionListUpdated:(id)arg1;
- (void)addListObj:(id)arg1 list:(id)arg2;
- (void)removeListObj:(id)arg1 list:(id)arg2;
- (void)packUpAttentionList;
- (void)updateAll:(_Bool)arg1;
- (void)loginOuted:(id)arg1;
- (void)loginSuccessed:(id)arg1;
- (void)enterForground:(id)arg1;
- (void)doResumeLocalAttentionTask;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

