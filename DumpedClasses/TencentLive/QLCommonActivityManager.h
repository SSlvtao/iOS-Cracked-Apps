//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QLRequestModelDelegate.h"
#import "QLTabBarConfigProtocol.h"

@class NSMapTable, NSMutableDictionary, NSString, QLActivityParticipateAuthority, QLActivityViewController, QLCommonActivityDataModel, UIView;

@interface QLCommonActivityManager : NSObject <QLRequestModelDelegate, QLTabBarConfigProtocol>
{
    QLActivityViewController *_activityFullScreenVC;
    UIView *_fromVCScreenShot;
    QLCommonActivityDataModel *_activityDataModel;
    QLActivityParticipateAuthority *_activityParticipateAuthority;
    NSMapTable *_activityTargetPages;
    NSMutableDictionary *_activityTargetPageManagerDic;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *activityTargetPageManagerDic; // @synthesize activityTargetPageManagerDic=_activityTargetPageManagerDic;
@property(retain, nonatomic) NSMapTable *activityTargetPages; // @synthesize activityTargetPages=_activityTargetPages;
@property(retain, nonatomic) QLActivityParticipateAuthority *activityParticipateAuthority; // @synthesize activityParticipateAuthority=_activityParticipateAuthority;
@property(retain, nonatomic) QLCommonActivityDataModel *activityDataModel; // @synthesize activityDataModel=_activityDataModel;
@property(retain, nonatomic) UIView *fromVCScreenShot; // @synthesize fromVCScreenShot=_fromVCScreenShot;
@property(retain, nonatomic) QLActivityViewController *activityFullScreenVC; // @synthesize activityFullScreenVC=_activityFullScreenVC;
- (void).cxx_destruct;
- (long long)guideViewShowNumberWithTabID:(unsigned long long)arg1 channelID:(id)arg2;
- (_Bool)guideViewCanStartActivityWithTabID:(unsigned long long)arg1 channelID:(id)arg2;
- (void)updataGuideViewHasShowData:(_Bool)arg1 tabID:(unsigned long long)arg2 channelID:(id)arg3;
- (_Bool)hasShowGuideViewInCurrentActivityWithTabID:(unsigned long long)arg1 channelID:(id)arg2;
- (id)getGuideViewImageWithTabID:(unsigned long long)arg1 channelID:(id)arg2;
- (void)userLoginStateChange:(_Bool)arg1;
- (void)saveActivityID:(id)arg1 activityKey:(id)arg2;
- (long long)activityPageShowNumberWithTabID:(unsigned long long)arg1 channelID:(id)arg2;
- (id)activityViewOfCurrentTargetPageTabID:(unsigned long long)arg1 channelID:(id)arg2;
- (long long)tabbarIconShowNumberWithTabID:(unsigned long long)arg1 channelID:(id)arg2;
- (_Bool)tabbarIconCanStartActivityWithTabID:(unsigned long long)arg1 channelID:(id)arg2;
- (id)configShowActivityTabID:(unsigned long long)arg1;
- (id)tabbarButtonConfig:(unsigned long long)arg1;
- (_Bool)activityViewisShowingWithTabID:(unsigned long long)arg1 channelID:(id)arg2;
- (id)gameIDOfCurrentTargetPageTabID:(unsigned long long)arg1 channelID:(id)arg2;
- (id)activityItemOFCurrentTargetPageTabID:(unsigned long long)arg1 channelID:(id)arg2;
- (long long)statusOfCurrentTargetPageTabID:(unsigned long long)arg1;
- (long long)statusOfCurrentTargetPageTabID:(unsigned long long)arg1 channelID:(id)arg2;
- (void)activityStatusChange:(long long)arg1 activityID:(id)arg2 activityKey:(id)arg3;
- (_Bool)currentActivityHasTimeOutWithTabID:(unsigned long long)arg1 channelID:(id)arg2;
- (id)currentActivityIDWithTabID:(unsigned long long)arg1 channelID:(id)arg2;
- (void)requestModel:(id)arg1 didFailedLoadWithError:(id)arg2;
- (void)updataOldActivityData:(id)arg1;
- (void)sliceArrayByActivityTargetPage:(id)arg1;
- (id)throwAwayTimeOutActivityFromArray:(id)arg1 serverTime:(double)arg2 activityID:(id)arg3;
- (id)sortFromArray:(id)arg1;
- (void)arrangeActivityDataFromSource:(id)arg1 currentServerTime:(double)arg2;
- (double)serverTime;
- (void)requestModelDidFinishLoad:(id)arg1;
- (void)registerActivitytargetPage:(id)arg1 tabID:(unsigned long long)arg2 channelID:(id)arg3;
- (void)loadActivityConfig:(int)arg1;
- (void)refreshConfigNotification:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)pressGameIconUrl:(id)arg1;
- (id)normalGameIconUrl:(id)arg1;
- (id)entryTabIconUrl:(id)arg1;
- (void)arrangeTabIconDataFromSource:(id)arg1;
- (void)setActivityTabIconModel:(id)arg1;
- (id)activityTabIconModel;
- (_Bool)hasShowGuideViewWithGameID:(id)arg1;
- (void)updataGuideViewHasShowData:(_Bool)arg1 gameID:(id)arg2;
- (id)closeIconImageUrl:(id)arg1;
- (id)h5LoadingViewImageUrl:(id)arg1;
- (id)guideViewImageUrl:(id)arg1;
- (void)arrangeGuideViewDataFromSource:(id)arg1;
- (void)setCacheTable:(id)arg1;
- (id)cacheTable;
- (void)setActivityGuideViewModel:(id)arg1;
- (id)activityGuideViewModel;
- (long long)pullRefreshStyleOfCurrentTargetPageTabID:(unsigned long long)arg1 channelID:(id)arg2;
- (id)colorOfPullRefreshBGView;
- (id)getPullRefreshCover;
- (struct CGSize)getPullRefreshCoverSize;
- (_Bool)shouldShowActivityRefreshView;
- (void)handlePullFreshData:(id)arg1 currentServerTime:(double)arg2;
- (void)setPullRefreshStatusCheckModel:(id)arg1;
- (id)pullRefreshStatusCheckModel;
- (void)setCurrentPullRefreshConfig:(id)arg1;
- (id)currentPullRefreshConfig;
- (void)setActivityPullFreshModel:(id)arg1;
- (id)activityPullFreshModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

