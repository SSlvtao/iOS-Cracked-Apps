//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WVMonitorInfoProtocol.h"

@class NSString;

@interface WVPackageUpdateStartMonitorStat : NSObject <WVMonitorInfoProtocol>
{
    double _startTime;
    double _endTime;
}

+ (id)monitorMeasureRange:(id)arg1;
+ (id)monitorPoint;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (id)initWithStart:(double)arg1 end:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

