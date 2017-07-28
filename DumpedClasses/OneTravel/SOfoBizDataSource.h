//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSCarBizDataSource.h"

#import "SActiveBoardsComDataSource.h"
#import "SBulletinBoardsDataSource.h"
#import "SCreateOrderDataSourceProtocol.h"
#import "SOrderTrajComSource.h"
#import "SPosMarkerDataSource.h"

@class NSNumber, NSString, ONEDriverAnnotaion, SOfoLockModel, SOfoPathModel;

@interface SOfoBizDataSource : SSCarBizDataSource <SActiveBoardsComDataSource, SCreateOrderDataSourceProtocol, SOrderTrajComSource, SPosMarkerDataSource, SBulletinBoardsDataSource>
{
    _Bool _inHomeWalkingNav;
    NSString *_bicycleNo;
    NSNumber *_isPlateEditing;
    ONEDriverAnnotaion *_bicycleAnnotation;
    SOfoPathModel *_homePathModel;
}

@property(retain, nonatomic) SOfoPathModel *homePathModel; // @synthesize homePathModel=_homePathModel;
@property(nonatomic, getter=isInHomeWalkingNav) _Bool inHomeWalkingNav; // @synthesize inHomeWalkingNav=_inHomeWalkingNav;
@property(retain, nonatomic) ONEDriverAnnotaion *bicycleAnnotation; // @synthesize bicycleAnnotation=_bicycleAnnotation;
@property(retain, nonatomic) NSNumber *isPlateEditing; // @synthesize isPlateEditing=_isPlateEditing;
@property(retain, nonatomic) NSString *bicycleNo; // @synthesize bicycleNo=_bicycleNo;
- (void).cxx_destruct;
@property(readonly, nonatomic) SOfoLockModel *lock;
- (id)getCurrentOutToken;
- (id)getCurrentOutTradeID;
- (id)getCurrentOrderId;
- (id)biz_EnsureModel;
- (id)init;
- (void)requestOrderFinished:(CDUnknownBlockType)arg1;
- (id)titleForActButtomCom;
- (id)buttonModelForActButtonCom;
- (_Bool)shouldShowMisActive;
- (_Bool)shouldShowActiveH5Web;
- (id)entranceButtonModelForActiveBoardsCom;
- (id)ofoActivityAdditionParam;
- (id)webViewConfForActiveBoardsCom;
- (unsigned long long)displayTypeForActiveBoardsCom:(_Bool)arg1;
- (_Bool)shouldShowActivitySheetView;
- (id)activitySheetTitleForActiveBoardsCom;
- (id)configOperationButton:(id)arg1;
- (id)activityButtonConfs;
- (void)activeBoardsCom:(id)arg1 activityData:(CDUnknownBlockType)arg2 showStyle:(long long)arg3;
- (id)displayKMWithMeter:(long long)arg1;
- (id)displayTimeStringWithSecond:(long long)arg1;
- (_Bool)shouldCloseInfoCard:(_Bool)arg1;
- (id)viewModelForBicycleNumberCom;
- (void)sendOrderWithOrderModel:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)getCreateOrderModel:(CDUnknownBlockType)arg1;
- (void)cleanDataBeforeCloseAndPopToRoot;
- (id)getOfoHomeBubbleModel;
@property(nonatomic) double lastTimeStamp;
- (id)getOfoBubbleModel;
- (long long)lo_lockTypeInPage:(long long)arg1;
- (void)reportPathLocation;
- (id)currentOrder;
- (id)orderTrajComDestAddrModel;
- (id)orderTrajComStartAddrModel;
- (_Bool)isOrderTrajOpen;
- (_Bool)orderIsInWaitService;
- (_Bool)shouldShowPaidAlert;
- (_Bool)posMarkerEnableRecommendDestination;
- (_Bool)posMarkerShouldShowAddrNameAnnotation:(id)arg1;
- (unsigned long long)posMarkerShowTypeInServicePage;
- (id)posMarkerComDestAddrModelForScene:(long long)arg1;
- (id)posMarkerComStartAddrModelForScene:(long long)arg1;
- (_Bool)posMarkerShouldShowRadarView;
- (id)posMarkerStartDesPosModelForCom:(id)arg1;
- (id)dataModelForRedPacketCom;
- (void)bulletinBoardsDidTimerFinishedWorkForCard:(id)arg1 actionHandler:(CDUnknownBlockType)arg2;
- (void)bulletinBoardsWillHideWithPageMode:(unsigned long long)arg1;
- (void)bulletinBoardsWillShowWithPageMode:(unsigned long long)arg1;
- (void)bulletinBoardsDidInitedWithPageMode:(unsigned long long)arg1;
- (void)bulletinBoardsClickedCard:(id)arg1 actBtnAtIndex:(long long)arg2 actionHandler:(CDUnknownBlockType)arg3;
- (void)updateNearBicycleCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
