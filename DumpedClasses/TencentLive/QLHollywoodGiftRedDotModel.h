//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLRequestModel.h"

@class QLASIHTTPRequest;

@interface QLHollywoodGiftRedDotModel : QLRequestModel
{
    int _version;
    long long _count;
    QLASIHTTPRequest *_dataRequest;
}

@property(retain, nonatomic) QLASIHTTPRequest *dataRequest; // @synthesize dataRequest=_dataRequest;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) int version; // @synthesize version=_version;
- (void).cxx_destruct;
- (void)requestDidFinishLoad:(id)arg1;
- (void)load:(int)arg1 more:(_Bool)arg2;
- (void)requestDidRetryRequest:(id)arg1;
- (void)cancelDataRequest;
- (void)dealloc;

@end

