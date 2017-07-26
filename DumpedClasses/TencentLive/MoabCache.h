//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache, NSFileManager, NSObject<OS_dispatch_queue>, NSString;

@interface MoabCache : NSObject
{
    NSCache *_cache;
    NSFileManager *_fileManager;
    NSString *_cachesPath;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (long long)statisticsCacheFolderSize;
+ (void)removeAllNameCacheBySearchPathDirectory:(unsigned long long)arg1;
+ (void)removeAllNameCache;
+ (void)removeAllNameCacheExcept:(id)arg1;
- (void).cxx_destruct;
- (id)pathForObjectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)clearMemory;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (_Bool)objectExistsForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)name;
- (id)initWithName:(id)arg1 error:(id *)arg2;
- (id)initWithName:(id)arg1 error:(id *)arg2 searchPathDirectory:(unsigned long long)arg3;
- (void)removeAllObjectsBySyncExcept:(id)arg1;
- (void)removeAllObjectsBySync;
- (void)saveAndCheckRepeatName:(id)arg1 withSearchPathDirectory:(unsigned long long)arg2;
- (id)desiredPathForObjectForKey:(id)arg1;
- (void)dealloc;

@end

