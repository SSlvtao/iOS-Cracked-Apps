//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APMidasCommChannel.h"

@interface APMidasMcardChannel : APMidasCommChannel
{
}

- (void)bizFinished:(int)arg1 provideState:(int)arg2 isContinue:(_Bool)arg3;
- (void)toMcardResultCtrl:(id)arg1;
- (void)onSaveSuccess;
- (void)onSaveErr:(long long)arg1 inner:(id)arg2 errMsg:(id)arg3;
- (void)onSaveNetErr:(long long)arg1;
- (void)doBuy;
- (void)doGetTokenAndBuy;
- (void)channelFlow;

@end

