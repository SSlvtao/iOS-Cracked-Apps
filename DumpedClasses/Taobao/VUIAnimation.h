//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VUIAbstractAnimation.h"

@class VUITimingFunction;

@interface VUIAnimation : VUIAbstractAnimation
{
    id _target;
    VUITimingFunction *_vuiTimingFunction;
    CDUnknownFunctionPointerType _timingFunction;
}

@property(nonatomic) CDUnknownFunctionPointerType timingFunction; // @synthesize timingFunction=_timingFunction;
@property(retain, nonatomic) VUITimingFunction *vuiTimingFunction; // @synthesize vuiTimingFunction=_vuiTimingFunction;
@property(nonatomic) __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)eventUpdate:(float)arg1 elapseTime:(double)arg2;
- (void)mixValueFrom:(float)arg1 to:(float)arg2;
- (id)initWithManager:(id)arg1;
- (id)reverseCopy;

@end
