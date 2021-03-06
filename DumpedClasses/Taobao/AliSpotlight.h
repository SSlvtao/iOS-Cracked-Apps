//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AliSpotEnv, AliSpotGhost, AliSpotSearch, AliSpotSetting;

@interface AliSpotlight : NSObject
{
    AliSpotEnv *_spotEnv;
    AliSpotSetting *_spotSetting;
    AliSpotSearch *_spotSearch;
    AliSpotGhost *_spotGhost;
}

+ (void)releaseInstance;
+ (id)shareInstance;
+ (void)makeUpForAddSearch;
@property(retain, nonatomic) AliSpotGhost *spotGhost; // @synthesize spotGhost=_spotGhost;
@property(retain, nonatomic) AliSpotSearch *spotSearch; // @synthesize spotSearch=_spotSearch;
@property(retain, nonatomic) AliSpotSetting *spotSetting; // @synthesize spotSetting=_spotSetting;
@property(retain, nonatomic) AliSpotEnv *spotEnv; // @synthesize spotEnv=_spotEnv;
- (void).cxx_destruct;
- (void)deleteSearchableItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addSearchableItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)ghostAliSpot;
- (void)addSearchableItemForMakeUp;
- (void)updateItemUserCountById:(id)arg1 finishHanlder:(CDUnknownBlockType)arg2;
- (id)init;

@end

