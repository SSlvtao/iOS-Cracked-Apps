//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface QQAppJumpRuleManager : NSObject
{
    NSArray *_hostWhiteList;
    NSArray *_schemeWhiteList;
}

+ (void)clear;
+ (id)instance;
- (void)updateWhiteListWithResult:(id)arg1;
- (_Bool)downloadConfig;
- (void)initRules;
- (void)localSchemeBackupEntries;
- (void)localHostBackupEntries;
- (_Bool)allowJumpApp:(id)arg1 scheme:(id)arg2;
- (void)dealloc;
- (id)init;

@end

