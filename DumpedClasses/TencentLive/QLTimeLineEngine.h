//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBusinessEngineBase.h"

@interface QLTimeLineEngine : QLBusinessEngineBase
{
    int _receiveTimelineStatus;
}

+ (id)instance;
- (void)jce_requestDidFinishLoad:(id)arg1;
- (void)requestDidCancelLoad:(id)arg1;
- (void)request:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)requestDidFinishLoad:(id)arg1;
- (void)requestDidUploadData:(id)arg1;
- (void)requestDidStartLoad:(id)arg1;
- (void)dealFriendListResponse:(id)arg1;
- (void)dealNewestTimelineResponse:(id)arg1;
- (void)dealVideoLikeResponse:(id)arg1;
- (void)dealReceiveTimelineResponse:(id)arg1;
- (void)dealVideoTimelineResponse:(id)arg1;
- (void)dealHotTimelineResponse:(id)arg1;
- (void)dealHomeTimelineResponse:(id)arg1;
- (void)dealUserTimelineResponse:(id)arg1;
- (void)dealErrorWithRequest:(id)arg1 withRootData:(id)arg2;
- (void)delItemFromCache:(id)arg1 withUser:(id)arg2;
- (unsigned long long)getViedoLikeWithVid:(id)arg1 withCid:(id)arg2 withLid:(id)arg3 withPid:(id)arg4 withVideoType:(long long)arg5 withCacheMode:(int)arg6 withDelegate:(id)arg7;
- (void)writeFakeFeeds:(id)arg1 withUser:(id)arg2;
- (unsigned long long)getFriendListWith:(id)arg1 withLoadMode:(int)arg2 withCacheMode:(int)arg3 withDelegate:(id)arg4;
- (unsigned long long)getReceiveTimelineWith:(long long)arg1 withMsgType:(int)arg2 withLoadMode:(int)arg3 withCacheMode:(int)arg4 withDelegate:(id)arg5 andPreLoad:(_Bool)arg6;
- (_Bool)checkCanLoadMore:(id)arg1;
- (unsigned long long)getSingleTimelineWithNewMessageModel:(id)arg1 withLoadMode:(int)arg2 withCacheMode:(int)arg3 withDelegate:(id)arg4;
- (unsigned long long)getSingleTimelineWith:(id)arg1 msgID:(id)arg2 withLoadMode:(int)arg3 withCacheMode:(int)arg4 withDelegate:(id)arg5;
- (unsigned long long)getHomeTimelineWith:(id)arg1 withLoadMode:(int)arg2 withCacheMode:(int)arg3 withDelegate:(id)arg4;
- (unsigned long long)getHotTimelineWith:(id)arg1 withLoadMode:(int)arg2 withCacheMode:(int)arg3 withDelegate:(id)arg4;
- (unsigned long long)getCoralTimelineWith:(id)arg1 withDataKey:(id)arg2 withLoadMode:(int)arg3 withCacheMode:(int)arg4 withDelegate:(id)arg5;
- (unsigned long long)getUserTimelineWith:(id)arg1 withLoadMode:(int)arg2 withCacheMode:(int)arg3 withDelegate:(id)arg4;
- (unsigned long long)getViedoTimelineWithVid:(id)arg1 withCid:(id)arg2 withLid:(id)arg3 withPid:(id)arg4 withVideoType:(long long)arg5 isOuter:(_Bool)arg6 withLoadMode:(int)arg7 withCacheMode:(int)arg8 withDelegate:(id)arg9;
- (long long)getTypeByVideoType:(long long)arg1;
- (void)delCacheByPublishID:(id)arg1 withUser:(id)arg2;
- (id)prossessRequest:(id)arg1;
- (id)getUserFlag:(id)arg1 withParameters:(id)arg2;
- (_Bool)checkObjSame:(id)arg1 obj2:(id)arg2;
- (id)getArrayWithInfoObj:(id)arg1 withUserObj:(id)arg2;
- (id)init;

@end

