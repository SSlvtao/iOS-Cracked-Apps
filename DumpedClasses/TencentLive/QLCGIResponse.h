//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QLCGIGetvbkeyTaskDelegate.h"
#import "QLCGIGetvinfoTaskDelegate.h"

@class NSString;

@interface QLCGIResponse : NSObject <QLCGIGetvinfoTaskDelegate, QLCGIGetvbkeyTaskDelegate>
{
    int _requestType;
    int _taskId;
    NSString *_requestId;
}

@property(nonatomic) int taskId; // @synthesize taskId=_taskId;
@property(nonatomic) int requestType; // @synthesize requestType=_requestType;
@property(copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
- (void).cxx_destruct;
- (void)onGetvbkeyError:(id)arg1 withErrorCode:(int)arg2 withDetailErrorCode:(int)arg3;
- (void)onGetvbkeySuccess:(id)arg1 withVideoInfo:(id)arg2;
- (void)onGetCGIRequestError:(id)arg1 withErrorCode:(int)arg2;
- (void)onGetvinfoError:(id)arg1 withErrorCode:(int)arg2 withDetailErrorCode:(int)arg3;
- (void)onGetvinfoSuccess:(id)arg1 withVideoInfo:(id)arg2;
- (id)initWithRequestId:(id)arg1 withRequestType:(int)arg2 withRequestTaskId:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

