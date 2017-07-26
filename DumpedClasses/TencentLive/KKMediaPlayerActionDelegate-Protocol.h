//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KKMediaRootViewController, NSDictionary, NSString, QLMovieItem, UIButton;

@protocol KKMediaPlayerActionDelegate <NSObject>
- (void)kkPlayer:(KKMediaRootViewController *)arg1 didClickButton:(unsigned long long)arg2;

@optional
- (void)forceShowPlayerHeaderImg;
- (void)hiddenHeadViewWhenAutoPlay;
- (void)findVideIdToPlayFromVideoId:(NSString *)arg1;
- (_Bool)shouldSaveRecord;
- (void)onMediaplayerNoControllByMute;
- (void)updatePayBill;
- (NSDictionary *)getTicketInfo;
- (void)iapViewButtonClick:(UIButton *)arg1;
- (void)setNavigationVipButtonHidden:(_Bool)arg1;
- (void)upateBottomPlayBtnInDLNAStatusWithkkPlayer:(KKMediaRootViewController *)arg1;
- (void)jumpToVideo:(QLMovieItem *)arg1;
- (void)kkPlayer:(KKMediaRootViewController *)arg1 tryWatchState:(long long)arg2;
- (void)kkPlayer:(KKMediaRootViewController *)arg1 didPackup:(_Bool)arg2;
@end

