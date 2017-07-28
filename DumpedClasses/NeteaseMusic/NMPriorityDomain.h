//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NMPriorityDomain : NSObject
{
    unsigned long long _unage;
    NSString *_domain;
    unsigned long long _type;
    unsigned long long _timeoutIndex;
    long long _priority;
}

+ (id)priorityDomainWithDomain:(id)arg1 type:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (_Bool)matchedWithUrl:(id)arg1;
- (void)reset;
- (void)unageing;
- (void)use;
- (void)failed:(_Bool)arg1;
- (void)successWithResponeTime:(double)arg1 downloadSpeed:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long priority; // @dynamic priority;
@property(readonly, nonatomic) double timeout; // @dynamic timeout;
- (id)initWithDomain:(id)arg1 type:(unsigned long long)arg2;

@end
