//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface TBIUSynchronize : NSObject
{
    id _synchronizedObj;
    id <NSLocking> _lock;
    NSObject<OS_dispatch_queue> *_runQueue;
}

+ (id)synchronizeWithSynchronizedObj:(id)arg1;
+ (id)synchronizeWithLock:(id)arg1;
+ (id)synchronizeWithRunQueue:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *runQueue; // @synthesize runQueue=_runQueue;
@property(readonly, nonatomic) id <NSLocking> lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) id synchronizedObj; // @synthesize synchronizedObj=_synchronizedObj;
- (void).cxx_destruct;
- (void)runInSynchronize:(CDUnknownBlockType)arg1;
- (id)initWithRunQueue:(id)arg1;
- (id)initWithLock:(id)arg1;
- (id)initWithSynchronizedObj:(id)arg1;

@end

