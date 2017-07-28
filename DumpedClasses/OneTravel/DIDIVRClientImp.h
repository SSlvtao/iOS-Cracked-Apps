//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DIDIVoiceRecognitionClient.h"

#import "AVAudioPlayerDelegate.h"
#import "HttpConnectionSchedulerDelegate.h"
#import "NetworkInteractionDelegate.h"

@class AVAudioPlayer, DIDIVRHTTPRequestScheduler, DIDIVRPostData, NSArray, NSLock, NSMutableArray, NSMutableData, NSObject<OS_dispatch_semaphore>, NSString, NSThread;

@interface DIDIVRClientImp : DIDIVoiceRecognitionClient <NetworkInteractionDelegate, HttpConnectionSchedulerDelegate, AVAudioPlayerDelegate>
{
    _Bool isVoiceEnd;
    int mfeResult;
    _Bool isSetProductId;
    int iPlayToneFlag;
    DIDIVRPostData *_sendToServerAudioData;
    int iCurrrentPreAudioDataStatus;
    AVAudioPlayer *_avAudioPlayer;
    _Bool isEndHintAudio;
    _Bool isRecordStart;
    _Bool isSpeakFinish;
    _Bool isRecognitionFinish;
    _Bool isNotifyStartNet;
    int recordDataIdx;
    _Bool isSendRecordFinishNotifiy;
    _Bool isSendWorkStartNotify;
    _Bool isStartConfigAudioSession;
    NSString *kRecordTonePath;
    NSString *KRecordStartToneName;
    NSString *KRecordEndToneName;
    NSString *KRecordToneFileEx;
    _Bool canRecorder;
    _Bool isUserEnd;
    _Bool isSendNULLData;
    _Bool isCalledRecordEndOperation;
    _Bool isWifiNet;
    _Bool isUserCancel;
    _Bool isNeedVad;
    _Bool isNeedServerVad;
    _Bool isNeedCompress;
    _Bool _isResignActive;
    _Bool _isNeedSignal;
    int recognitionMode;
    int result;
    int recordBufferByteSize;
    int iCurrentSampleRate;
    id <MVoiceRecognitionClientDelegate> voiceRecognitionDelegate;
    NSMutableData *_sendData;
    NSThread *_MFEThread;
    DIDIVRHTTPRequestScheduler *_httpConnectionScheduler;
    double recordStartTime;
    long long recordLengthSinceUserEnd;
    long long currentRecordLength;
    NSArray *_searchResultArray;
    NSMutableArray *_inputResultArray;
    NSObject<OS_dispatch_semaphore> *_waitMicrophonePermission;
    NSLock *_startStopLock;
    NSLock *_semaphoreLock;
}

