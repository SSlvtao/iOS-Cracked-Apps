//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface APConfigReportModel : NSObject
{
    NSString *_key;
    NSString *_updateTime;
}

+ (id)createArrayWithArray:(id)arg1;
+ (id)createModelWithDictionary:(id)arg1;
@property(retain, nonatomic) NSString *updateTime; // @synthesize updateTime=_updateTime;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (long long)compareModel:(id)arg1;

@end
