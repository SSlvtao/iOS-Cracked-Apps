//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ODKPLCrashHostInfo : NSObject
{
    struct ODKPLCrashHostInfoVersion _darwinVersion;
}

+ (id)currentHostInfo;
@property(readonly, nonatomic) struct ODKPLCrashHostInfoVersion darwinVersion; // @synthesize darwinVersion=_darwinVersion;
- (id)init;

@end

