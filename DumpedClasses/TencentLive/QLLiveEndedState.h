//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLSeeBackState.h"

@interface QLLiveEndedState : QLSeeBackState
{
}

- (void)seeBackToEnded:(id)arg1;
- (void)pollingLiveEnded:(id)arg1;
- (void)pause:(id)arg1;
- (void)play:(id)arg1;
- (void)liveChangeToSeeBack:(id)arg1;
- (void)seeBackChangeToLive:(id)arg1;
- (void)startSupportSeeBack:(id)arg1;
- (void)startPlayLive:(id)arg1;
- (long long)currentLiveState;
- (_Bool)isSeeBackState;

@end

