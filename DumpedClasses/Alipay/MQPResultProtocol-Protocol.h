//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSString;

@protocol MQPResultProtocol <NSObject>
@property(readonly, nonatomic, getter=getAuthToken) NSString *authtoken;
@property(readonly, nonatomic, getter=getCallbackUrl) NSString *callbackUrl;
@property(readonly, nonatomic) NSDictionary *resultPageData;
@property(readonly, nonatomic) _Bool isDisplayResult;
@property(retain, nonatomic) NSMutableDictionary *extendInfo;
@property(nonatomic) long long progress;
@property(copy, nonatomic) NSString *memo;
@property(copy, nonatomic) NSString *result;
@property(nonatomic) long long status;
@end
