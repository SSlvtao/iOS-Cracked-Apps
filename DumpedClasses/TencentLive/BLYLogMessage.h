//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDate, NSString;

@interface BLYLogMessage : NSObject <NSCopying>
{
    NSString *_message;
    unsigned long long _level;
    NSString *_file;
    NSString *_fileName;
    NSString *_function;
    unsigned long long _line;
    NSString *_tag;
    NSDate *_timestamp;
    NSString *_processId;
    NSString *_threadId;
    NSString *_threadName;
}

@property(readonly, nonatomic) NSString *threadName; // @synthesize threadName=_threadName;
@property(readonly, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;
@property(readonly, nonatomic) NSString *processId; // @synthesize processId=_processId;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(readonly, nonatomic) unsigned long long line; // @synthesize line=_line;
@property(readonly, nonatomic) NSString *function; // @synthesize function=_function;
@property(readonly, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(readonly, nonatomic) NSString *file; // @synthesize file=_file;
@property(readonly, nonatomic) unsigned long long level; // @synthesize level=_level;
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)logTag;
- (id)logLevelFullName;
- (id)logLevelName;
- (id)initWithMessage:(id)arg1 level:(unsigned long long)arg2 file:(id)arg3 function:(id)arg4 line:(unsigned long long)arg5 tag:(id)arg6 timestamp:(id)arg7;

@end

