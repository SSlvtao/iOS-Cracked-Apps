//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache, NSMutableDictionary;

@interface CTFlightGlobalCache : NSObject
{
    NSMutableDictionary *_flightCityListCache;
    NSCache *_caches;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSCache *caches; // @synthesize caches=_caches;
- (void).cxx_destruct;
- (id)getFlightCityModelWithKey:(id)arg1;
- (void)cacheFlightCityModelWithKey:(id)arg1 value:(id)arg2;
- (void)initData;
- (id)initPrivate;

@end

