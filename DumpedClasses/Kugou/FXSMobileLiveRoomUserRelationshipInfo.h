//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FXBaseJSONModel.h"

@interface FXSMobileLiveRoomUserRelationshipInfo : FXBaseJSONModel
{
    _Bool _isManager;
    _Bool _isGuard;
    long long _isFollow;
    long long _sendTotalStarNum;
    long long _vipLevel;
}

@property(nonatomic) _Bool isGuard; // @synthesize isGuard=_isGuard;
@property(nonatomic) _Bool isManager; // @synthesize isManager=_isManager;
@property(nonatomic) long long vipLevel; // @synthesize vipLevel=_vipLevel;
@property(nonatomic) long long sendTotalStarNum; // @synthesize sendTotalStarNum=_sendTotalStarNum;
@property(nonatomic) long long isFollow; // @synthesize isFollow=_isFollow;

@end

