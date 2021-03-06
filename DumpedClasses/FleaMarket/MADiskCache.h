//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MADataCache.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface MADiskCache : NSObject <MADataCache>
{
    NSObject<OS_dispatch_queue> *_diskCacheQueue;
}

+ (int)isExistCacheWithIndexName:(id)arg1 withTile:(CDStruct_c8e85508)arg2;
+ (_Bool)createCachedDataPath:(id)arg1 withIndexName:(id)arg2 withDataName:(id)arg3;
+ (id)getCacheFilePath:(CDStruct_c8e85508)arg1 cacheKey:(id)arg2;
+ (struct _JMergePoint)GetJMergeDirection:(CDStruct_c8e85508)arg1;
+ (struct _JMergePoint)GetJMergeGrid:(CDStruct_c8e85508)arg1;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)removeAllCachedImagesForCacheKey:(id)arg1;
- (void)removeAllCachedImages;
- (void)addImage:(id)arg1 forTile:(CDStruct_c8e85508)arg2 withCacheKey:(id)arg3;
- (id)cachedImage:(CDStruct_c8e85508)arg1 withCacheKey:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

