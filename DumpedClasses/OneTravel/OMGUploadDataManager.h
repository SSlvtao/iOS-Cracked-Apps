//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseManager.h"

@class HttpClient, NSFileManager, NSOperationQueue, NSString, OMGUploadDataMessage;

@interface OMGUploadDataManager : BaseManager
{
    NSFileManager *_fileManager;
    NSString *_settingsFile;
    id _appDidBecomeActiveObserver;
    id _networkDidBecomeReachableObserver;
    id _pushCatchToUploadDataObserver;
    _Bool _networkRequestInProgress;
    _Bool _networkRequestInProgressAuto;
    _Bool _disableUploadDataManager;
    _Bool _enableUploadDataWithWifi;
    NSOperationQueue *_operationQueue;
    id _delegate;
    HttpClient *_httpClient;
    NSString *_logDir;
    NSString *_APPUID;
    NSString *_APPType;
    NSString *_userID;
    NSString *_userName;
    NSString *_userEmail;
    OMGUploadDataMessage *_message;
}

@property(copy, nonatomic) OMGUploadDataMessage *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *userEmail; // @synthesize userEmail=_userEmail;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *APPType; // @synthesize APPType=_APPType;
@property(copy, nonatomic) NSString *APPUID; // @synthesize APPUID=_APPUID;
@property(nonatomic, getter=isUploadDataWithWifi) _Bool enableUploadDataWithWifi; // @synthesize enableUploadDataWithWifi=_enableUploadDataWithWifi;
@property(nonatomic, getter=isUploadDataManagerDisabled) _Bool disableUploadDataManager; // @synthesize disableUploadDataManager=_disableUploadDataManager;
@property(retain, nonatomic) NSString *logDir; // @synthesize logDir=_logDir;
@property(retain, nonatomic) HttpClient *httpClient; // @synthesize httpClient=_httpClient;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (_Bool)updateUserEmailUsingKeychainAndDelegate;
- (_Bool)updateUserNameUsingKeychainAndDelegate;
- (id)NetType;
- (void)reportError:(id)arg1;
- (void)UploadLogData:(id)arg1 withHeader:(id)arg2 withParam:(id)arg3 withTaskid:(id)arg4 withFilename:(id)arg5 withLogType:(id)arg6;
- (void)TaskIdInfo:(id)arg1 withHeader:(id)arg2 withParam:(id)arg3;
- (void)uploadLogDataInfoWithWIFI;
- (void)uploadLogDataInfo:(id)arg1;
- (void)updateTaskIdInfo;
- (void)didBecomeActiveActions;
- (void)unregisterObservers;
- (void)registerObservers;
- (void)dealloc;
- (void)startManager;
- (void)setAppUid:(id)arg1;
- (id)init;

@end

