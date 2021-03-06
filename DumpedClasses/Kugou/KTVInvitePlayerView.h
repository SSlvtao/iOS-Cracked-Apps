//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIAlertViewDelegate.h"

@class KGThemeButton, KGThemeImageView, KGThemeLabel, KGThemeView, KGTingPlayerManager, KTVInvitePlayerModel, KTVKSongInvitedSettingViewModel, KTVPlayerBaseInfo, KtvAccompanyHttpADO, NSString, UIAlertView, UIButton, UIImageView, UILabel;

@interface KTVInvitePlayerView : UIView <UIAlertViewDelegate>
{
    UIImageView *headimg;
    KGThemeLabel *usernamelab;
    UIImageView *seximg;
    UIButton *headimgBtn;
    UIButton *usernameBtn;
    KGThemeImageView *locicon;
    KGThemeLabel *distancelab;
    KGThemeView *songbg;
    KGThemeLabel *songtip;
    KGThemeButton *songicon;
    KGThemeLabel *songname;
    KGThemeLabel *deletesongtip;
    KGThemeButton *playbtn;
    KGThemeButton *playLoading;
    UILabel *successLab;
    UILabel *rejectLab;
    KGThemeButton *chatBtn;
    KGThemeButton *cancelBtn;
    KGThemeButton *yuegeBtn;
    KGTingPlayerManager *_player;
    _Bool isPlaying;
    KtvAccompanyHttpADO *songhttp;
    NSString *songurl;
    _Bool isGetSongUrl;
    _Bool isYaoYiYaoType;
    UIAlertView *yueGeTipAlertView;
    _Bool isCheckYueGe;
    _Bool _notRemoveFromView;
    _Bool _isFristLoadFile;
    int _fromType;
    id <KTVInvitePlayerDelegate> _delegate;
    NSString *_opusHashStr;
    KTVInvitePlayerModel *_invitePlayerModel;
    KTVPlayerBaseInfo *_playerBase;
    KTVKSongInvitedSettingViewModel *_kSongInviSettingVM;
}

@property(nonatomic) _Bool isFristLoadFile; // @synthesize isFristLoadFile=_isFristLoadFile;
@property(retain, nonatomic) KTVKSongInvitedSettingViewModel *kSongInviSettingVM; // @synthesize kSongInviSettingVM=_kSongInviSettingVM;
@property(nonatomic) _Bool notRemoveFromView; // @synthesize notRemoveFromView=_notRemoveFromView;
@property(retain, nonatomic) KTVPlayerBaseInfo *playerBase; // @synthesize playerBase=_playerBase;
@property(retain, nonatomic) KTVInvitePlayerModel *invitePlayerModel; // @synthesize invitePlayerModel=_invitePlayerModel;
@property(retain, nonatomic) NSString *opusHashStr; // @synthesize opusHashStr=_opusHashStr;
@property(nonatomic) __weak id <KTVInvitePlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int fromType; // @synthesize fromType=_fromType;
- (void).cxx_destruct;
- (void)showViewInWindow;
- (void)setSingPlayerBase:(id)arg1 successStr:(id)arg2 objectStr:(id)arg3 distanceStr:(id)arg4;
- (void)setInvitePlayerBase:(id)arg1 opusName:(id)arg2 opusHash:(id)arg3 distanceStr:(id)arg4;
- (void)setDistance:(id)arg1;
- (void)setSongLocInfo;
- (void)setInfo;
- (void)interruptionNotifyCallback:(id)arg1;
- (void)playerEndrup:(id)arg1;
- (void)playerInterrup:(id)arg1;
- (void)endInterruptionWithFlags:(unsigned long long)arg1;
- (void)beginInterruption;
- (void)removeInterruptNotification;
- (void)setInterruptNotification;
- (void)dealloc;
- (void)stopPlay;
- (void)playStateChange:(id)arg1;
- (void)playWithUrl:(id)arg1;
- (void)stopLoadingAnimation;
- (void)startLoadingAnimation;
- (void)chatSing:(id)arg1;
- (void)lookUserInfo:(id)arg1;
- (void)actionCancel:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)checkYueGe;
- (void)actionYueGe:(id)arg1;
- (void)getSongUrlFailure:(id)arg1;
- (void)getSongUrlSuccess:(id)arg1;
- (void)checkPlaying;
- (void)actionPlay:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

