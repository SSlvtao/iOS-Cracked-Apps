//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "NMEmotionViewDelegate.h"
#import "NMShareKeyboardHeaderViewDelegate.h"
#import "OTFrameObservingViewDelegate.h"
#import "OpenPlatformObserver.h"
#import "UITextViewDelegate.h"

@class NMBarButtonItem, NMEmotionView, NMShareKeyboardHeaderView, NSArray, NSString, OpenPlatformBase, UIImage, UIImageView, UITextView;

@interface NMShareToSinglePlatformViewController : UIViewController <OTFrameObservingViewDelegate, NMEmotionViewDelegate, UITextViewDelegate, OpenPlatformObserver, NMShareKeyboardHeaderViewDelegate>
{
    UITextView *_textView;
    UIImageView *_sharingImageView;
    UIImageView *_coverMaskView;
    NMBarButtonItem *_shareBtn;
    NMEmotionView *_emotionView;
    NMShareKeyboardHeaderView *_keyboardHeaderView;
    _Bool _shouldHideEmotionBoard;
    _Bool _firstTimeEnter;
    _Bool _shareImageOnly;
    _Bool _hideImageMask;
    _Bool _isSharingSuccessed;
    NSString *_sharingString;
    NSString *_sharingImageURL;
    NSString *_shareToQzoneTitle;
    OpenPlatformBase *_platForm;
    UIImage *_sharingImage;
    NSArray *_localImagePaths;
    NSString *_hiddenSharingURL;
    id <NMShareToSinglePlatformViewControllerDelegate> _delegate;
    double _currentKeyboardHeight;
}

@property(nonatomic) _Bool isSharingSuccessed; // @synthesize isSharingSuccessed=_isSharingSuccessed;
@property(nonatomic) double currentKeyboardHeight; // @synthesize currentKeyboardHeight=_currentKeyboardHeight;
@property(nonatomic) _Bool hideImageMask; // @synthesize hideImageMask=_hideImageMask;
@property(nonatomic) _Bool shareImageOnly; // @synthesize shareImageOnly=_shareImageOnly;
@property(nonatomic) id <NMShareToSinglePlatformViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *hiddenSharingURL; // @synthesize hiddenSharingURL=_hiddenSharingURL;
@property(retain, nonatomic) NSArray *localImagePaths; // @synthesize localImagePaths=_localImagePaths;
@property(retain, nonatomic) UIImage *sharingImage; // @synthesize sharingImage=_sharingImage;
@property(retain, nonatomic) OpenPlatformBase *platForm; // @synthesize platForm=_platForm;
@property(retain, nonatomic) NSString *shareToQzoneTitle; // @synthesize shareToQzoneTitle=_shareToQzoneTitle;
@property(retain, nonatomic) NSString *sharingImageURL; // @synthesize sharingImageURL=_sharingImageURL;
@property(retain, nonatomic) NSString *sharingString; // @synthesize sharingString=_sharingString;
- (void).cxx_destruct;
- (void)keyboardHide:(id)arg1;
- (void)keyboardShow:(id)arg1;
- (id)emotionView;
- (void)toggleDisplayKeyboardHeader:(_Bool)arg1;
- (_Bool)resignFirstResponder;
- (void)shareKeyboardHeaderView:(id)arg1 hideKeyBoardClicked:(id)arg2;
- (void)shareKeyboardHeaderView:(id)arg1 keyboardButtonClicked:(id)arg2;
- (void)shareKeyboardHeaderView:(id)arg1 emontionButtonClicked:(id)arg2;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)onOPSuccess:(id)arg1 operation:(unsigned long long)arg2 retInfo:(id)arg3;
- (void)onOPError:(id)arg1 operation:(unsigned long long)arg2 Code:(long long)arg3 Desc:(id)arg4;
- (void)sendFailed;
- (void)sendButtonTouchedInEmotionView:(id)arg1;
- (void)shareButtonTouched:(id)arg1;
- (void)shareWithImageURL:(_Bool)arg1;
- (void)backAction:(id)arg1;
- (void)adjustSubViewsLayout;
- (void)frameChangedInOTFrameObservingView:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setTitle:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

