//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSURL;

@protocol P_QNBHttpRequestConfig <NSObject>
+ (id)jce_RequestWithDelegate:(id)arg1 withJceBizObject:(id)arg2 requestJCECmd:(long long)arg3;
@property(readonly, nonatomic) NSURL *url;
@property(retain) NSDictionary *responseHeaders;
@property(retain, nonatomic) id userdelegate;
@property(readonly) _Bool isLoading;
- (void)clearDelegatesAndCancel;
- (id)responseJCEObject;
- (void)setCompletionBlock:(void (^)(id <P_QNBHttpRequestConfig>, NSError *))arg1;
@end

