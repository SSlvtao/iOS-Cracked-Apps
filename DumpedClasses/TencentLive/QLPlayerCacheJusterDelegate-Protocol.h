//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol QLPlayerCacheJusterDelegate <NSObject>
- (void)setReportPublicStatus;
- (void)reportBeforePlayerCloseOrSwitch;
- (_Bool)playerCacheIsPlayingLive;
- (_Bool)playerCacheIsUserControlPaused;
- (long long)playerCacheLoadState;
- (long long)playerCachePlaybackState;
- (double)playerCacheCurrentPlaybackTime;
@end

