//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PRegionSyncResult.h"

@class NSString, PRegionInfo, PRegionSummaryInfo, PRegionSyncIncrement;

@interface PRegionSyncResult : NSObject <PRegionSyncResult>
{
    PRegionInfo *_regionInfo;
    PRegionSyncIncrement *_increment;
    PRegionSummaryInfo *_summary;
}

@property(retain, nonatomic) PRegionSummaryInfo *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) PRegionSyncIncrement *increment; // @synthesize increment=_increment;
@property(retain, nonatomic) PRegionInfo *regionInfo; // @synthesize regionInfo=_regionInfo;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

