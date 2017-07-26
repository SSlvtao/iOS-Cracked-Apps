//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ODKDDLogFormatter.h"

@class NSArray, NSString, ODKDDLoggingContextSet;

@interface ODKDDContextBlacklistFilterLogFormatter : NSObject <ODKDDLogFormatter>
{
    ODKDDLoggingContextSet *_contextSet;
}

- (void).cxx_destruct;
- (id)formatLogMessage:(id)arg1;
- (_Bool)isOnBlacklist:(unsigned long long)arg1;
@property(readonly, copy) NSArray *blacklist;
- (void)removeFromBlacklist:(unsigned long long)arg1;
- (void)addToBlacklist:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

