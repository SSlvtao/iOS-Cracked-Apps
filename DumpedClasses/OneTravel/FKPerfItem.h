//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface FKPerfItem : NSObject
{
    NSString *_key;
    double _time;
    NSMutableDictionary *_params;
    NSMutableDictionary *_subs;
}

+ (id)itemWithKey:(id)arg1 perf:(double)arg2;
+ (id)itemWithKey:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *subs; // @synthesize subs=_subs;
@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
@property(nonatomic) double time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)toJSONDict;
- (void)addParams:(id)arg1;

@end

