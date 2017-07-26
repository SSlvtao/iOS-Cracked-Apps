//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QLMomentPublish, QLMomentTimelineView, UIView;

@protocol QLMomentTimelineViewDelegate <NSObject>
- (UIView *)commentWillBegin:(QLMomentTimelineView *)arg1 withItem:(QLMomentPublish *)arg2;

@optional
- (void)needToSeeMoreComment:(QLMomentTimelineView *)arg1 withItem:(QLMomentPublish *)arg2;
- (void)needToSynFeed:(QLMomentPublish *)arg1;
- (void)needToShowFollowAnimation:(QLMomentTimelineView *)arg1 withItem:(QLMomentPublish *)arg2;
- (void)needToUpdateAttentionState:(QLMomentTimelineView *)arg1 withItem:(QLMomentPublish *)arg2;
- (void)needToDeleteItem:(QLMomentTimelineView *)arg1 withItem:(QLMomentPublish *)arg2;
- (void)needToUpdateTextContentItem:(QLMomentTimelineView *)arg1 withItem:(QLMomentPublish *)arg2 needSetContentOffset:(_Bool)arg3;
- (void)needToUpdateItem:(QLMomentTimelineView *)arg1 withItem:(QLMomentPublish *)arg2;
- (void)needToUpdateCommentView:(QLMomentTimelineView *)arg1 withItem:(QLMomentPublish *)arg2;
- (void)needToUpdateLikeView:(QLMomentTimelineView *)arg1 withItem:(QLMomentPublish *)arg2;
@end

