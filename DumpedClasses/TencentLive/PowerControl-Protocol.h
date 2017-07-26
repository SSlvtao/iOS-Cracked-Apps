//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol PowerControl <NSObject>
- (void)powerOnWithSuccess:(void (^)(id))arg1 failure:(void (^)(NSError *))arg2;
- (void)powerOffWithSuccess:(void (^)(id))arg1 failure:(void (^)(NSError *))arg2;
- (int)powerControlPriority;
- (id <PowerControl>)powerControl;
@end

