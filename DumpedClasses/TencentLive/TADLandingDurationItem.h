//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TADLandingDurationItem : NSObject
{
    NSString *_oid;
    double _startLoadingTime;
    double _endLoadingTime;
    double _leaveTime;
}

@property(nonatomic) double leaveTime; // @synthesize leaveTime=_leaveTime;
@property(nonatomic) double endLoadingTime; // @synthesize endLoadingTime=_endLoadingTime;
@property(nonatomic) double startLoadingTime; // @synthesize startLoadingTime=_startLoadingTime;
@property(retain, nonatomic) NSString *oid; // @synthesize oid=_oid;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *stayDuration;
@property(readonly, nonatomic) NSString *loadDuration;
- (void)leave;
- (void)endLoading;
- (void)startLoading;
- (id)initWithOid:(id)arg1;

@end

