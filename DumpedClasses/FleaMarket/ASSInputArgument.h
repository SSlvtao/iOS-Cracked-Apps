//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ASSInputArgument : NSObject
{
    int _envMode;
    NSString *_utdid;
    NSString *_tid;
    NSString *_userid;
    CDUnknownBlockType _callback;
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) int envMode; // @synthesize envMode=_envMode;
@property(retain, nonatomic) NSString *userid; // @synthesize userid=_userid;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) NSString *utdid; // @synthesize utdid=_utdid;
- (void).cxx_destruct;

@end

