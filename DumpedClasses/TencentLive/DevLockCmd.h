//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface DevLockCmd : NSObject
{
    id wloginSdkHelper;
    unsigned int dwUin;
    unsigned short wSysType;
    unsigned short wMsgType;
    unsigned int dwAppId;
    unsigned int dwSubAppId;
    unsigned int dwPkgSeq;
    unsigned short wLocalID;
    unsigned short wDevLockVer;
    BOOL cEncrypt;
    BOOL cReTry;
    unsigned int dwSmsAppId;
    NSMutableDictionary *devLockTlvList;
    unsigned short wMsgType_QueryStatus;
    unsigned short wMsgType_GetSms;
    unsigned short wMsgType_CheckSms;
    unsigned short wMsgType_CloseStatus;
}

@property(readonly) NSMutableDictionary *devLockTlvList; // @synthesize devLockTlvList;
@property unsigned short wMsgType_CloseStatus; // @synthesize wMsgType_CloseStatus;
@property unsigned short wMsgType_CheckSms; // @synthesize wMsgType_CheckSms;
@property unsigned short wMsgType_GetSms; // @synthesize wMsgType_GetSms;
@property unsigned short wMsgType_QueryStatus; // @synthesize wMsgType_QueryStatus;
@property BOOL cReTry; // @synthesize cReTry;
@property BOOL cEncrypt; // @synthesize cEncrypt;
@property unsigned short wDevLockVer; // @synthesize wDevLockVer;
@property unsigned short wLocalID; // @synthesize wLocalID;
@property unsigned int dwPkgSeq; // @synthesize dwPkgSeq;
@property unsigned int dwSubAppId; // @synthesize dwSubAppId;
@property unsigned int dwAppId; // @synthesize dwAppId;
@property unsigned short wMsgType; // @synthesize wMsgType;
@property unsigned short wSysType; // @synthesize wSysType;
@property unsigned int dwUin; // @synthesize dwUin;
- (_Bool)getServerResult:(unsigned int *)arg1 andTips:(id)arg2;
- (id)getSppKey;
- (_Bool)getSmsInfo:(unsigned short *)arg1 andTimeLimit:(unsigned short *)arg2;
- (id)getQuerySig;
- (_Bool)decodeDevLockTlvList:(const char *)arg1 andLeftLen:(int *)arg2;
- (_Bool)addBasicTlv:(id)arg1;
- (int)encodeDevLockHead:(id)arg1 withPkgLen:(unsigned short)arg2;
- (int)decodeDevLockHead:(char **)arg1 andBuffLen:(int *)arg2;
- (int)encodeCheckDevLockSms:(id)arg1 andPkgBuff:(id)arg2 withCode:(id)arg3 withSppKey:(id)arg4;
- (int)encodeAskDevLockSms:(id)arg1 andPkgBuff:(id)arg2;
- (int)closeDevLockSec:(id)arg1 andPkgBuff:(id)arg2;
- (int)encodeQueryDevLockStatus:(id)arg1 andPkgBuff:(id)arg2;
- (int)addClientAppInfoTlv:(id)arg1 andPkgBuff:(id)arg2;
- (id)getUinAccount:(id)arg1;
- (void)resetProtocol;
- (void)dealloc;
- (id)initWithSdk:(id)arg1 andWTAppid:(unsigned int)arg2 andWTSubAppId:(unsigned int)arg3 andSmsAppId:(unsigned int)arg4;

@end

