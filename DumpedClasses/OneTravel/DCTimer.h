//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_semaphore>, NSObject<OS_dispatch_source>;

@interface DCTimer : NSObject
{
    _Bool _valid;
    double _timeInterval;
    _Bool _repeats;
    id _target;
    SEL _selector;
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_semaphore> *_lock;
    CDUnknownBlockType _timingBlock;
}

+ (id)timerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 repeats:(_Bool)arg4;
+ (id)repeatingTimerWithInterval:(double)arg1 block:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType timingBlock; // @synthesize timingBlock=_timingBlock;
- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, getter=isValid) _Bool valid;
@property(readonly) double timeInterval;
@property(readonly) _Bool repeats;
- (void)fire;
- (void)invalidate;
- (id)initWithFireTime:(double)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 repeats:(_Bool)arg5 handlerAction:(CDUnknownBlockType)arg6;
- (id)init;

@end

