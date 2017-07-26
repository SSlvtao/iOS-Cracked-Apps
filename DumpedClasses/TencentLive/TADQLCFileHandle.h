//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileHandle;

@interface TADQLCFileHandle : NSObject
{
    NSFileHandle *_fileHandle;
}

+ (id)readDataFromPath:(id)arg1;
+ (_Bool)writeData:(id)arg1 toPath:(id)arg2;
+ (_Bool)isDirectory:(id)arg1;
+ (id)getFileModificationDate:(id)arg1;
+ (id)getContentsbyDir:(id)arg1;
+ (void)removeFilesAtDirPath:(id)arg1 ext:(id)arg2;
+ (unsigned long long)getFileSize:(id)arg1;
+ (_Bool)containFileAtPath:(id)arg1;
+ (_Bool)removeFileAtPath:(id)arg1;
+ (id)fileHandleForWriteAtPath:(id)arg1;
+ (id)fileHandleForReadAtPath:(id)arg1;
- (void).cxx_destruct;
- (id)readData;
- (void)writeData:(id)arg1;
- (void)appendData:(id)arg1;
- (id)initWithNSFileHandle:(id)arg1;

@end

