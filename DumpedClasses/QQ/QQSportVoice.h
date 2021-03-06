//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAudioPlayerDelegate.h"

@class AVAudioPlayer, NSDictionary, NSMutableArray, NSString;

@interface QQSportVoice : NSObject <AVAudioPlayerDelegate>
{
    _Bool _needDownLoadSportVoice;
    NSString *_voiceDirectory;
    AVAudioPlayer *_sportVoicePlayer;
    NSMutableArray *_readyPlayVoiceArr;
    NSDictionary *_sportNumVoiceDataDic;
}

+ (id)sportVoiceDirectory;
+ (void)zipFile:(id)arg1 toDirectory:(id)arg2;
+ (_Bool)needDownLoadVoiceDirectory:(id)arg1;
+ (id)shareInstance;
@property(readonly, retain, nonatomic) NSDictionary *sportNumVoiceDataDic; // @synthesize sportNumVoiceDataDic=_sportNumVoiceDataDic;
@property(readonly, retain, nonatomic) NSMutableArray *readyPlayVoiceArr; // @synthesize readyPlayVoiceArr=_readyPlayVoiceArr;
@property(retain, nonatomic) AVAudioPlayer *sportVoicePlayer; // @synthesize sportVoicePlayer=_sportVoicePlayer;
@property(readonly, nonatomic) _Bool needDownLoadSportVoice; // @synthesize needDownLoadSportVoice=_needDownLoadSportVoice;
@property(readonly, retain, nonatomic) NSString *voiceDirectory; // @synthesize voiceDirectory=_voiceDirectory;
- (void).cxx_destruct;
- (void)downSportVoiceToDirectory:(id)arg1;
- (void)downLoadFailed;
- (void)downLoadSeccess;
- (void)updateProgress:(double)arg1;
- (id)getDecimalNumScaleArr:(double)arg1 Dec:(unsigned long long)arg2;
- (id)getIntegerNumScaleArr:(double)arg1;
- (id)numToVoice:(id)arg1;
- (id)getTotalTimeVoice:(unsigned long long)arg1;
- (id)getDistanceVoice:(double)arg1;
- (id)getStepVoice:(unsigned long long)arg1;
- (_Bool)updateVoicePlayer;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)playVoice;
- (void)addVoiceDistance:(double)arg1 TotalTime:(unsigned long long)arg2 LastKmTime:(unsigned long long)arg3;
- (void)playEndVoiceStepCount:(unsigned long long)arg1 Distance:(double)arg2 TotalTime:(unsigned long long)arg3;
- (void)playVoiceStepCount:(unsigned long long)arg1 TotalTime:(unsigned long long)arg2 targetStep:(unsigned long long)arg3;
- (void)playVoiceDistance:(unsigned long long)arg1 TotalTime:(unsigned long long)arg2 LastKmTime:(unsigned long long)arg3;
- (void)playEndVoiceDistance:(double)arg1 TotalTime:(unsigned long long)arg2;
- (void)playSportVoice:(unsigned long long)arg1;
- (void)loadVoiceSource;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

