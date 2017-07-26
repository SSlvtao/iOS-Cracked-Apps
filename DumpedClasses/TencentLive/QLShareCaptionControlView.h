//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QLActionDelegate.h"
#import "QLShareCaptionEditViewDelegate.h"
#import "QLShareCaptionImageCollectionViewDelegate.h"
#import "QLShareCaptionTextTableViewDelegate.h"
#import "QLShareDataSource.h"
#import "UIGestureRecognizerDelegate.h"

@class NSArray, NSData, NSDictionary, NSString, QLActivityLabel, QLJCEMiniProgramInfo, QLMovieItem, QLShareCaptionControlButton, QLShareCaptionEditView, QLShareCaptionImageCollectionView, QLShareCaptionTextTableView, QLStandardShareAccessPanel, UIButton, UIImage, UIImageView, UILabel, UIViewController;

@interface QLShareCaptionControlView : UIView <QLShareCaptionImageCollectionViewDelegate, QLShareCaptionTextTableViewDelegate, QLShareCaptionEditViewDelegate, QLActionDelegate, UIGestureRecognizerDelegate, QLShareDataSource>
{
    _Bool _isUseAssetImage;
    id <QLShareCaptionControlViewDelegate> _delegate;
    id <QLShareCaptionControlViewDatasource> _dataSource;
    long long _status;
    long long _preStatus;
    UIImageView *_backgroundView;
    UIView *_shadowMask;
    UIView *_blurMask;
    UIView *_topControlView;
    UIView *_topControlCentralView;
    UIButton *_textBtn;
    UIButton *_ImageBtn;
    UIView *_btnSelectedMask;
    QLShareCaptionControlButton *_backBtn;
    QLShareCaptionControlButton *_commitBtn;
    QLShareCaptionEditView *_editView;
    QLShareCaptionTextTableView *_textTableView;
    QLShareCaptionImageCollectionView *_imageColloctionView;
    QLShareCaptionEditView *_outputView;
    QLStandardShareAccessPanel *_sharePanel;
    NSData *_captionImgData;
    UIImage *_captionImage;
    UIImageView *_tips;
    QLActivityLabel *_textLoadingView;
    UILabel *_textLoadingFailedLabel;
}

