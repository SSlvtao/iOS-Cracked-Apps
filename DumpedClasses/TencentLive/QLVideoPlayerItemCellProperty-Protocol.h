//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, QLMomentVideo, QLPlayerViewPoolMgr, QLVideoPlayerLayoutInfo;

@protocol QLVideoPlayerItemCellProperty <NSObject>
@property(retain, nonatomic) NSIndexPath *indexPath;
@property(nonatomic) __weak QLPlayerViewPoolMgr *bindingPlayerPoolMgr;
@property(retain, nonatomic) QLVideoPlayerLayoutInfo *layoutInfo;
@property(retain, nonatomic) QLMomentVideo *video;
@property(nonatomic) _Bool hasReused;
@end

