//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary, NSString, NSTimer;

@interface FMActGuideHelper : NSObject
{
    _Bool _valid;
    NSDate *_startTime;
    NSDate *_endTime;
    NSDictionary *_actInfoMap;
    NSString *_activityId;
    id <FMActGuideHelperDelegate> _delegate;
    double _timeDiff;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double timeDiff; // @synthesize timeDiff=_timeDiff;
@property(nonatomic) __weak id <FMActGuideHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
@property(copy, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(retain, nonatomic) NSDictionary *actInfoMap; // @synthesize actInfoMap=_actInfoMap;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (void)resetContent;
- (void)checkValid;
- (void)configWithDO:(id)arg1;

@end

