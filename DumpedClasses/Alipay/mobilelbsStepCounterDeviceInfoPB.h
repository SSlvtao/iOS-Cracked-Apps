//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString;

@interface mobilelbsStepCounterDeviceInfoPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *deviceId; // @dynamic deviceId;
@property(readonly) _Bool hasDeviceId; // @dynamic hasDeviceId;
@property(readonly) _Bool hasLastRecordTime; // @dynamic hasLastRecordTime;
@property(readonly) _Bool hasType; // @dynamic hasType;
@property(nonatomic) long long lastRecordTime; // @dynamic lastRecordTime;
@property(nonatomic) int type; // @dynamic type;

@end

