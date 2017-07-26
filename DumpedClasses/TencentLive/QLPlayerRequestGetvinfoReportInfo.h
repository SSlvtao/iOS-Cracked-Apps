//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QLPlayerRequestGetvinfoReportInfo : NSObject
{
    _Bool _isNeedReport;
    NSString *_ip;
    long long _testid;
    long long _dltype;
    long long _fmt;
    long long _rate;
    long long _clip;
    long long _status;
    long long _type;
    double _duration;
    NSString *_errorCode;
    long long _freetype;
    long long _downloadkit;
    long long _online;
    double _endTime;
    long long _cdnid;
}

@property(nonatomic) _Bool isNeedReport; // @synthesize isNeedReport=_isNeedReport;
@property(nonatomic) long long cdnid; // @synthesize cdnid=_cdnid;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long online; // @synthesize online=_online;
@property(nonatomic) long long downloadkit; // @synthesize downloadkit=_downloadkit;
@property(nonatomic) long long freetype; // @synthesize freetype=_freetype;
@property(copy, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long clip; // @synthesize clip=_clip;
@property(nonatomic) long long rate; // @synthesize rate=_rate;
@property(nonatomic) long long fmt; // @synthesize fmt=_fmt;
@property(nonatomic) long long dltype; // @synthesize dltype=_dltype;
@property(nonatomic) long long testid; // @synthesize testid=_testid;
@property(copy, nonatomic) NSString *ip; // @synthesize ip=_ip;
- (void).cxx_destruct;
- (id)initWithIp:(id)arg1 testid:(long long)arg2 dltype:(long long)arg3 fmt:(long long)arg4 rate:(long long)arg5 clip:(long long)arg6 status:(long long)arg7 type:(long long)arg8 duration:(double)arg9 errorCode:(id)arg10 freetype:(long long)arg11 downloadkit:(long long)arg12 online:(long long)arg13 endTime:(double)arg14 cdnid:(long long)arg15;

@end

