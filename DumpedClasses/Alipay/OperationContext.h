//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSThread;

@interface OperationContext : NSObject
{
    id _target;
    SEL _action;
    SEL _cancelAction;
    NSThread *_thread;
    _Bool _done;
}

@property(nonatomic) _Bool done; // @synthesize done=_done;
@property(readonly, nonatomic) NSThread *thread; // @synthesize thread=_thread;
@property(readonly, nonatomic) SEL cancelAction; // @synthesize cancelAction=_cancelAction;
@property(readonly, nonatomic) SEL action; // @synthesize action=_action;
@property(readonly, nonatomic) id target; // @synthesize target=_target;
- (void)dealloc;
- (id)initWidthTarget:(id)arg1 action:(SEL)arg2 cancelAction:(SEL)arg3 thread:(id)arg4;

@end
