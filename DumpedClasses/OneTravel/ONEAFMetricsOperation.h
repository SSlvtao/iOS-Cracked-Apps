//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSError, NSURLSessionTaskMetrics;

@interface ONEAFMetricsOperation : NSOperation
{
    NSError *_metricError;
    NSURLSessionTaskMetrics *_metrics;
    unsigned long long _responseDataLength;
}

@property(nonatomic) unsigned long long responseDataLength; // @synthesize responseDataLength=_responseDataLength;
@property(retain, nonatomic) NSURLSessionTaskMetrics *metrics; // @synthesize metrics=_metrics;
@property(retain, nonatomic) NSError *metricError; // @synthesize metricError=_metricError;
- (void).cxx_destruct;
- (long long)getConnectionState:(id)arg1;
- (id)getJsonStringFromArray:(id)arg1;
- (id)generateTimeStampString:(id)arg1 startTime:(id)arg2;
- (id)generateConnectionTimeStampArray:(id)arg1;
- (long long)calculateRequestHeaderTotalSize:(id)arg1;
- (void)reportWithOmega;
- (void)reportWithLogEvent;
- (void)main;

@end

