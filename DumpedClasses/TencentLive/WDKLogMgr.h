//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface WDKLogMgr : NSObject
{
    NSMutableArray *_arrLogFilePaths;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedWDKLogMgr;
- (void)dealloc;
- (void)clean;
- (void)removeLogFile:(id)arg1;
- (id)getNextLogFilePath;
- (void)getNeedUploadLogFiles;
- (void)clearLogFiles;
- (id)init;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

