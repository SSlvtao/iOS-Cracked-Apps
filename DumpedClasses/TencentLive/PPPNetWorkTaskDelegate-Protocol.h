//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JceObject, NSError;

@protocol PPPNetWorkTaskDelegate <NSObject>
- (void)onTaskFinish:(JceObject *)arg1 cmdId:(int)arg2 reqeustId:(int)arg3 response:(JceObject *)arg4 error:(NSError *)arg5;
@end

