//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, QLJCEAction, UIView;

@protocol QLVideoListsViewControllerHelper <NSObject>
- (void)handlePlayActionWithItemData:(id)arg1 dataKey:(NSString *)arg2 index:(long long)arg3 isPop:(_Bool)arg4;
- (NSArray *)sourceVideoListsByDatakey:(NSString *)arg1 sourceType:(long long)arg2;

@optional
@property(readonly) long long uiType;
- (long long)indexOfCurrentShouldScrollToByDataKey:(NSString *)arg1 sourceType:(long long)arg2;
- (_Bool)shouldHighlightForCurrentItem:(id)arg1 datakey:(NSString *)arg2 index:(long long)arg3;
- (_Bool)hasNextPageForDataKey:(NSString *)arg1 sourceType:(long long)arg2;
- (_Bool)hasFooterDargStyleByDataKey:(NSString *)arg1 sourceType:(long long)arg2;
- (UIView *)verticalVideoCellWithDataKey:(NSString *)arg1;
- (UIView *)verticalPosterCellWithDataKey:(NSString *)arg1;
- (UIView *)viewWithDataKey:(NSString *)arg1;
- (void)handlePlayActionWithItemData:(id)arg1 dataKey:(NSString *)arg2 index:(long long)arg3 isPop:(_Bool)arg4 withAction:(QLJCEAction *)arg5;
- (void)load:(int)arg1 more:(_Bool)arg2 sourceType:(long long)arg3 dataKey:(NSString *)arg4;
@end

