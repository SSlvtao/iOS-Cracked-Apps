//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSThread;

@interface RqdBlockMonitorManager : NSObject
{
    _Bool monitor_;
    _Bool needFilterRepeat_;
    _Bool notificationObserved_;
    _Bool needMonitorInLifecycle_;
    _Bool monitorRuning_;
    NSThread *monitorThread_;
    double monitorIntervalTime_;
    double _blockTime;
    struct __CFRunLoopObserver *runloopObserver_;
    double _blockLastTimeInterval;
    NSArray *_blockLastMainThreadCallStackArray;
    struct vector<unsigned long, std::allocator<unsigned long>> _blockLastMainThreadStackPCArray;
    unsigned long long _blockFrameSum;
}

+ (_Bool)checkLocalDataAndReport;
+ (void)enableMonitor:(_Bool)arg1 autoReporter:(_Bool)arg2 sameFrameFilter:(_Bool)arg3;
+ (id)sharedManager;
@property(nonatomic) _Bool needFilterRepeat; // @synthesize needFilterRepeat=needFilterRepeat_;
@property(nonatomic) _Bool monitor; // @synthesize monitor=monitor_;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dumpThreads;
- (_Bool)checkBlockEqualed;
- (unsigned long long)diffTimeval:(struct timeval *)arg1 with:(struct timeval *)arg2;
- (_Bool)checkRunLoopTimeout;
- (void)onThreadMonitor;
- (_Bool)isMonitorThreadCancelled;
- (void)stopMonitorThread:(_Bool)arg1;
- (void)startMonitorThread;
- (void)removeRunloopObserver;
- (void)addRunloopObserver;
- (void)stop;
- (void)start;
- (void)toggleBlockMonitor:(_Bool)arg1;
- (_Bool)isEnable;
- (void)observeAppWillEnterForeground;
- (void)observeAppDidEnterBackground;
- (void)observeAppWillTerminate;
- (void)dealloc;
- (void)removeNotificationObservers;
- (void)addNotificationObservers;
- (id)init;

@end

