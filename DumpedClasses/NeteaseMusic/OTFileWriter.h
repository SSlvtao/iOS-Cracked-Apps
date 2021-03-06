//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface OTFileWriter : NSObject
{
    NSString *_filePath;
}

+ (id)fileWriterWithFilePath:(id)arg1 destFilePath:(id)arg2;
@property(readonly, copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (void)closeFile;
- (void)seekToEndOfFile;
- (long long)currentLength;
- (_Bool)writeData:(id)arg1;
- (id)initWithFilePath:(id)arg1;

@end

