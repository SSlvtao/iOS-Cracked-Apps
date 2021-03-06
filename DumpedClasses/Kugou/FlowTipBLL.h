//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KGGraphicsSheetDelegate.h"

@class NSLock, NSString;

@interface FlowTipBLL : NSObject <KGGraphicsSheetDelegate>
{
    _Bool _hadAgree;
    _Bool _isAsking;
    NSLock *_askLock;
    NSString *_showTip;
    long long _flowTipType;
}

+ (id)defaultFlowTip;
@property(nonatomic) long long flowTipType; // @synthesize flowTipType=_flowTipType;
@property(retain, nonatomic) NSString *showTip; // @synthesize showTip=_showTip;
@property(retain, nonatomic) NSLock *askLock; // @synthesize askLock=_askLock;
@property(nonatomic) _Bool isAsking; // @synthesize isAsking=_isAsking;
@property(nonatomic) _Bool hadAgree; // @synthesize hadAgree=_hadAgree;
- (void).cxx_destruct;
- (void)closeSettingSwitch;
- (void)setAgree:(_Bool)arg1;
- (void)goToUnicomHtml;
- (void)openFreeView;
- (void)graphicsSheet:(id)arg1 clickedLinkText:(id)arg2;
- (void)graphicsSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showFlowTipSheet;
- (id)creatGraphicsModel;
- (void)showAskUseFlowView;
- (_Bool)canUseFlowWithTip:(id)arg1 withFlowSwitch:(_Bool)arg2;
- (void)askFlowTip:(id)arg1 withFlowSwitch:(_Bool)arg2 withContinueBlock:(CDUnknownBlockType)arg3;
- (_Bool)canUseBigFlowWithFlowSwitch:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

