//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QLVideoBufferingMessageInfo : NSObject
{
    _Bool _isUserSildeUp;
    long long _normalBufferingReason;
    long long _format;
    long long _videoPlayTime;
    NSString *_url;
    long long _videoPlayTimeBeginSeek;
    long long _videoPlayTimeEndSeek;
    NSString *_errorCode;
    long long _scene;
    long long _levent;
}

@property(nonatomic) long long levent; // @synthesize levent=_levent;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool isUserSildeUp; // @synthesize isUserSildeUp=_isUserSildeUp;
@property(copy, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) long long videoPlayTimeEndSeek; // @synthesize videoPlayTimeEndSeek=_videoPlayTimeEndSeek;
@property(nonatomic) long long videoPlayTimeBeginSeek; // @synthesize videoPlayTimeBeginSeek=_videoPlayTimeBeginSeek;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) long long videoPlayTime; // @synthesize videoPlayTime=_videoPlayTime;
@property(nonatomic) long long format; // @synthesize format=_format;
@property(nonatomic) long long normalBufferingReason; // @synthesize normalBufferingReason=_normalBufferingReason;
- (void).cxx_destruct;
- (id)initWithNormalBufferingReason:(long long)arg1 format:(long long)arg2 videoPlayTime:(long long)arg3 url:(id)arg4 videoPlayTimeBeginSeek:(long long)arg5 videoPlayTimeEndSeek:(long long)arg6 errorCode:(id)arg7 isUserSildeUp:(_Bool)arg8 scene:(long long)arg9 levent:(long long)arg10;

@end

