//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AnaNSObjTransToJceBufferProtocol.h"

@class NSArray, NSString;

@interface BeaconEventRecordPackage : NSObject <AnaNSObjTransToJceBufferProtocol>
{
    NSArray *list;
}

@property(retain, nonatomic) NSArray *list; // @synthesize list;
- (void)dealloc;
- (void)createWUPModel:(struct EventRecordPackage *)arg1;
- (void)setDataToBuffer:(JceOutputStream_53d8c7ef *)arg1;
- (void)addPkgElements:(id)arg1;
- (id)getPkgElements;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
