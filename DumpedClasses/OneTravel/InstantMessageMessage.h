//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString;

@interface InstantMessageMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *fid; // @dynamic fid;
@property(nonatomic) _Bool hasFid; // @dynamic hasFid;
@property(nonatomic) _Bool hasMeta; // @dynamic hasMeta;
@property(nonatomic) _Bool hasMid; // @dynamic hasMid;
@property(nonatomic) _Bool hasRequestId; // @dynamic hasRequestId;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(nonatomic) _Bool hasTime; // @dynamic hasTime;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) _Bool hasUid; // @dynamic hasUid;
@property(copy, nonatomic) NSData *meta; // @dynamic meta;
@property(nonatomic) unsigned long long mid; // @dynamic mid;
@property(nonatomic) unsigned long long requestId; // @dynamic requestId;
@property(copy, nonatomic) NSString *text; // @dynamic text;
@property(nonatomic) unsigned long long time; // @dynamic time;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(nonatomic) unsigned long long uid; // @dynamic uid;

@end

