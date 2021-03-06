//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MASSStreamUnit.h"

@class ConnectTimer, DataResponseTimer, NSMutableData, NSString;

@interface MASSRecordingUploadTask : MASSStreamUnit
{
    _Bool _started;
    _Bool _requestComplate;
    _Bool _recordComplate;
    _Bool _neetCrypto;
    NSString *_taskId;
    NSString *_fromModel;
    NSString *_fileName;
    unsigned long long _fileSize;
    NSMutableData *_toSendTcpData;
    unsigned long long _tcpSended;
    NSMutableData *_tcpRspData;
    ConnectTimer *_connectTimer;
    DataResponseTimer *_rspTimer;
    NSString *_serverAddress;
    NSString *_traceId;
    long long _timeoutCount;
    NSString *_bizType;
    NSMutableData *_firstTmpData;
    NSMutableData *_wholeFile;
    long long _retryCount;
}

+ (id)initWithTaskId:(id)arg1 fileName:(id)arg2 firstData:(id)arg3 fromModel:(id)arg4 needCrypto:(_Bool)arg5;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSMutableData *wholeFile; // @synthesize wholeFile=_wholeFile;
@property(retain, nonatomic) NSMutableData *firstTmpData; // @synthesize firstTmpData=_firstTmpData;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(nonatomic) _Bool neetCrypto; // @synthesize neetCrypto=_neetCrypto;
@property(nonatomic) _Bool recordComplate; // @synthesize recordComplate=_recordComplate;
@property(nonatomic) _Bool requestComplate; // @synthesize requestComplate=_requestComplate;
@property(nonatomic) long long timeoutCount; // @synthesize timeoutCount=_timeoutCount;
@property _Bool started; // @synthesize started=_started;
@property(retain, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
@property(retain, nonatomic) NSString *serverAddress; // @synthesize serverAddress=_serverAddress;
@property(retain, nonatomic) DataResponseTimer *rspTimer; // @synthesize rspTimer=_rspTimer;
@property(retain, nonatomic) ConnectTimer *connectTimer; // @synthesize connectTimer=_connectTimer;
@property(retain, nonatomic) NSMutableData *tcpRspData; // @synthesize tcpRspData=_tcpRspData;
@property(nonatomic) unsigned long long tcpSended; // @synthesize tcpSended=_tcpSended;
@property(retain, nonatomic) NSMutableData *toSendTcpData; // @synthesize toSendTcpData=_toSendTcpData;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSString *fromModel; // @synthesize fromModel=_fromModel;
@property(retain, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
- (void).cxx_destruct;
- (id)toString;
- (id)getTaskLogInfo;
- (void)clearForNewRequest;
- (void)noticeRecordingUploadComplatedFileId:(id)arg1 jsonResult:(id)arg2;
- (void)appendDataContinue:(id)arg1 hasNext:(_Bool)arg2;
- (void)dealTcpRspData;
- (void)onDataComming;
- (void)onCloseHappens;
- (void)onDataCanSending;
- (void)onConnectComplate;
- (void)startRequest;
- (void)performStartAfter:(double)arg1;
- (long long)fillHttpRequestStart;
- (id)init;
- (void)dealloc;

@end

