//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRWanliuBaseRequest.h"

@interface TRWanliuUpdateOrderInfoRequest : TRWanliuBaseRequest
{
}

+ (id)oknet_adapterWithOid:(id)arg1 tip:(id)arg2 waitTime:(id)arg3 remark:(id)arg4 farther_driver:(id)arg5;
+ (id)oknet_adapterWithOid:(id)arg1 tip:(id)arg2 waitTime:(id)arg3 remark:(id)arg4;
- (id)responseModelWithData:(id)arg1;
- (id)initWithOid:(id)arg1 tip:(id)arg2 waitTime:(id)arg3 remark:(id)arg4;
- (id)initWithOid:(id)arg1 tip:(id)arg2 waitTime:(id)arg3 remark:(id)arg4 farther_driver:(id)arg5;
- (id)pathName;
- (id)methodName;

@end
