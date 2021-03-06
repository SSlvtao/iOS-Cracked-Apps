//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BWFileLink, NSTimer;

@interface BWPlainLogEngine : NSObject
{
    BWFileLink *_logFileLink;
    NSTimer *_uploadTimer;
    double _uploadTimeInterval;
}

+ (id)shareEngine;
+ (id)md5:(id)arg1;
+ (_Bool)checkIsWifiNewWork;
- (void).cxx_destruct;
- (void)postEventWithID:(id)arg1 withAdditionValues:(id)arg2 spNo:(id)arg3 orderNo:(id)arg4;
- (void)postEvent:(id)arg1;
- (void)forceUploadData:(id)arg1;
- (id)init;
- (void)dealloc;

@end

