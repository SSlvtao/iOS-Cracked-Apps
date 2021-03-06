//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMPNetPacket.h"

@interface AMPSyncPacket : AMPNetPacket
{
    long long _syncId;
    unsigned long long _messageType;
}

@property(nonatomic) unsigned long long messageType; // @synthesize messageType=_messageType;
@property(nonatomic) long long syncId; // @synthesize syncId=_syncId;
- (id)generateMtopBody;
- (id)generateMtopHeader;
- (id)initWithMessageType:(unsigned long long)arg1 syncId:(long long)arg2;

@end

