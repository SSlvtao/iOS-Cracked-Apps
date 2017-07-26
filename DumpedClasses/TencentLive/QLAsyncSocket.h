//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AsyncReadPacket, AsyncWritePacket, NSArray, NSMutableArray, NSMutableData, NSTimer;

@interface QLAsyncSocket : NSObject
{
    int theNativeSocket4;
    int theNativeSocket6;
    struct __CFSocket *theSocket4;
    struct __CFSocket *theSocket6;
    struct __CFReadStream *theReadStream;
    struct __CFWriteStream *theWriteStream;
    struct __CFRunLoopSource *theSource4;
    struct __CFRunLoopSource *theSource6;
    struct __CFRunLoop *theRunLoop;
    CDStruct_4210025a theContext;
    NSArray *theRunLoopModes;
    NSTimer *theConnectTimer;
    NSMutableArray *theReadQueue;
    AsyncReadPacket *theCurrentRead;
    NSTimer *theReadTimer;
    NSMutableData *partialReadBuffer;
    NSMutableArray *theWriteQueue;
    AsyncWritePacket *theCurrentWrite;
    NSTimer *theWriteTimer;
    id theDelegate;
    unsigned short theFlags;
    long long theUserData;
}

+ (id)ZeroData;
+ (id)LFData;
+ (id)CRData;
+ (id)CRLFData;
- (void)doCFWriteStreamCallback:(unsigned long long)arg1 forStream:(struct __CFWriteStream *)arg2;
- (void)doCFReadStreamCallback:(unsigned long long)arg1 forStream:(struct __CFReadStream *)arg2;
- (void)doCFSocketCallback:(unsigned long long)arg1 forSocket:(struct __CFSocket *)arg2 withAddress:(id)arg3 withData:(const void *)arg4;
- (void)onTLSHandshakeSuccessful;
- (void)maybeStartTLS;
- (void)startTLS:(id)arg1;
- (void)doWriteTimeout:(id)arg1;
- (void)endCurrentWrite;
- (void)completeCurrentWrite;
- (void)doSendBytes;
- (_Bool)canAcceptBytes;
- (void)maybeDequeueWrite;
- (void)scheduleDequeueWrite;
- (void)writeData:(id)arg1 withTimeout:(double)arg2 tag:(long long)arg3;
- (void)doReadTimeout:(id)arg1;
- (void)endCurrentRead;
- (void)completeCurrentRead;
- (void)doBytesAvailable;
- (long long)readIntoBuffer:(void *)arg1 maxLength:(unsigned long long)arg2;
- (_Bool)hasBytesAvailable;
- (void)maybeDequeueRead;
- (void)scheduleDequeueRead;
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 buffer:(id)arg3 bufferOffset:(unsigned long long)arg4 maxLength:(unsigned long long)arg5 tag:(long long)arg6;
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 maxLength:(unsigned long long)arg3 tag:(long long)arg4;
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 buffer:(id)arg3 bufferOffset:(unsigned long long)arg4 tag:(long long)arg5;
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 tag:(long long)arg3;
- (void)readDataToLength:(unsigned long long)arg1 withTimeout:(double)arg2 buffer:(id)arg3 bufferOffset:(unsigned long long)arg4 tag:(long long)arg5;
- (void)readDataToLength:(unsigned long long)arg1 withTimeout:(double)arg2 tag:(long long)arg3;
- (void)readDataWithTimeout:(double)arg1 buffer:(id)arg2 bufferOffset:(unsigned long long)arg3 maxLength:(unsigned long long)arg4 tag:(long long)arg5;
- (void)readDataWithTimeout:(double)arg1 buffer:(id)arg2 bufferOffset:(unsigned long long)arg3 tag:(long long)arg4;
- (void)readDataWithTimeout:(double)arg1 tag:(long long)arg2;
- (id)description;
- (_Bool)areStreamsConnected;
- (_Bool)isIPv6;
- (_Bool)isIPv4;
- (id)localAddress;
- (id)connectedAddress;
- (unsigned short)portFromAddress6:(struct sockaddr_in6 *)arg1;
- (unsigned short)portFromAddress4:(struct sockaddr_in *)arg1;
- (id)hostFromAddress6:(struct sockaddr_in6 *)arg1;
- (id)hostFromAddress4:(struct sockaddr_in *)arg1;
- (unsigned short)localPortFromCFSocket6:(struct __CFSocket *)arg1;
- (unsigned short)localPortFromCFSocket4:(struct __CFSocket *)arg1;
- (unsigned short)localPortFromNativeSocket6:(int)arg1;
- (unsigned short)localPortFromNativeSocket4:(int)arg1;
- (id)localHostFromCFSocket6:(struct __CFSocket *)arg1;
- (id)localHostFromCFSocket4:(struct __CFSocket *)arg1;
- (id)localHostFromNativeSocket6:(int)arg1;
- (id)localHostFromNativeSocket4:(int)arg1;
- (unsigned short)connectedPortFromCFSocket6:(struct __CFSocket *)arg1;
- (unsigned short)connectedPortFromCFSocket4:(struct __CFSocket *)arg1;
- (unsigned short)connectedPortFromNativeSocket6:(int)arg1;
- (unsigned short)connectedPortFromNativeSocket4:(int)arg1;
- (id)connectedHostFromCFSocket6:(struct __CFSocket *)arg1;
- (id)connectedHostFromCFSocket4:(struct __CFSocket *)arg1;
- (id)connectedHostFromNativeSocket6:(int)arg1;
- (id)connectedHostFromNativeSocket4:(int)arg1;
- (unsigned short)localPort6;
- (unsigned short)localPort4;
- (id)localHost6;
- (id)localHost4;
- (unsigned short)connectedPort6;
- (unsigned short)connectedPort4;
- (id)connectedHost6;
- (id)connectedHost4;
- (unsigned short)localPort;
- (id)localHost;
- (unsigned short)connectedPort;
- (id)connectedHost;
- (_Bool)isConnected;
- (_Bool)isDisconnected;
- (id)errorFromCFStreamError:(CDStruct_87dc826d)arg1;
- (id)getWriteTimeoutError;
- (id)getReadTimeoutError;
- (id)getReadMaxedOutError;
- (id)getConnectTimeoutError;
- (id)getAbortError;
- (id)getStreamError;
- (id)getSocketError;
- (id)getErrnoError;
- (id)unreadData;
- (void)maybeScheduleDisconnect;
- (void)disconnectAfterReadingAndWriting;
- (void)disconnectAfterWriting;
- (void)disconnectAfterReading;
- (void)disconnect;
- (void)close;
- (void)emptyQueues;
- (void)recoverUnreadData;
- (void)closeWithError:(id)arg1;
- (_Bool)setSocketFromStreamsAndReturnError:(id *)arg1;
- (void)doStreamOpen;
- (_Bool)openStreamsAndReturnError:(id *)arg1;
- (_Bool)configureStreamsAndReturnError:(id *)arg1;
- (_Bool)attachStreamsToRunLoop:(id)arg1 error:(id *)arg2;
- (_Bool)createStreamsToHost:(id)arg1 onPort:(unsigned short)arg2 error:(id *)arg3;
- (_Bool)createStreamsFromNative:(int)arg1 error:(id *)arg2;
- (void)doSocketOpen:(struct __CFSocket *)arg1 withCFSocketError:(long long)arg2;
- (void)doAcceptFromSocket:(struct __CFSocket *)arg1 withNewNativeSocket:(int)arg2;
- (_Bool)connectSocketToAddress:(id)arg1 error:(id *)arg2;
- (_Bool)configureSocketAndReturnError:(id *)arg1;
- (_Bool)attachSocketsToRunLoop:(id)arg1 error:(id *)arg2;
- (_Bool)bindSocketToAddress:(id)arg1 error:(id *)arg2;
- (_Bool)createSocketForAddress:(id)arg1 error:(id *)arg2;
- (struct __CFSocket *)newAcceptSocketForAddress:(id)arg1 error:(id *)arg2;
- (void)doConnectTimeout:(id)arg1;
- (void)endConnectTimeout;
- (void)startConnectTimeout:(double)arg1;
- (_Bool)connectToAddress:(id)arg1 viaInterfaceAddress:(id)arg2 withTimeout:(double)arg3 error:(id *)arg4;
- (_Bool)connectToAddress:(id)arg1 withTimeout:(double)arg2 error:(id *)arg3;
- (_Bool)connectToAddress:(id)arg1 error:(id *)arg2;
- (_Bool)connectToHost:(id)arg1 onPort:(unsigned short)arg2 withTimeout:(double)arg3 error:(id *)arg4;
- (_Bool)connectToHost:(id)arg1 onPort:(unsigned short)arg2 error:(id *)arg3;
- (_Bool)acceptOnInterface:(id)arg1 port:(unsigned short)arg2 error:(id *)arg3;
- (_Bool)acceptOnPort:(unsigned short)arg1 error:(id *)arg2;
- (id)runLoopModes;
- (_Bool)removeRunLoopMode:(id)arg1;
- (_Bool)addRunLoopMode:(id)arg1;
- (_Bool)setRunLoopModes:(id)arg1;
- (_Bool)moveToRunLoop:(id)arg1;
- (void)enablePreBuffering;
- (void)runLoopUnscheduleWriteStream;
- (void)runLoopUnscheduleReadStream;
- (void)runLoopRemoveTimer:(id)arg1 mode:(id)arg2;
- (void)runLoopAddTimer:(id)arg1 mode:(id)arg2;
- (void)runLoopRemoveTimer:(id)arg1;
- (void)runLoopAddTimer:(id)arg1;
- (void)runLoopRemoveSource:(struct __CFRunLoopSource *)arg1 mode:(id)arg2;
- (void)runLoopAddSource:(struct __CFRunLoopSource *)arg1 mode:(id)arg2;
- (void)runLoopRemoveSource:(struct __CFRunLoopSource *)arg1;
- (void)runLoopAddSource:(struct __CFRunLoopSource *)arg1;
- (float)progressOfWriteReturningTag:(long long *)arg1 bytesDone:(unsigned long long *)arg2 total:(unsigned long long *)arg3;
- (float)progressOfReadReturningTag:(long long *)arg1 bytesDone:(unsigned long long *)arg2 total:(unsigned long long *)arg3;
- (struct __CFWriteStream *)getCFWriteStream;
- (struct __CFReadStream *)getCFReadStream;
- (struct __CFSocket *)getCFSocket;
- (_Bool)canSafelySetDelegate;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setUserData:(long long)arg1;
- (long long)userData;
- (void)checkForThreadSafety;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 userData:(long long)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

