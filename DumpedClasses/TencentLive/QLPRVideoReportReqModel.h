//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLRequestModel.h"

@class NSMutableDictionary;

@interface QLPRVideoReportReqModel : QLRequestModel
{
    NSMutableDictionary *_reqQueue;
}

- (void).cxx_destruct;
- (void)request:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)requestDidFinishLoad:(id)arg1;
- (void)reportWithType:(int)arg1 vId:(id)arg2 reportKey:(id)arg3;
- (void)requestDidRetryRequest:(id)arg1;
- (void)cancelAllDataRequest;
- (void)dealloc;
- (id)init;

@end

