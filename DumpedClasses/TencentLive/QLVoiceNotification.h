//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QLVoiceNotification : NSObject
{
    NSString *_localPath;
    NSString *_voiceID;
    long long _errorCode;
}

@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *voiceID; // @synthesize voiceID=_voiceID;
@property(retain, nonatomic) NSString *localPath; // @synthesize localPath=_localPath;
- (void).cxx_destruct;

@end

