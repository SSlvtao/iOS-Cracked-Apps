//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString, NSTimer;

@interface QLTimer : NSObject
{
    NSTimer *_timer;
    _Bool _fireWhenStart;
    _Bool _runningInBackground;
    _Bool _loginIsNecessary;
    _Bool _momentLoginIsNecessary;
    unsigned long long _timerType;
    id _target;
    SEL _selector;
    id _userInfo;
    double _timeInterval;
    long long _expandedIntervalRatio;
    NSString *_timerID;
    id <QLTimerDelegate><NSObject> _delegate;
    NSDate *_lastActionDate;
}

@property(retain, nonatomic) NSDate *lastActionDate; // @synthesize lastActionDate=_lastActionDate;
@property(nonatomic) __weak id <QLTimerDelegate><NSObject> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *timerID; // @synthesize timerID=_timerID;
@property(nonatomic) _Bool momentLoginIsNecessary; // @synthesize momentLoginIsNecessary=_momentLoginIsNecessary;
@property(nonatomic) _Bool loginIsNecessary; // @synthesize loginIsNecessary=_loginIsNecessary;
@property(nonatomic) _Bool runningInBackground; // @synthesize runningInBackground=_runningInBackground;
@property(nonatomic) _Bool fireWhenStart; // @synthesize fireWhenStart=_fireWhenStart;
@property(nonatomic) long long expandedIntervalRatio; // @synthesize expandedIntervalRatio=_expandedIntervalRatio;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) unsigned long long timerType; // @synthesize timerType=_timerType;
- (void).cxx_destruct;
- (void)targetAction;
- (void)callback;
- (void)invalidate;
- (_Bool)schedule;
- (void)stop;
- (_Bool)restart;
- (_Bool)start;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1 target:(id)arg2 selector:(SEL)arg3 interval:(double)arg4 secondPageIntervalRatio:(long long)arg5;

@end

