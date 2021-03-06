//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class LiveRoomModel, UIImageView, UILabel;

@interface LiveEnterNormalMessageView : UIView
{
    LiveRoomModel *_liveRoomModel;
    UILabel *_messageLabel;
    UIImageView *_avatarView;
    UILabel *_userNameLabel;
    UIImageView *_bgImageView;
}

@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) LiveRoomModel *liveRoomModel; // @synthesize liveRoomModel=_liveRoomModel;
- (void).cxx_destruct;
- (void)updateViewWithMessage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 roomModel:(id)arg2;

@end

