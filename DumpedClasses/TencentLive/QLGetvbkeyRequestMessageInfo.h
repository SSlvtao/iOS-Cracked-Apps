//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QLGetvbkeyRequestMessageInfo : NSObject
{
    NSString *_ip;
    NSString *_errorCode;
    NSString *_key;
}

@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *ip; // @synthesize ip=_ip;
- (void).cxx_destruct;
- (id)initWithIp:(id)arg1 errorCode:(id)arg2 key:(id)arg3;

@end

