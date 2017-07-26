//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ODKEvent.h"

#import "ODKEventProtocol.h"

@class NSString, ODKAppMonitorStat;

@interface ODKMonitorEvent : ODKEvent <ODKEventProtocol>
{
    ODKAppMonitorStat *_stat;
}

@property(retain, nonatomic) ODKAppMonitorStat *stat; // @synthesize stat=_stat;
- (void).cxx_destruct;
- (void)encode:(id)arg1;
- (unsigned int)type;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

