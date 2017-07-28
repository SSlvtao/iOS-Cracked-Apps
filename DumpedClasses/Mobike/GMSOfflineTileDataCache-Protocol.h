//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GMSTileCoords, NSObject<OS_dispatch_queue>, NSSet;

@protocol GMSOfflineTileDataCache <NSObject>
@property(retain) NSObject<OS_dispatch_queue> *callbackQueue;
- (_Bool)waitForQueueWithTimeout:(double)arg1;
- (void)deleteTileDataCacheWithCompletionHandler:(void (^)(void))arg1;
- (void)deleteTileCoordsSet:(NSSet *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)deleteTileWithCoords:(GMSTileCoords *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)loadTileForTileCoords:(GMSTileCoords *)arg1 dataVersion:(int)arg2 completionHandler:(void (^)(_Bool, NSData *, _Bool, int, int, long long))arg3;
- (void)checkTileCoordsSet:(NSSet *)arg1 predicate:(_Bool (^)(GMSTileCoords *, int, long long))arg2 completionHandler:(void (^)(_Bool, NSSet *))arg3;
- (void)runWhenStarted:(void (^)(void))arg1;
@end
