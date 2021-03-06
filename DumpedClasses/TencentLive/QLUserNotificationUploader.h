//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QLUserNotificationSettingsUploader, QLUserNotificationTokenUploader;

@interface QLUserNotificationUploader : NSObject
{
    QLUserNotificationTokenUploader *_tokenUploader;
    QLUserNotificationSettingsUploader *_settingsUploader;
}

+ (id)sharedInstance;
@property(retain, nonatomic) QLUserNotificationSettingsUploader *settingsUploader; // @synthesize settingsUploader=_settingsUploader;
@property(retain, nonatomic) QLUserNotificationTokenUploader *tokenUploader; // @synthesize tokenUploader=_tokenUploader;
- (void).cxx_destruct;
- (void)upload;
- (void)saveTokenToAppGroups;
@property(retain) NSString *pushToken;

@end

