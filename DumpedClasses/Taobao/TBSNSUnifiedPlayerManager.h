//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBSNSUnifiedPlayerManager : NSObject
{
    id _playingComponent;
    unsigned long long _autoPlayDegreeState;
    unsigned long long _goodsVideoDegreeState;
    unsigned long long _videoListDegreeState;
}

+ (id)sharedInstance;
@property(nonatomic) unsigned long long videoListDegreeState; // @synthesize videoListDegreeState=_videoListDegreeState;
@property(nonatomic) unsigned long long goodsVideoDegreeState; // @synthesize goodsVideoDegreeState=_goodsVideoDegreeState;
@property(nonatomic) unsigned long long autoPlayDegreeState; // @synthesize autoPlayDegreeState=_autoPlayDegreeState;
@property(nonatomic) __weak id playingComponent; // @synthesize playingComponent=_playingComponent;
- (void).cxx_destruct;
- (void)resetOrangeState;
- (void)onOrangeChanged:(id)arg1;
- (void)stopAndDestroyCurPlayer;
- (id)init;

@end

