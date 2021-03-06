//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IQZUrlDownloaderDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface MQZMutipleImageHandler : NSObject <UIAlertViewDelegate, IQZUrlDownloaderDelegate>
{
    int _networkState;
    NSArray *_photoModelArray;
    NSArray *_downloadModelArray;
    NSMutableArray *_modifiedMessageModelArray;
    NSMutableArray *_succeedDownloadList;
    NSMutableArray *_failedDownloadList;
    CDUnknownBlockType _completion;
    NSMutableArray *_savingArray;
    NSMutableArray *_succeedSaveList;
    NSMutableArray *_failedSaveList;
    _Bool _isSaving;
    _Bool _shouldNotSave;
    _Bool _needStopIfNotWIFI;
    long long _tag;
    id <MQZMutipleImageHandlerDelegate> _delegate;
    NSMutableDictionary *_onePicDownloadComletionArray;
}

@property(retain, nonatomic) NSMutableDictionary *onePicDownloadComletionArray; // @synthesize onePicDownloadComletionArray=_onePicDownloadComletionArray;
@property(nonatomic) __weak id <MQZMutipleImageHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(nonatomic) _Bool needStopIfNotWIFI; // @synthesize needStopIfNotWIFI=_needStopIfNotWIFI;
@property(nonatomic) _Bool shouldNotSave; // @synthesize shouldNotSave=_shouldNotSave;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)requestFinished:(id)arg1;
- (void)stopDownloadAndSaveImage;
- (void)reset;
- (id)checkSavingImagesToAlbumMyModel:(id)arg1;
- (void)networkChangeNotification:(id)arg1;
- (void)stopDownload;
- (void)callbackWithError:(id)arg1;
- (id)getMessageModelByURL:(id)arg1;
- (void)saveCompleted:(id)arg1;
- (void)saveOneImageToAblum:(id)arg1 failDownloadNum:(long long)arg2 hasInSavingArray:(_Bool)arg3;
- (void)saveImagesWithoutDownload:(id)arg1;
- (void)notSaveCompletion;
- (void)putLeftMessageModelIntoFailedDownloadList;
- (void)callOnePicDownloadCompletion:(long long)arg1 model:(id)arg2;
- (void)callCompletion:(long long)arg1;
- (void)downloadOnePicByMessageModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startPrepareDownloadIfNeed;
- (void)preparedByNetworkType;
- (void)prepareByPhotoModelArray:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

