//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString, PBMapStringString;

@interface MSCdpQueryResultPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) PBMapStringString *externParam; // @dynamic externParam;
@property(readonly) _Bool hasExternParam; // @dynamic hasExternParam;
@property(readonly) _Bool hasMessage; // @dynamic hasMessage;
@property(readonly) _Bool hasResultCode; // @dynamic hasResultCode;
@property(readonly) _Bool hasSuccess; // @dynamic hasSuccess;
@property(retain, nonatomic) NSString *message; // @dynamic message;
@property(retain, nonatomic) NSString *resultCode; // @dynamic resultCode;
@property(nonatomic) _Bool success; // @dynamic success;

@end

