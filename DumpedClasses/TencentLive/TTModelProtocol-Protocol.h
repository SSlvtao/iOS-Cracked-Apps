//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@protocol TTModelProtocol <NSObject>
- (void)invalidate:(_Bool)arg1;
- (void)cancel;
- (void)load:(int)arg1 more:(_Bool)arg2;
- (_Bool)isOutdated;
- (_Bool)isLoadingMore;
- (_Bool)isLoading;
- (_Bool)isLoaded;
- (NSMutableArray *)delegates;
@end

