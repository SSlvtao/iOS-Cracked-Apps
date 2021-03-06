//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTMyCtripNonOrderStatisticsCacheBean, CTMyCtripOrderStatisticsCacheBean, CTServiceController, NSString;

@interface CTMyCtripServiceManager : NSObject
{
    CTMyCtripNonOrderStatisticsCacheBean *_myCtripNonOrderStatisticsCacheBean;
    CTMyCtripOrderStatisticsCacheBean *_myCtripOrderStatisticsCacheBean;
    NSString *_toPayTime;
    NSString *_toCommentTime;
    NSString *_toGoTime;
    CDUnknownBlockType _afterGetOrderReminder;
    CDUnknownBlockType _afterGetOrderData;
    CDUnknownBlockType _afterGetTicketData;
    CDUnknownBlockType _afterGetUserAsset;
    CTServiceController *_serviceController;
}

+ (id)sharedInstance;
@property(retain, nonatomic) CTServiceController *serviceController; // @synthesize serviceController=_serviceController;
@property(copy, nonatomic) CDUnknownBlockType afterGetUserAsset; // @synthesize afterGetUserAsset=_afterGetUserAsset;
@property(copy, nonatomic) CDUnknownBlockType afterGetTicketData; // @synthesize afterGetTicketData=_afterGetTicketData;
@property(copy, nonatomic) CDUnknownBlockType afterGetOrderData; // @synthesize afterGetOrderData=_afterGetOrderData;
@property(copy, nonatomic) CDUnknownBlockType afterGetOrderReminder; // @synthesize afterGetOrderReminder=_afterGetOrderReminder;
- (void).cxx_destruct;
- (void)clearUserDefaults;
- (void)clearPocketData;
- (void)clearAllOrderData;
- (void)clearToGoOrderCount;
- (void)clearToCommentOrderCount;
- (void)clearToPayOrderCount;
- (id)redDotRequestArray;
- (void)sendPocketService;
- (void)sendOrderRedDotService;
- (void)sendOrderReminderRequest;
- (id)init;

@end

