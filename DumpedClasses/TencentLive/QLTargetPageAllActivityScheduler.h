//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface QLTargetPageAllActivityScheduler : NSObject
{
    NSMutableArray *_activityArray;
    CDUnknownBlockType _checkLoginStatusBlock;
}

@property(copy, nonatomic) CDUnknownBlockType checkLoginStatusBlock; // @synthesize checkLoginStatusBlock=_checkLoginStatusBlock;
@property(retain, nonatomic) NSMutableArray *activityArray; // @synthesize activityArray=_activityArray;
- (void).cxx_destruct;
- (void)changeActivityStatus:(_Bool)arg1 checkBlock:(CDUnknownBlockType)arg2;
- (id)currentTargetPageActivityView;
- (id)currentTargetPageActivityItem;
- (long long)currentTargetPageStatus:(CDUnknownBlockType)arg1 serverTime:(double)arg2;
- (void)clearAllActivity:(id)arg1;
- (_Bool)activityViewisShowing;
- (_Bool)shouldClearActivityData:(id)arg1;
- (id)runingActivityItemNeedServerTime:(_Bool)arg1 ServerTime:(double)arg2;
- (void)activityStatusChangeIndex:(unsigned long long)arg1 activityItem:(id)arg2;
- (void)activity:(id)arg1 statusChangeBlock:(CDUnknownBlockType)arg2 activityPlayedCheck:(CDUnknownBlockType)arg3;
- (_Bool)shouldStopCallBackStatusChange:(id)arg1;
- (_Bool)containActivity;
- (void)addActivity:(id)arg1;
- (void)updateCurrentActivityStatus:(long long)arg1 activityID:(id)arg2 gameID:(id)arg3;
- (void)updateActivityItemsData:(id)arg1 serverTime:(double)arg2 activityStatusChangeBlock:(CDUnknownBlockType)arg3 activityPlayedCheck:(CDUnknownBlockType)arg4;
- (void)setActivityItemsData:(id)arg1 serverTime:(double)arg2 activityStatusChangeBlock:(CDUnknownBlockType)arg3 activityPlayedCheck:(CDUnknownBlockType)arg4;
- (void)loginPickerViewDidDismissNotification;
- (void)reachabilityChanged:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCheckLoginStatusBlock:(CDUnknownBlockType)arg1;

@end

