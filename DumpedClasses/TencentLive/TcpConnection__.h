//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OmasConnection.h"

#import "NSStreamDelegate.h"

@class NSData, NSInputStream, NSMutableArray, NSOutputStream, NSRecursiveLock, NSString, NSTimer;

@interface TcpConnection__ : OmasConnection <NSStreamDelegate>
{
    NSInputStream *input;
    NSOutputStream *output;
    NSData *_sendPacket;
    long long _tag;
    NSTimer *_connect_timer;
    NSTimer *_detectIdle_timer;
    _Bool _bReadingPacketLen;
    unsigned char _PacketLenBuf[8];
    char *_pPacketBuf;
    int _iLenToRead;
    int _iLenHaveRead;
    int _iHeartBeatTimeoutTimes;
    unsigned char _PacketLenBuf2[150];
    int _NetworkSate;
    _Bool _isWriting;
    int _protocal;
    long long _retryCnt;
    NSMutableArray *writeQueue;
    NSRecursiveLock *_lock;
    NSRecursiveLock *_publicLock;
    double _lastSendReceiveTime;
    double _keepAliveInterval;
}

@property(nonatomic) double keepAliveInterval; // @synthesize keepAliveInterval=_keepAliveInterval;
@property(nonatomic) long long retryCnt; // @synthesize retryCnt=_retryCnt;
- (void)setProtocal:(int)arg1;
- (int)protocal;
@property(retain, nonatomic) NSData *sendPacket; // @synthesize sendPacket=_sendPacket;
@property(retain, nonatomic) NSOutputStream *output; // @synthesize output;
@property(retain, nonatomic) NSInputStream *input; // @synthesize input;
- (void)heartBeatResult:(_Bool)arg1;
- (void)dealloc;
- (void)TrySend;
- (int)send:(id)arg1 tag:(long long)arg2;
- (id)httpPack:(id)arg1 host:(id)arg2;
- (void)socketError;
- (_Bool)IsDisConnected;
- (_Bool)IsConnecting;
- (_Bool)IsConnected;
- (void)DisConnect;
- (void)Connect:(const char *)arg1 port:(int)arg2 timeOut:(double)arg3;
- (void)sendTimeout;
- (int)requestCount;
- (int)netType;
- (int)connectionType;
- (void)detectIdle;
- (void)check_connect_timeout;
- (void)clearDelegate;
- (void)invalidIdleTimer;
- (void)invalidConnectTimer;
- (id)init;
- (void)reachabilityChanged:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)handleStreamSpaceAvailable;
- (void)handleStreamBytesAvailable;
- (id)httpUnpack:(id)arg1;
- (void)clearReadParams;
- (void)handleStreamEndEncountered:(id)arg1;
- (void)handleStreamErrorOccurred:(id)arg1;
- (void)handleStreamOpenCompleted:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

