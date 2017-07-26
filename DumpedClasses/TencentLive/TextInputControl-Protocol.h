//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, ServiceSubscription;

@protocol TextInputControl <NSObject>
- (void)sendDeleteWithSuccess:(void (^)(id))arg1 failure:(void (^)(NSError *))arg2;
- (void)sendEnterWithSuccess:(void (^)(id))arg1 failure:(void (^)(NSError *))arg2;
- (void)sendText:(NSString *)arg1 success:(void (^)(id))arg2 failure:(void (^)(NSError *))arg3;
- (ServiceSubscription *)subscribeTextInputStatusWithSuccess:(void (^)(TextInputStatusInfo *))arg1 failure:(void (^)(NSError *))arg2;
- (int)textInputControlPriority;
- (id <TextInputControl>)textInputControl;
@end

