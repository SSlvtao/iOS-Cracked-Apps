//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SPaySignal : NSObject
{
    NSString *_orderID;
    NSString *_message;
    unsigned long long _style;
    unsigned long long _handleType;
}

+ (id)signalForCustomEventWithOrderID:(id)arg1 message:(id)arg2 displayStyle:(unsigned long long)arg3 handleType:(unsigned long long)arg4;
+ (id)signalForPayResultChanged:(unsigned long long)arg1 withOrderID:(id)arg2 message:(id)arg3 updateImmediately:(_Bool)arg4;
+ (id)signalForFeeChangedWithOrderID:(id)arg1 message:(id)arg2;
@property(nonatomic) unsigned long long handleType; // @synthesize handleType=_handleType;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *orderID; // @synthesize orderID=_orderID;
- (void).cxx_destruct;
- (id)initWithOrderID:(id)arg1 message:(id)arg2 displayStyle:(unsigned long long)arg3 handleType:(unsigned long long)arg4;

@end

