//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface LSSyncLiveSecurityCloseInfo : NSObject
{
    int _userType;
    NSString *_bizType;
    NSString *_liveId;
    NSString *_tipMessage;
    double _time;
}

+ (id)instanceWithDic:(id)arg1;
@property(nonatomic) double time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *tipMessage; // @synthesize tipMessage=_tipMessage;
@property(nonatomic) int userType; // @synthesize userType=_userType;
@property(retain, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
- (void).cxx_destruct;

@end
