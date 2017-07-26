//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface HmtTrackingHttpFilter : NSObject
{
    NSString *path;
    NSDictionary *dictionary;
    NSArray *hostArr;
    NSArray *urlArr;
    NSArray *regexArr;
}

+ (_Bool)httpTracked:(id)arg1;
+ (_Bool)httpFilter:(id)arg1 host:(id)arg2;
+ (void)removeRegex:(id)arg1;
+ (void)removeUrl:(id)arg1;
+ (void)removeHost:(id)arg1;
+ (void)saveRegex:(id)arg1;
+ (void)saveUrl:(id)arg1;
+ (void)saveHost:(id)arg1;
+ (id)shared;
@property(retain, nonatomic) NSArray *regexArr; // @synthesize regexArr;
@property(retain, nonatomic) NSArray *urlArr; // @synthesize urlArr;
@property(retain, nonatomic) NSArray *hostArr; // @synthesize hostArr;
@property(retain, nonatomic) NSDictionary *dictionary; // @synthesize dictionary;
@property(retain, nonatomic) NSString *path; // @synthesize path;
- (void).cxx_destruct;
- (_Bool)httpFilterRegex:(id)arg1;
- (_Bool)httpFilterUrl:(id)arg1;
- (_Bool)httpFilterHost:(id)arg1;

@end

