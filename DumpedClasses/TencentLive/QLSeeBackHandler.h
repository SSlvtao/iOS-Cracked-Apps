//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QLSeeBackState;

@interface QLSeeBackHandler : NSObject
{
    id <QLSeeBackHandlerDelegate> _delegate;
    QLSeeBackState *_seeBackState;
}

@property(retain, nonatomic) QLSeeBackState *seeBackState; // @synthesize seeBackState=_seeBackState;
@property(nonatomic) __weak id <QLSeeBackHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)seeBackToEnded;
- (void)pollingLiveEnded;
- (void)endRender;
- (void)startRender;
- (void)pause;
- (void)play;
- (void)liveChangeToSeeBack;
- (void)seeBackChangeToLive;
- (void)startSupportSeeBack;
- (void)startPlayLive;
- (void)onSeekEndTime:(long long)arg1;
- (void)resetPlayUrl;
- (void)onVideoInfoPrepared:(id)arg1;
- (void)changeSeeBackState:(id)arg1;
- (id)getCurrentSeeBackState;
- (id)init;

@end

