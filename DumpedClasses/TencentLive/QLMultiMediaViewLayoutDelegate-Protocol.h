//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, QLMultiMediaViewLayout;

@protocol QLMultiMediaViewLayoutDelegate <NSObject>
- (struct CGPoint)mediaViewLayout:(QLMultiMediaViewLayout *)arg1 originPointForItemAtIndexPath:(NSIndexPath *)arg2;
- (struct CGSize)mediaViewLayout:(QLMultiMediaViewLayout *)arg1 sizeForItemAtIndexPath:(NSIndexPath *)arg2;
@end

