//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QLVideoLoadMessageInfo : NSObject
{
    _Bool _isChangeFormat;
    NSString *_url;
    long long _cdnType;
    long long _urlIndex;
    long long _formatChangeType;
    long long _bufferduration;
    long long _formatChangeReason;
    long long _isAuto;
    long long _format;
    long long _videoPlayTimeBeginChangeFormat;
    long long _videoPlayTimeEndChangeFormat;
    NSString *_errorCode;
    NSString *_cdnuip;
    NSString *_cdnip;
    long long _playertype;
    long long _speed;
    long long _p2p;
}

@property(nonatomic) long long p2p; // @synthesize p2p=_p2p;
@property(nonatomic) long long speed; // @synthesize speed=_speed;
@property(nonatomic) long long playertype; // @synthesize playertype=_playertype;
@property(copy, nonatomic) NSString *cdnip; // @synthesize cdnip=_cdnip;
@property(copy, nonatomic) NSString *cdnuip; // @synthesize cdnuip=_cdnuip;
@property(nonatomic) _Bool isChangeFormat; // @synthesize isChangeFormat=_isChangeFormat;
@property(copy, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) long long videoPlayTimeEndChangeFormat; // @synthesize videoPlayTimeEndChangeFormat=_videoPlayTimeEndChangeFormat;
@property(nonatomic) long long videoPlayTimeBeginChangeFormat; // @synthesize videoPlayTimeBeginChangeFormat=_videoPlayTimeBeginChangeFormat;
@property(nonatomic) long long format; // @synthesize format=_format;
@property(nonatomic) long long isAuto; // @synthesize isAuto=_isAuto;
@property(nonatomic) long long formatChangeReason; // @synthesize formatChangeReason=_formatChangeReason;
@property(nonatomic) long long bufferduration; // @synthesize bufferduration=_bufferduration;
@property(nonatomic) long long formatChangeType; // @synthesize formatChangeType=_formatChangeType;
@property(nonatomic) long long urlIndex; // @synthesize urlIndex=_urlIndex;
@property(nonatomic) long long cdnType; // @synthesize cdnType=_cdnType;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)initWithUrl:(id)arg1 cdnType:(long long)arg2 urlIndex:(long long)arg3 formatChangeType:(long long)arg4 bufferduration:(long long)arg5 formatChangeReason:(long long)arg6 isAuto:(long long)arg7 format:(long long)arg8 videoPlayTimeBeginChangeFormat:(long long)arg9 videoPlayTimeEndChangeFormat:(long long)arg10 errorCode:(id)arg11 isChangeFormat:(_Bool)arg12 cdnuip:(id)arg13 cdnip:(id)arg14 playertype:(long long)arg15 speed:(long long)arg16 p2p:(long long)arg17;

@end

