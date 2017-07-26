//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UITapGestureRecognizer;

@protocol P_QLMPlayerControlDelegate <NSObject>
- (void)playerRemoteDidClickRightButton:(int)arg1;
- (void)playerRemoteDidClickLeftButton:(int)arg1;
- (void)playerDidClickBackButton:(id)arg1 withAnimation:(_Bool)arg2;
- (void)playerDidClickBackButton:(id)arg1;
- (void)playerControlDidClickRender:(id)arg1;
- (void)playerControlDidClickPlay:(id)arg1;
- (void)playerControlDidClickShare:(id)arg1;
- (void)playerControlDidClickDownload:(id)arg1;
- (void)playerControlDidClickFavorite:(_Bool)arg1;
- (void)playerControlSeekEnd:(double)arg1 duration:(double)arg2;
- (void)playerControlSeekTo:(double)arg1 duration:(double)arg2;
- (void)playerControlSeekBegin:(double)arg1 duration:(double)arg2;

@optional
- (void)tapSliderViewLeftTimeLabel;
- (_Bool)palyAtLast5Min;
- (void)playerControlDidHideAllControlViews;
- (void)playerControlDidShowAllControlViews;
- (void)playerControlPlayerDidSinggleTag:(UITapGestureRecognizer *)arg1;
- (void)playerControlActionStatus:(unsigned long long)arg1;
- (void)onClarityBtnClicked;
- (void)onRemoteRetryConnectBtnClicked;
- (void)onRemoteChangedDeviceBtnClicked;
- (void)onRemoteExitBtnClicked;
@end

