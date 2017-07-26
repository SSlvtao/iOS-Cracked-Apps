//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WDKConfig : NSObject
{
    _Bool _bAutoExceptionCaught;
    _Bool _bConnToDebugSrv;
    unsigned long long _unTimeTickCycle;
    _Bool _bAutoGetGuid;
    NSString *_strGuidDomain;
    CDUnknownBlockType _crashCallback;
}

+ (id)getInstance;
@property(copy, nonatomic) CDUnknownBlockType crashCallback; // @synthesize crashCallback=_crashCallback;
@property(retain, nonatomic) NSString *guidDomain; // @synthesize guidDomain=_strGuidDomain;
@property _Bool autoGetGuid; // @synthesize autoGetGuid=_bAutoGetGuid;
@property(nonatomic) _Bool connToDebugSrv; // @synthesize connToDebugSrv=_bConnToDebugSrv;
@property(nonatomic) unsigned long long timeTickCycle; // @synthesize timeTickCycle=_unTimeTickCycle;
- (void)dealloc;
@property(retain, nonatomic) NSString *omgbizid;
@property(retain, nonatomic) NSString *omgid;
@property unsigned int maxEventLength;
@property(nonatomic) id <WDKConsoleDelegate> consoleDelegate;
@property(nonatomic) _Bool enabledConsole;
- (id)getCustomProperty:(id)arg1 default:(id)arg2;
@property int maxSessionStatReportCount;
@property _Bool statEnable;
@property(retain, nonatomic) NSString *customerAppVersion;
@property(retain, nonatomic) NSString *customerUserID;
@property(retain, nonatomic) NSString *qq;
@property _Bool autoExceptionCaught;
@property _Bool smartReporting;
@property unsigned int maxParallelTimingEvents;
@property unsigned int sendPeriodMinutes;
@property unsigned int maxSendRetryCount;
@property unsigned int minBatchReportCount;
@property unsigned int maxLoadEventCount;
@property unsigned int maxStoreEventCount;
@property(retain, nonatomic) NSString *channel;
@property(retain, nonatomic) NSString *appkey;
@property int reportStrategy;
@property unsigned int sessionTimeoutSecs;
@property _Bool debugEnable;
- (id)init;

@end

