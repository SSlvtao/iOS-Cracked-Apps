//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, QLJCEMediaPosterBottomInfoView, QLJCEShareItem, QLJCEVideoAttentItem;

@protocol QLJCEMediaPosterBottomInfoViewDelegate <NSObject>
- (struct CGSize)posterBottomView:(QLJCEMediaPosterBottomInfoView *)arg1 sizeForItemViewAtIndexPath:(NSIndexPath *)arg2;

@optional
- (QLJCEVideoAttentItem *)posterBottomView:(QLJCEMediaPosterBottomInfoView *)arg1 getAttentItem:(id)arg2;
- (QLJCEShareItem *)posterBottomView:(QLJCEMediaPosterBottomInfoView *)arg1 getShareItem:(id)arg2;
- (double)posterBottomView:(QLJCEMediaPosterBottomInfoView *)arg1 minimumLineSpacingForItemViewAtIndexPath:(NSIndexPath *)arg2;
- (void)posterBottomView:(QLJCEMediaPosterBottomInfoView *)arg1 didClickWholeView:(id)arg2;
- (void)posterBottomView:(QLJCEMediaPosterBottomInfoView *)arg1 didClickItemViewAtIndexPath:(NSIndexPath *)arg2;
@end