@property(retain, nonatomic) UILabel *textLoadingFailedLabel; // @synthesize textLoadingFailedLabel=_textLoadingFailedLabel;
@property(retain, nonatomic) QLActivityLabel *textLoadingView; // @synthesize textLoadingView=_textLoadingView;
@property(nonatomic) _Bool isUseAssetImage; // @synthesize isUseAssetImage=_isUseAssetImage;
@property(retain, nonatomic) UIImageView *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) UIImage *captionImage; // @synthesize captionImage=_captionImage;
@property(retain, nonatomic) NSData *captionImgData; // @synthesize captionImgData=_captionImgData;
@property(retain, nonatomic) QLStandardShareAccessPanel *sharePanel; // @synthesize sharePanel=_sharePanel;
@property(retain, nonatomic) QLShareCaptionEditView *outputView; // @synthesize outputView=_outputView;
@property(retain, nonatomic) QLShareCaptionImageCollectionView *imageColloctionView; // @synthesize imageColloctionView=_imageColloctionView;
@property(retain, nonatomic) QLShareCaptionTextTableView *textTableView; // @synthesize textTableView=_textTableView;
@property(retain, nonatomic) QLShareCaptionEditView *editView; // @synthesize editView=_editView;
@property(retain, nonatomic) QLShareCaptionControlButton *commitBtn; // @synthesize commitBtn=_commitBtn;
@property(retain, nonatomic) QLShareCaptionControlButton *backBtn; // @synthesize backBtn=_backBtn;
@property(retain, nonatomic) UIView *btnSelectedMask; // @synthesize btnSelectedMask=_btnSelectedMask;
@property(retain, nonatomic) UIButton *ImageBtn; // @synthesize ImageBtn=_ImageBtn;
@property(retain, nonatomic) UIButton *textBtn; // @synthesize textBtn=_textBtn;
@property(retain, nonatomic) UIView *topControlCentralView; // @synthesize topControlCentralView=_topControlCentralView;
@property(retain, nonatomic) UIView *topControlView; // @synthesize topControlView=_topControlView;
@property(retain, nonatomic) UIView *blurMask; // @synthesize blurMask=_blurMask;
@property(retain, nonatomic) UIView *shadowMask; // @synthesize shadowMask=_shadowMask;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) long long preStatus; // @synthesize preStatus=_preStatus;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) __weak id <QLShareCaptionControlViewDatasource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <QLShareCaptionControlViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showControlArea;
- (void)hideControlArea;
- (void)dismissWhenShareSuccessed;
- (void)action:(id)arg1 didShareActionFinish:(_Bool)arg2 actionType:(unsigned long long)arg3;
- (void)action:(id)arg1 didPressShareButton:(unsigned long long)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)didTap:(id)arg1;
- (void)showTextLoadingFailed:(_Bool)arg1;
- (void)showTextLoading:(_Bool)arg1;
- (id)getSelectedCaptionTimeData;
- (void)reportLeaveAction:(int)arg1;
- (void)action:(id)arg1 didPressMomentButton:(id)arg2;
- (unsigned long long)actionShouldSupportActionTypeMask:(id)arg1;
@property(readonly, nonatomic) UIViewController *shareController;
@property(readonly, nonatomic) NSData *shareOriImgData;
@property(readonly, nonatomic) NSString *shareContentTail;
@property(readonly, nonatomic) NSString *shareContent;
@property(readonly, nonatomic) NSString *shareSingleTitle;
@property(readonly, nonatomic) unsigned long long shareStyle;
@property(readonly, nonatomic) NSDictionary *shareReportInfo;
@property(readonly, nonatomic) QLMovieItem *shareVideoInfo;
@property(readonly, nonatomic) unsigned long long sharePlatformMask;
@property(readonly, nonatomic) _Bool needShare;
@property(readonly, nonatomic) NSString *shareImageURL;
@property(readonly, nonatomic) NSString *shareSubTitle;
@property(readonly, nonatomic) UIImage *shareImage;
@property(readonly, nonatomic) NSString *shareFromPage;
@property(readonly, nonatomic) unsigned long long shareDataType;
@property(readonly, nonatomic) NSString *shareURL;
@property(readonly, nonatomic) NSString *shareTitle;
@property(readonly, nonatomic) NSString *shareID;
- (id)shareItemToShare;
- (id)getEditedCaptions;
- (void)commitEdit;
- (void)didCorrectCaptions:(id)arg1;
- (void)didSelectCaptionsToEdit:(id)arg1;
- (void)updateEditviewData;
- (void)didSelectCaptions:(_Bool)arg1;
- (void)changeImageAlpha:(double)arg1;
- (void)openSystemImagePicker;
- (void)selectImage:(id)arg1 Url:(id)arg2;
- (void)needMoreData;
- (_Bool)hadMoreData;
- (void)setSelectedImage:(id)arg1;
- (void)updateControlViewImage;
- (void)setTitle:(id)arg1;
- (void)updateControlViewTextWithIndex:(long long)arg1;
- (void)commitBtnClick:(id)arg1;
- (void)imageBtnClick:(id)arg1;
- (void)textBtnClick:(id)arg1;
- (void)backBtnClick:(id)arg1;
- (void)backShareClick:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)updateUI;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *shareActionUrl;
@property(readonly, nonatomic) NSString *shareCopyContent;
@property(readonly, nonatomic) NSDictionary *shareExtendInfo;
@property(readonly, nonatomic) NSData *shareGifData;
@property(readonly, nonatomic) QLJCEMiniProgramInfo *shareMiniProgramInfo;
@property(readonly, nonatomic) NSArray *sharePictureList;
@property(readonly) Class superclass;

@end

