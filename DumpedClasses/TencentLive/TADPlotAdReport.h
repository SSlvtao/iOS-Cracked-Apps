//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TADMediaLog, TADReportDP3, TADUserInfo;

@interface TADPlotAdReport : NSObject
{
    TADReportDP3 *_dp3Reporter;
    TADMediaLog *_mediaLog;
    TADUserInfo *_userInfo;
}

@property(retain, nonatomic) TADUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) TADMediaLog *mediaLog; // @synthesize mediaLog=_mediaLog;
@property(retain, nonatomic) TADReportDP3 *dp3Reporter; // @synthesize dp3Reporter=_dp3Reporter;
- (void).cxx_destruct;
- (void)sendPingForReportUrls:(id)arg1;
- (void)sendDp3Report;
- (void)sendDp3WithMediaItems:(id)arg1;
- (void)sendDp3WithVideoInfo:(id)arg1;
- (void)reset;
- (id)init;

@end

