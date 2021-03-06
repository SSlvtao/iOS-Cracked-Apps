//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQARUploadImgCallback.h"

@interface QQARCloudProcessorController : QQARUploadImgCallback
{
    _Bool _isThisDealloc;
    id <QQARUploadResultCallback> _resultCallback;
}

@property(nonatomic) _Bool isThisDealloc; // @synthesize isThisDealloc=_isThisDealloc;
@property(nonatomic) __weak id <QQARUploadResultCallback> resultCallback; // @synthesize resultCallback=_resultCallback;
- (void).cxx_destruct;
- (void)releseImageSelect;
- (void)saveCloudProcessorModelData;
- (void)setPretreatmentCallBack:(int)arg1 resultDelegate:(id)arg2;
- (_Bool)isWatingForLocalTimeout;
- (void)cloudProcessorThreadRun;
- (id)rotateImg:(id)arg1;
- (void)stopCloudProcessor;
- (void)startCloudProcessor;
- (void)pauseCloudProcessor;
- (void)resumeCloudProcessor;
- (void)addFrameBuffer:(id)arg1;
- (void)doInitCloudProcessor:(id)arg1;
- (void)cloudProcessorResultCallBack:(id)arg1;
- (void)startReport;
- (void)cloudProcessorCallBack:(id)arg1;
- (void)revertReportTime;
- (void)dealloc;
- (id)init;

@end

