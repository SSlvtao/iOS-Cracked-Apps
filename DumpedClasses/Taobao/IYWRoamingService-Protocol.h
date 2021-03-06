//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber;

@protocol IYWRoamingService <NSObject>
@property(retain, nonatomic) NSNumber *localAutoRoamingCount;
@property(nonatomic) _Bool enableLocalAutoRoamingRecent;
- (void)refreshLastMessageForConversations:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)setDidReceiveRoamingAuthenticationChangllengeBlock:(void (^)(void (^)(NSString *)))arg1;
- (void)setRoamingServiceState:(long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)getRoamingServiceState:(void (^)(long long, NSError *))arg1;
@end

