//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SSDeviceHelper : NSObject
{
}

+ (_Bool)passwordLegalCheck:(id)arg1;
+ (int)iphoneType;
+ (void)dismissAlertViews;
+ (id)formatMobileNO:(id)arg1;
+ (id)hideRule:(id)arg1 hideType:(int)arg2;
+ (void)callPhoneNumberNoAlert:(id)arg1;
+ (id)getCarrier;
+ (_Bool)hasProviderInfo;
+ (_Bool)deviceHasSMSModule;
+ (_Bool)hasSmsAbility;
+ (_Bool)hasSIMCard;
+ (void)callPhoneNumber:(id)arg1 fromView:(id)arg2;
+ (_Bool)canSendText;
+ (_Bool)canMakeCall;
+ (id)wirelessMacAddress;

@end

