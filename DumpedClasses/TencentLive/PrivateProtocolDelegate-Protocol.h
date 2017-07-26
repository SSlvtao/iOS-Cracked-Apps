//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, NSString, PPPProVideoInfoModel, PPPTVInfoModel;

@protocol PrivateProtocolDelegate <NSObject>
- (void)onPushVideoChanged:(PPPProVideoInfoModel *)arg1 video:(PPPProVideoInfoModel *)arg2;
- (void)onReportVolume2TVFinish:(NSError *)arg1;
- (void)onSendBarrageDataFinish:(NSError *)arg1;
- (void)onSetBarrageLockFinish:(NSError *)arg1;
- (void)onSetTVClarityFinish:(NSError *)arg1;
- (void)updateTvVideoInfo:(PPPProVideoInfoModel *)arg1 clarity:(NSArray *)arg2 volume:(int)arg3;
- (void)onUnBindTV:(NSString *)arg1;
- (void)onBindTvFinish:(PPPTVInfoModel *)arg1 error:(NSError *)arg2;
- (void)onGetTvListFinish:(NSArray *)arg1 error:(NSError *)arg2;
@end

