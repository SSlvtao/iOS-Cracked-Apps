//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NMURLRouterManager : NSObject
{
}

+ (id)schemeForUser:(id)arg1 eventId:(id)arg2;
+ (id)schemeForUser:(id)arg1 isTabRelated:(_Bool)arg2;
+ (id)schemeForUser:(id)arg1;
+ (id)schemeForArtist:(id)arg1 isTabRelated:(_Bool)arg2;
+ (id)schemeForArtist:(id)arg1;
+ (id)schemeForComment:(id)arg1;
+ (id)schemeForEvent:(id)arg1;
+ (id)schemeForResource:(id)arg1;
+ (void)_pushViewController:(id)arg1 animated:(_Bool)arg2;
+ (void)_doClearJobAndGotoTab:(long long)arg1 pushViewController:(id)arg2 animated:(_Bool)arg3;
+ (void)_pushViewController:(id)arg1 routerType:(long long)arg2 selectedTab:(long long)arg3;
+ (void)_pushViewController:(id)arg1 routerType:(long long)arg2;
+ (id)defaultManager;
+ (void)flushActions;
+ (id)actions;
- (void)_registToplistScheme:(id)arg1;
- (void)_registPlayingViewScheme:(id)arg1;
- (void)_registSubjectScheme:(id)arg1;
- (void)_registLocalEventPage:(id)arg1;
- (void)_registRNScheme:(id)arg1;
- (void)_registWebScheme:(id)arg1;
- (void)_registCommentScheme:(id)arg1;
- (void)_registPlaylistScheme:(id)arg1;
- (void)_registMVScheme:(id)arg1;
- (void)_registLiveScheme:(id)arg1;
- (void)_registLocalTabScheme:(id)arg1;
- (void)_registEventScheme:(id)arg1;
- (void)_registDjRadioScheme:(id)arg1;
- (void)_registArtistScheme:(id)arg1;
- (void)_registTopicScheme:(id)arg1;
- (void)_registAlbumScheme:(id)arg1;
- (void)_registActivityScheme:(id)arg1;
- (void)_registUserScheme:(id)arg1;
- (void)_registSystemSetting:(id)arg1;
- (void)_registScancode:(id)arg1;
- (void)_registSubjectListScheme:(id)arg1;
- (void)_registClearHistoryScheme:(id)arg1;
- (void)_registStopPlayScheme:(id)arg1;
- (void)_registPlayDjProgramScheme:(id)arg1;
- (void)_registSongBatchScheme:(id)arg1;
- (void)_registSongScheme:(id)arg1;
- (void)_registFeedbackScheme:(id)arg1;
- (void)_registAlarmClockScheme:(id)arg1;
- (void)_registPrivateMessageScheme:(id)arg1;
- (void)_registSettingScheme:(id)arg1;
- (void)_registShareResourceScheme:(id)arg1;
- (void)_registPasteboardScheme:(id)arg1;
- (void)_registReplacePhoneScheme:(id)arg1;
- (void)_registUMGSingleScheme:(id)arg1;
- (void)_registUMGScheme:(id)arg1;
- (void)_registPushNotificationPrivacyRequire:(id)arg1;
- (void)_registListenRankScheme:(id)arg1;
- (void)_registReloginScheme:(id)arg1;
- (void)_registSPScheme:(id)arg1;
- (void)_registMyRadioScheme:(id)arg1;
- (void)_registRunFmScheme:(id)arg1;
- (void)_registAutoFMFreqScheme:(id)arg1;
- (void)_registSkinThemeScheme:(id)arg1;
- (void)_registCategoryDjRadioScheme:(id)arg1;
- (void)_registForwardScheme:(id)arg1;
- (void)_registLoginScheme:(id)arg1;
- (void)_registRewardScheme:(id)arg1;
- (void)_registShortVideoScheme:(id)arg1;
- (void)_registPubEventScheme:(id)arg1;
- (void)_registUniversalLinkScheme:(id)arg1;
- (_Bool)openURLInScan:(id)arg1 userInfo:(id)arg2;
- (_Bool)openURLInScan:(id)arg1;
- (_Bool)canOpenURLInScan:(id)arg1;
- (_Bool)openUrlInWeb:(id)arg1 userInfo:(id)arg2;
- (_Bool)openUrlInWeb:(id)arg1;
- (_Bool)canOpenURLInWeb:(id)arg1;
- (_Bool)openUrlAfterLogin:(id)arg1;
- (void)registScanOrpheusJob;
- (void)registWebOrpheusJob;
- (void)registAfterLoginJob;
- (void)registSchemeJob;

@end

