//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface PersonalInfoLiveWorkEntity : NSObject
{
    _Bool _onLive;
    long long _roomId;
    double _lastLiveTime;
    long long _total;
    long long _liveType;
    NSArray *_mvList;
}

@property(retain, nonatomic) NSArray *mvList; // @synthesize mvList=_mvList;
@property(nonatomic) long long liveType; // @synthesize liveType=_liveType;
@property(nonatomic) long long total; // @synthesize total=_total;
@property(nonatomic) _Bool onLive; // @synthesize onLive=_onLive;
@property(nonatomic) double lastLiveTime; // @synthesize lastLiveTime=_lastLiveTime;
@property(nonatomic) long long roomId; // @synthesize roomId=_roomId;
- (void).cxx_destruct;

@end

