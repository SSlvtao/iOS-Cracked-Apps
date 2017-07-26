//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QLBottomRightDelegate.h"

@class NSString, NSTimer, UIButton, UIImageView;

@interface QLRemoteFloatViewController : NSObject <QLBottomRightDelegate>
{
    _Bool _isShowFloatView;
    UIButton *_btnControlEntry;
    id <NSObject> _playInfo;
    NSTimer *_tipsTimer;
    UIImageView *_tipsView;
}

+ (void)hidenRemoteFloatView:(_Bool)arg1;
@property(retain, nonatomic) UIImageView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) NSTimer *tipsTimer; // @synthesize tipsTimer=_tipsTimer;
@property(nonatomic) _Bool isShowFloatView; // @synthesize isShowFloatView=_isShowFloatView;
@property(retain, nonatomic) id <NSObject> playInfo; // @synthesize playInfo=_playInfo;
@property(retain, nonatomic) UIButton *btnControlEntry; // @synthesize btnControlEntry=_btnControlEntry;
- (void).cxx_destruct;
- (void)createTipsTimer;
- (void)destroyTipsTimer;
- (long long)getFastEnterDlnaPlayTipsCount;
- (void)updateFastEnterDlnaPlayTipsCount;
- (_Bool)isShowFastEnterDlnaPlayTips;
- (void)clickButton:(id)arg1;
- (void)disappearFastEnterPlayTips:(id)arg1;
- (void)clearFastEnterPlayTips;
- (void)onControlEntryClick:(id)arg1;
- (void)cleanTimer;
- (void)setStatusError:(_Bool)arg1;
- (void)showFloatView:(_Bool)arg1;
- (void)delayShowFloatView;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

