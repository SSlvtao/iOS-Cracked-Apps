//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ONEBusinessModule.h"

@class NSString;

@interface DGPGongjiaoDelegate : NSObject <ONEBusinessModule>
{
}

+ (id)businessId;
+ (id)acckey;
+ (void)load;
- (_Bool)shouldProductLineShow:(id)arg1;
- (void)product:(id)arg1 openURL:(id)arg2 info:(id)arg3;
- (_Bool)product:(id)arg1 canOpenURL:(id)arg2 info:(id)arg3;
- (void)product:(id)arg1 mainMenuHistoryOrderEvent:(id)arg2;
- (_Bool)product:(id)arg1 didReceiveRemoteNotifactionMsg:(id)arg2;
- (_Bool)product:(id)arg1 isCurrentStateBusying:(id)arg2;
- (void)product:(id)arg1 initWithId:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

