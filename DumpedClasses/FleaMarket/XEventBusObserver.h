//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface XEventBusObserver : NSObject
{
    id _observer;
    struct dispatch_queue_s *_queue;
    CDUnknownBlockType _handler;
}

@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) struct dispatch_queue_s *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id observer; // @synthesize observer=_observer;
- (void).cxx_destruct;

@end

