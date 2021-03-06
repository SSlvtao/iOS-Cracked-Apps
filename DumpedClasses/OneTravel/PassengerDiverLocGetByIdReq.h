//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt64Array, NSMutableArray, NSString;

@interface PassengerDiverLocGetByIdReq : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *appVersion; // @dynamic appVersion;
@property(nonatomic) int channel; // @dynamic channel;
@property(nonatomic) int coordType; // @dynamic coordType;
@property(copy, nonatomic) NSString *dataType; // @dynamic dataType;
@property(copy, nonatomic) NSString *deviceId; // @dynamic deviceId;
@property(retain, nonatomic) GPBInt64Array *diverIdsArray; // @dynamic diverIdsArray;
@property(readonly, nonatomic) unsigned long long diverIdsArray_Count; // @dynamic diverIdsArray_Count;
@property(nonatomic) _Bool hasAppVersion; // @dynamic hasAppVersion;
@property(nonatomic) _Bool hasChannel; // @dynamic hasChannel;
@property(nonatomic) _Bool hasCoordType; // @dynamic hasCoordType;
@property(nonatomic) _Bool hasDataType; // @dynamic hasDataType;
@property(nonatomic) _Bool hasDeviceId; // @dynamic hasDeviceId;
@property(nonatomic) _Bool hasLat; // @dynamic hasLat;
@property(nonatomic) _Bool hasLng; // @dynamic hasLng;
@property(nonatomic) _Bool hasOpenId; // @dynamic hasOpenId;
@property(nonatomic) _Bool hasOrderStat; // @dynamic hasOrderStat;
@property(nonatomic) _Bool hasPhoneNum; // @dynamic hasPhoneNum;
@property(nonatomic) _Bool hasRole; // @dynamic hasRole;
@property(nonatomic) _Bool hasSdkmaptype; // @dynamic hasSdkmaptype;
@property(nonatomic) _Bool hasTimestamp; // @dynamic hasTimestamp;
@property(nonatomic) _Bool hasTlat; // @dynamic hasTlat;
@property(nonatomic) _Bool hasTlng; // @dynamic hasTlng;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) double lat; // @dynamic lat;
@property(nonatomic) double lng; // @dynamic lng;
@property(copy, nonatomic) NSString *openId; // @dynamic openId;
@property(nonatomic) int orderStat; // @dynamic orderStat;
@property(retain, nonatomic) NSMutableArray *passLocPointsArray; // @dynamic passLocPointsArray;
@property(readonly, nonatomic) unsigned long long passLocPointsArray_Count; // @dynamic passLocPointsArray_Count;
@property(copy, nonatomic) NSString *phoneNum; // @dynamic phoneNum;
@property(nonatomic) int role; // @dynamic role;
@property(copy, nonatomic) NSString *sdkmaptype; // @dynamic sdkmaptype;
@property(nonatomic) int timestamp; // @dynamic timestamp;
@property(nonatomic) double tlat; // @dynamic tlat;
@property(nonatomic) double tlng; // @dynamic tlng;
@property(nonatomic) int type; // @dynamic type;

@end

