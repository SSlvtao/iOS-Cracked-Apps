//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBridgeHandler.h"

#import "QLFanTuanCommentInputDelegate.h"

@class NSDictionary, NSString, QLFanTuanInputView;

@interface QLFanTuanBridgeHandler : QLBridgeHandler <QLFanTuanCommentInputDelegate>
{
    NSDictionary *_commentParamDict;
    QLFanTuanInputView *_commentInputView;
}

@property(retain, nonatomic) QLFanTuanInputView *commentInputView; // @synthesize commentInputView=_commentInputView;
@property(retain, nonatomic) NSDictionary *commentParamDict; // @synthesize commentParamDict=_commentParamDict;
- (void).cxx_destruct;
- (id)createItemForComment:(int)arg1;
- (void)finishWithFanTuanCommentInputView:(id)arg1;
- (void)fanTuanPublishTaskFailedNotification:(id)arg1;
- (void)fanTuanPublishTaskSuccessedNotification:(id)arg1;
- (void)fanTuanFeedAndCommenPublishNotification:(id)arg1;
- (void)registDisablePageBounces;
- (void)registFanTuanFollow;
- (void)registFanTuanQueryJoined;
- (void)registFanTuanQueryHasLike;
- (void)registOnFantuanFeedOperated;
- (id)getCommentUserName;
- (id)getCommentStarId;
- (id)getCommentPostId;
- (id)getCommentParentId;
- (int)getCommentType;
- (void)callPostFinishHandler:(id)arg1;
- (void)registPopInputPanel;
- (void)removeNotifications;
- (void)addNotifications;
- (void)registHandlers;
- (void)removeCommonBridge;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