+ (void)releaseInstance;
+ (id)sharedInstance;
@property(retain, nonatomic) NSLock *semaphoreLock; // @synthesize semaphoreLock=_semaphoreLock;
@property(retain, nonatomic) NSLock *startStopLock; // @synthesize startStopLock=_startStopLock;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *waitMicrophonePermission; // @synthesize waitMicrophonePermission=_waitMicrophonePermission;
@property(nonatomic) _Bool isNeedSignal; // @synthesize isNeedSignal=_isNeedSignal;
@property(nonatomic) _Bool isResignActive; // @synthesize isResignActive=_isResignActive;
@property(nonatomic) _Bool isNeedCompress; // @synthesize isNeedCompress;
@property(nonatomic) _Bool isNeedServerVad; // @synthesize isNeedServerVad;
@property(nonatomic) _Bool isNeedVad; // @synthesize isNeedVad;
@property _Bool isUserCancel; // @synthesize isUserCancel;
@property _Bool isSendRecordFinishNotifiy; // @synthesize isSendRecordFinishNotifiy;
@property(retain, nonatomic) NSMutableArray *inputResultArray; // @synthesize inputResultArray=_inputResultArray;
@property(copy, nonatomic) NSArray *searchResultArray; // @synthesize searchResultArray=_searchResultArray;
@property long long currentRecordLength; // @synthesize currentRecordLength;
@property long long recordLengthSinceUserEnd; // @synthesize recordLengthSinceUserEnd;
@property double recordStartTime; // @synthesize recordStartTime;
@property(retain, nonatomic) AVAudioPlayer *avAudioPlayer; // @synthesize avAudioPlayer=_avAudioPlayer;
@property(readonly, nonatomic) _Bool isWifiNet; // @synthesize isWifiNet;
@property(nonatomic) int iCurrentSampleRate; // @synthesize iCurrentSampleRate;
@property(nonatomic) int recordBufferByteSize; // @synthesize recordBufferByteSize;
@property(nonatomic) _Bool isUserEnd; // @synthesize isUserEnd;
@property(retain, nonatomic) DIDIVRHTTPRequestScheduler *httpConnectionScheduler; // @synthesize httpConnectionScheduler=_httpConnectionScheduler;
@property(retain, nonatomic) NSThread *MFEThread; // @synthesize MFEThread=_MFEThread;
@property(retain, nonatomic) NSMutableData *sendData; // @synthesize sendData=_sendData;
@property(nonatomic) _Bool canRecorder; // @synthesize canRecorder;
@property(nonatomic) int recognitionMode; // @synthesize recognitionMode;
@property(nonatomic) __weak id <MVoiceRecognitionClientDelegate> voiceRecognitionDelegate; // @synthesize voiceRecognitionDelegate;
- (void).cxx_destruct;
- (void)postInterruptionNotifyWithStatus:(int)arg1;
- (void)setPropertyList:(id)arg1;
- (void)setRecordToneWithPath:(id)arg1 startToneName:(id)arg2 endToneName:(id)arg3 toneFileEx:(id)arg4;
- (void)setParamForKey:(id)arg1 withValue:(id)arg2;
- (void)setServerURL:(id)arg1 withMode:(int)arg2;
- (void)setProductId:(id)arg1;
- (_Bool)setPlayTone:(int)arg1 isPlay:(_Bool)arg2;
- (void)didBecomeActiveNotification:(id)arg1;
- (void)willResignActiveNotification:(id)arg1;
- (void)connectionOverTime:(id)arg1;
- (void)connectionFail:(id)arg1 withMessage:(id)arg2;
- (long long)convertErrorTypeWithServerError:(long long)arg1;
- (void)sendShangQiaoPackage;
- (id)getAbnormalIdxsOfGlobalKey:(id)arg1;
- (long long)getNormalIdxOfGlobalKey:(id)arg1;
- (void)handleErrorBasedOnGlobalKey:(id)arg1 status:(long long)arg2 andIndex:(long long)arg3;
- (void)finishWhenSearchMode:(id)arg1;
- (void)flushData:(id)arg1;
- (void)connectionFinish:(id)arg1 withData:(id)arg2;
- (void)negativePkgWillSend:(long long)arg1;
- (void)httpPostDataNegativePackage:(_Bool)arg1;
- (void)MFEWithInputModeProcessNewDataCallback:(id)arg1;
- (void)recognitionFinish;
- (void)recognitionNetWorkStatus:(int)arg1;
- (void)recognitionResult:(id)arg1;
- (void)recognitionClientWorkStatus:(int)arg1;
- (void)recordFinish;
- (void)MFEThreadRunFinish;
- (void)stopMFE;
- (void)sendMFENotificationWithDataBuffer:(char *)arg1 sizeInBytes:(int)arg2;
- (void)MFEDetectWithInputModeRuningThreadFun;
- (_Bool)startVAD;
- (_Bool)startMFE;
- (_Bool)isNewVersion;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)stoptPlayHintAudio;
- (void)startPlayHintAudioWithIsEnd:(_Bool)arg1;
- (void)speakFinish;
- (int)startRecord;
- (void)setLocalVAD:(_Bool)arg1;
- (_Bool)listenCurrentDBLevelMeter;
- (void)finishThisTimeRecognitionAndNotifyObsWithObj:(id)arg1;
- (void)stopThisTimeRecognitionAndNotifyObs;
- (void)newStopThisTimeInRecodThread:(id)arg1;
- (void)currentTimeRecognitionStatusNotifyObs;
- (void)currentTimeRecognitionStatusNotifyObsInMFEDetectWithStatus:(id)arg1;
- (void)currentTimeRecognitionStatusNotifyObsWithStatus:(int)arg1;
- (void)stopVoiceRecognition_;
- (void)stopVoiceRecognition;
- (void)resolveProtocol;
- (int)getCurrentSampleRate;
- (double)recordDurationTime;
- (void)resetAttributes;
- (int)preRequirements:(id)arg1;
- (int)startVoiceRecognition:(id)arg1;
- (int)startVoiceDataRecognition:(long long)arg1 withPropertyGroup:(id)arg2 productID:(id)arg3 delegate:(id)arg4;
- (_Bool)isCanRecorder;
@property(nonatomic) _Bool isCalledRecordEndOperation; // @synthesize isCalledRecordEndOperation;
@property(nonatomic) _Bool isVoiceEnd;
@property(nonatomic) _Bool isSendNULLData; // @synthesize isSendNULLData;
@property(nonatomic) int mfeResult;
@property(nonatomic) int result; // @synthesize result;
- (void)initParams;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
