//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSString;

@interface SPDYConfiguration : NSObject <NSCopying>
{
    _Bool _enableSettingsMinorVersion;
    _Bool _enableTCPNoDelay;
    _Bool _enableProxy;
    _Bool _enforceSessionPoolCorrectness;
    unsigned long long _sessionPoolSize;
    unsigned long long _sessionReceiveWindow;
    unsigned long long _streamReceiveWindow;
    unsigned long long _headerCompressionLevel;
    NSDictionary *_tlsSettings;
    NSString *_proxyHost;
    long long _proxyPort;
}

+ (id)defaultConfiguration;
+ (void)initialize;
@property _Bool enforceSessionPoolCorrectness; // @synthesize enforceSessionPoolCorrectness=_enforceSessionPoolCorrectness;
@property long long proxyPort; // @synthesize proxyPort=_proxyPort;
@property(retain) NSString *proxyHost; // @synthesize proxyHost=_proxyHost;
@property _Bool enableProxy; // @synthesize enableProxy=_enableProxy;
@property _Bool enableTCPNoDelay; // @synthesize enableTCPNoDelay=_enableTCPNoDelay;
@property(retain) NSDictionary *tlsSettings; // @synthesize tlsSettings=_tlsSettings;
@property _Bool enableSettingsMinorVersion; // @synthesize enableSettingsMinorVersion=_enableSettingsMinorVersion;
@property unsigned long long headerCompressionLevel; // @synthesize headerCompressionLevel=_headerCompressionLevel;
@property unsigned long long streamReceiveWindow; // @synthesize streamReceiveWindow=_streamReceiveWindow;
@property unsigned long long sessionReceiveWindow; // @synthesize sessionReceiveWindow=_sessionReceiveWindow;
@property unsigned long long sessionPoolSize; // @synthesize sessionPoolSize=_sessionPoolSize;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

