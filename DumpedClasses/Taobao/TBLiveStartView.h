//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TBLiveTagEditProcessorDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITextFieldDelegate.h"

@class NSDate, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, TBLiveDatePickerView, TBLiveRoomInfo, TBLiveTagEditProcessor, UIButton, UIImageView, UILabel, UITextField;

@interface TBLiveStartView : UIView <UITextFieldDelegate, TBLiveTagEditProcessorDelegate, UIGestureRecognizerDelegate>
{
    _Bool _isPreLive;
    _Bool _isHaveTitle;
    NSString *_title;
    NSString *_city;
    NSString *_sourcetype;
    NSMutableDictionary *_cacheInfo;
    TBLiveRoomInfo *_hostInfo;
    UIButton *_startButton;
    UITextField *_titleText;
    NSObject<OS_dispatch_queue> *_delegateCallbackQueue;
    id <TBLiveStartDelegate> _delegate;
    UIButton *_photoButton;
    UIImageView *_photoThumbnailImgView;
    UIImageView *_blurImageView;
    UIImageView *_backage2ImgView;
    UIButton *_localButton;
    UIButton *_timeButton;
    UIButton *_categoryButton;
    UILabel *_definitionInfoLabel;
    TBLiveTagEditProcessor *_tagEditProcessor;
    TBLiveDatePickerView *_datePickerView;
    NSString *_imgUrl;
    NSString *_channelId;
    NSString *_columnId;
    NSDate *_PreLiveDate;
}

+ (_Bool)checkRecordSta;
+ (_Bool)checkCameraSta;
@property(retain, nonatomic) NSDate *PreLiveDate; // @synthesize PreLiveDate=_PreLiveDate;
@property _Bool isHaveTitle; // @synthesize isHaveTitle=_isHaveTitle;
@property _Bool isPreLive; // @synthesize isPreLive=_isPreLive;
@property(retain, nonatomic) NSString *columnId; // @synthesize columnId=_columnId;
@property(retain, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
@property(retain, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(retain, nonatomic) TBLiveDatePickerView *datePickerView; // @synthesize datePickerView=_datePickerView;
@property(retain, nonatomic) TBLiveTagEditProcessor *tagEditProcessor; // @synthesize tagEditProcessor=_tagEditProcessor;
@property(retain, nonatomic) UILabel *definitionInfoLabel; // @synthesize definitionInfoLabel=_definitionInfoLabel;
@property(retain, nonatomic) UIButton *categoryButton; // @synthesize categoryButton=_categoryButton;
@property(retain, nonatomic) UIButton *timeButton; // @synthesize timeButton=_timeButton;
@property(retain, nonatomic) UIButton *localButton; // @synthesize localButton=_localButton;
@property(retain, nonatomic) UIImageView *backage2ImgView; // @synthesize backage2ImgView=_backage2ImgView;
@property(retain, nonatomic) UIImageView *blurImageView; // @synthesize blurImageView=_blurImageView;
@property(retain, nonatomic) UIImageView *photoThumbnailImgView; // @synthesize photoThumbnailImgView=_photoThumbnailImgView;
@property(retain, nonatomic) UIButton *photoButton; // @synthesize photoButton=_photoButton;
@property(nonatomic) __weak id <TBLiveStartDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateCallbackQueue; // @synthesize delegateCallbackQueue=_delegateCallbackQueue;
@property(retain, nonatomic) UITextField *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) UIButton *startButton; // @synthesize startButton=_startButton;
@property(retain, nonatomic) TBLiveRoomInfo *hostInfo; // @synthesize hostInfo=_hostInfo;
@property(retain, nonatomic) NSMutableDictionary *cacheInfo; // @synthesize cacheInfo=_cacheInfo;
@property(retain, nonatomic) NSString *sourcetype; // @synthesize sourcetype=_sourcetype;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)overSeaUpLoadTest;
- (void)uploadLiveSnapshot:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)datePickerNoDisPaly;
- (void)textFieldDisPaly:(_Bool)arg1;
- (void)tagEditDidPickChannelId:(id)arg1 name:(id)arg2 columnId:(id)arg3 name:(id)arg4;
- (void)onSettingQuality:(int)arg1;
- (void)setDelegate:(id)arg1 callbackQueue:(id)arg2;
- (void)dealloc;
- (void)saveCacheFile;
- (void)onCloseClick:(id)arg1;
- (void)onShareClick:(id)arg1;
- (void)onStartClick:(id)arg1;
- (_Bool)stringContainsEmoji:(id)arg1;
- (void)liveSnapshotComplete:(id)arg1 Thumbnail:(id)arg2;
- (void)oncategoryCallBack:(id)arg1;
- (void)onPhotoCallBack:(id)arg1;
- (void)onLocalCallBack:(id)arg1;
- (void)onTimeCallBack:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)addTextFieldLeftPadding:(id)arg1 forWidth:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1 info:(id)arg2;
- (void)checkDefaultLocation;
- (_Bool)checkPermissions;
- (_Bool)checkLocSta;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
