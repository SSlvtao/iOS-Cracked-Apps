//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QLMessageDispatchManager, QLRequestModel;

@protocol QLLiveMessageDispatchDelegate <NSObject>

@optional
- (void)didReceiveMessageDispatchData:(QLRequestModel *)arg1 dispatcher:(QLMessageDispatchManager *)arg2;
@end

