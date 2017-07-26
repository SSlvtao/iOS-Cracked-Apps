//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KKMediaPlayerEventProtocol.h"

@class KKMediaRootViewController, NSString, QLLoadingConifgStrategy;

@interface QLPlayerLoadingManager : NSObject <KKMediaPlayerEventProtocol>
{
    KKMediaRootViewController *_weakPlayerCtl;
    QLLoadingConifgStrategy *_loadingStrategy;
}

@property(retain, nonatomic) QLLoadingConifgStrategy *loadingStrategy; // @synthesize loadingStrategy=_loadingStrategy;
@property(nonatomic) __weak KKMediaRootViewController *weakPlayerCtl; // @synthesize weakPlayerCtl=_weakPlayerCtl;
- (void).cxx_destruct;
- (void)updatePlayerViewByPlayState:(int)arg1;
- (void)updatePlayerViewType;
- (void)didMediaPlayerStateChanged:(int)arg1 error:(id)arg2 playerCtl:(id)arg3;
- (long long)getCurrentPlayerLoadingViewType:(int)arg1 loadingInfo:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

