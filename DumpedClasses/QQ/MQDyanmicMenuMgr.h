//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQPublicAccountDataMgrProtocol.h"
#import "QRCodeScanDelegate.h"
#import "SelectLocationDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface MQDyanmicMenuMgr : NSObject <QQPublicAccountDataMgrProtocol, QRCodeScanDelegate, SelectLocationDelegate>
{
    long long _menuActionSeq;
    NSMutableDictionary *_menuUpdateParam;
    NSMutableDictionary *_menuActionDelegateArray;
    NSMutableArray *_lbsMenuActionArray;
    NSMutableArray *_scanMenuActionArray;
    NSMutableDictionary *_updateMenuDataSeqToUinMap;
    int _xo;
    NSMutableDictionary *_curActionMenuInfo;
    id <MQDyanmicMenuDelegate> _curDelegate;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shareInstance;
@property(nonatomic) id <MQDyanmicMenuDelegate> curDelegate; // @synthesize curDelegate=_curDelegate;
@property(retain, nonatomic) NSMutableDictionary *curActionMenuInfo; // @synthesize curActionMenuInfo=_curActionMenuInfo;
- (void)sendLBSFromArray:(struct CLLocationCoordinate2D *)arg1;
- (void)handleGetLocationFailInner;
- (void)handleRequestTimeout:(id)arg1;
- (void)handleGetLocationFail:(id)arg1;
- (void)handleGetLocationSucc:(id)arg1;
- (void)handleStartUpdateLocation:(id)arg1;
- (void)handleGetLocationEnd:(id)arg1;
- (void)startUpdateLocation;
- (void)removeLbsNotification;
- (_Bool)SendMenuEventRequest:(id)arg1 Seq:(long long *)arg2;
- (void)NotifyUserSelectLocation:(struct CLLocationCoordinate2D)arg1 address:(id)arg2;
- (void)scanViewController:(id)arg1 failWithReason:(id)arg2;
- (void)scanViewControllerDidCancel:(id)arg1;
- (void)scanViewController:(id)arg1 didScanResult:(id)arg2;
- (void)notificationHandle:(id)arg1;
- (long long)getNewMenuActionSeq;
- (void)removeObserver:(id)arg1;
- (void)responseMsgHandle_PAList:(id)arg1 msgType:(long long)arg2 netState:(_Bool)arg3 retCode:(long long)arg4 userInfo:(id)arg5;
- (void)responseMsgHandle_UpdatePublicAccountMenu:(id)arg1 msgType:(long long)arg2 netState:(_Bool)arg3 retCode:(long long)arg4 userInfo:(id)arg5;
- (void)updatePublicAccountCfgDelay:(id)arg1;
- (void)responseMsgHandle_MenuAction:(id)arg1 msgType:(long long)arg2 netState:(_Bool)arg3 retCode:(long long)arg4 userInfo:(id)arg5;
- (void)PublicAccountResponseMsgHandle:(id)arg1;
- (id)getPublicAccountCfg:(unsigned long long)arg1;
- (void)updatePublicAccountCfg:(unsigned long long)arg1;
- (_Bool)isNeedUpdate:(unsigned long long)arg1;
- (_Bool)isAllowLBS:(unsigned long long)arg1;
- (_Bool)sendLocation:(id)arg1 menuInfo:(id)arg2 uin:(unsigned long long)arg3 seq:(long long *)arg4 delegate:(id)arg5;
- (_Bool)onMenuAction_Event:(id)arg1 menuInfo:(id)arg2 uin:(unsigned long long)arg3 seq:(long long *)arg4 delegate:(id)arg5;
- (_Bool)onMenuAction_OpenURL:(id)arg1 menuInfo:(id)arg2 uin:(unsigned long long)arg3 seq:(long long *)arg4 delegate:(id)arg5;
- (_Bool)onMenuAction_Click:(id)arg1 menuInfo:(id)arg2 uin:(unsigned long long)arg3 seq:(long long *)arg4 delegate:(id)arg5;
- (_Bool)onMenuAction:(id)arg1 menuInfo:(id)arg2 uin:(unsigned long long)arg3 seq:(long long *)arg4 delegate:(id)arg5;
- (id)getPublicAccountMenu:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;
@property(retain, nonatomic) NSMutableDictionary *updateMenuDataSeqToUinMap; // @dynamic updateMenuDataSeqToUinMap;
@property(retain, nonatomic) NSMutableArray *scanMenuActionArray; // @dynamic scanMenuActionArray;
@property(retain, nonatomic) NSMutableArray *lbsMenuActionArray; // @dynamic lbsMenuActionArray;
@property(retain, nonatomic) NSMutableDictionary *menuActionDelegateArray; // @dynamic menuActionDelegateArray;
@property(retain, nonatomic) NSMutableDictionary *menuUpdateParam; // @dynamic menuUpdateParam;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

