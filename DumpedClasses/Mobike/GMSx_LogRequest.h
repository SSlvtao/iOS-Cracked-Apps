//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GMSx_PBGeneratedMessage.h"

@class GMSx_ClientInfo, GMSx_PBMutableArray, NSString;

@interface GMSx_LogRequest : GMSx_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMSx_ClientInfo *clientInfo; // @dynamic clientInfo;
@property(nonatomic) _Bool hasClientInfo; // @dynamic hasClientInfo;
@property(nonatomic) _Bool hasLogEventArray; // @dynamic hasLogEventArray;
@property(nonatomic) _Bool hasLogSource; // @dynamic hasLogSource;
@property(nonatomic) _Bool hasLogSourceName; // @dynamic hasLogSourceName;
@property(nonatomic) _Bool hasRequestTimeMs; // @dynamic hasRequestTimeMs;
@property(nonatomic) _Bool hasRequestUptimeMs; // @dynamic hasRequestUptimeMs;
@property(nonatomic) _Bool hasSerializedLogEventsArray; // @dynamic hasSerializedLogEventsArray;
@property(nonatomic) _Bool hasZwiebackCookie; // @dynamic hasZwiebackCookie;
@property(retain, nonatomic) GMSx_PBMutableArray *logEventArray; // @dynamic logEventArray;
@property(nonatomic) int logSource; // @dynamic logSource;
@property(retain, nonatomic) NSString *logSourceName; // @dynamic logSourceName;
@property(nonatomic) long long requestTimeMs; // @dynamic requestTimeMs;
@property(nonatomic) long long requestUptimeMs; // @dynamic requestUptimeMs;
@property(retain, nonatomic) GMSx_PBMutableArray *serializedLogEventsArray; // @dynamic serializedLogEventsArray;
@property(retain, nonatomic) NSString *zwiebackCookie; // @dynamic zwiebackCookie;

@end

