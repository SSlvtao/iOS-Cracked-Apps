//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableSet, NSObject<OS_dispatch_queue>;

@interface QLChannelDataKeyCache : NSObject
{
    NSMutableSet *_dataKeySet;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NSMutableSet *dataKeySet; // @synthesize dataKeySet=_dataKeySet;
- (void).cxx_destruct;
- (void)removeDataKeyList:(id)arg1;
- (void)cacheDataKeyList:(id)arg1;
- (_Bool)containsObject:(id)arg1;
@property(readonly, nonatomic) NSArray *allDataKeys;
- (id)init;

@end

