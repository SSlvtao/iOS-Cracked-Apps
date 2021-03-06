//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TMapBeaconPersistObject.h"

#import "NSMutableCopying.h"

@class NSMutableDictionary, NSString;

@interface TMapBeaconEventRecord : TMapBeaconPersistObject <NSMutableCopying>
{
    _Bool isSuccess;
    _Bool isRealEvent;
    int eventType;
    NSString *apn;
    NSString *srcIp;
    NSString *eventName;
    NSString *eventValue;
    long long eventTime;
    long long elapse;
    long long packageSize;
    NSMutableDictionary *params;
}

+ (id)initWithEName:(id)arg1 eValue:(id)arg2 apn:(id)arg3 srcIp:(id)arg4 eTime:(long long)arg5 elapse:(long long)arg6 pkgSize:(long long)arg7 isSuccess:(_Bool)arg8;
@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params;
@property(nonatomic) _Bool isRealEvent; // @synthesize isRealEvent;
@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess;
@property(nonatomic) long long packageSize; // @synthesize packageSize;
@property(nonatomic) long long elapse; // @synthesize elapse;
@property(nonatomic) int eventType; // @synthesize eventType;
@property(nonatomic) long long eventTime; // @synthesize eventTime;
@property(retain, nonatomic) NSString *eventValue; // @synthesize eventValue;
@property(retain, nonatomic) NSString *eventName; // @synthesize eventName;
@property(retain, nonatomic) NSString *srcIp; // @synthesize srcIp;
@property(retain, nonatomic) NSString *apn; // @synthesize apn;
- (void).cxx_destruct;
- (void)dealloc;
- (id)createWUPModel;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

