//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class RqdReportTask;

@interface RqdBlockReportManager : NSObject
{
    _Bool reporterEnable;
    RqdReportTask *reportTask_;
    _Bool notificationObservered_;
    _Bool appResumed_;
}

+ (id)sharedManager;
- (void)stop;
- (void)start;
- (_Bool)checkLocalDataAndReport;
- (void)enableReporter:(_Bool)arg1;
- (_Bool)doUpload;
- (_Bool)shouldUpload;
- (void)onWillTerminate;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)dealloc;
- (void)removeNotificationObservers;
- (void)addNotificationObservers;
- (id)init;

@end

