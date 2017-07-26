//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLMediaPlayerBusinessBase.h"

@class NSString, QLJCELiveShowRoomInfo, QLShowRoomEntranceTipModel, UIImageView, UIView;

@interface QLShowRoomEntranceHandler : QLMediaPlayerBusinessBase
{
    _Bool _showedShowRoomEntranceTips;
    id <QLShowRoomViewControllerDelegate> _showRoomControllerDelegate;
    UIImageView *_showRoomImageView;
    UIView *_showRoomEnterView;
    QLJCELiveShowRoomInfo *_handlerData;
    NSString *_pid;
    NSString *_tipStr;
    long long _tipCount;
    QLShowRoomEntranceTipModel *_showRoomEntranceTipModel;
}

@property(retain, nonatomic) QLShowRoomEntranceTipModel *showRoomEntranceTipModel; // @synthesize showRoomEntranceTipModel=_showRoomEntranceTipModel;
@property(nonatomic) long long tipCount; // @synthesize tipCount=_tipCount;
@property(nonatomic) _Bool showedShowRoomEntranceTips; // @synthesize showedShowRoomEntranceTips=_showedShowRoomEntranceTips;
@property(retain, nonatomic) NSString *tipStr; // @synthesize tipStr=_tipStr;
@property(copy, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(retain, nonatomic) QLJCELiveShowRoomInfo *handlerData; // @synthesize handlerData=_handlerData;
@property(retain, nonatomic) UIView *showRoomEnterView; // @synthesize showRoomEnterView=_showRoomEnterView;
@property(retain, nonatomic) UIImageView *showRoomImageView; // @synthesize showRoomImageView=_showRoomImageView;
@property(nonatomic) __weak id <QLShowRoomViewControllerDelegate> showRoomControllerDelegate; // @synthesize showRoomControllerDelegate=_showRoomControllerDelegate;
- (void).cxx_destruct;
- (id)_getAnimateImgs;
- (id)showRoomEntranceParentView;
- (void)updateShowRoomEntranceParentView;
- (void)mpbMediaRotatetionChange;
- (void)mpbStartToPlayMedia;
- (void)startShowRoomEntranceAnimate;
- (_Bool)shouldShowRoomEntranceTip;
- (void)showShowRoomTip;
- (id)currentPlayerMovieItem;
- (id)showRoomEntranceDisplayView;
- (void)showRoomEntranceDidSelected;
- (id)init;
- (void)setShowRoomEntranceHandlerData:(id)arg1 withLivingPid:(id)arg2;

@end

