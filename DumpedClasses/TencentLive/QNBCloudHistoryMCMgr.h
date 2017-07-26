//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface QNBCloudHistoryMCMgr : NSObject
{
    NSMutableArray *_aryRecordList;
    NSMutableDictionary *_dicRowIndexes;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *dicRowIndexes; // @synthesize dicRowIndexes=_dicRowIndexes;
@property(retain, nonatomic) NSMutableArray *aryRecordList; // @synthesize aryRecordList=_aryRecordList;
- (void).cxx_destruct;
- (void)appWillTerminated;
- (void)getLocalAndDeletedRecords:(CDUnknownBlockType)arg1;
- (void)watchRecordsWithPageIndex:(long long)arg1 pageCount:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)getTotalCount;
- (void)getAllWatchRecords:(CDUnknownBlockType)arg1;
- (id)watchRecordWithCid:(id)arg1 vid:(id)arg2 lid:(id)arg3 pid:(id)arg4;
- (void)doDeleteMCDataTask:(id)arg1;
- (void)doClearAllMCDataTask:(id)arg1;
- (void)doUpdateMCDataTask:(id)arg1;
- (void)doLoadAllMCDataTask:(id)arg1;
- (_Bool)qnbCloudisEmpty;
- (void)updateIndexesForList;
- (_Bool)doFillUserIDDataTask:(id)arg1;
- (void)execDataTask:(id)arg1;
- (void)execTransaction:(id)arg1 needSerialDB:(_Bool)arg2 mcCompletion:(CDUnknownBlockType)arg3 dbCompletion:(CDUnknownBlockType)arg4;
- (id)init;

@end

