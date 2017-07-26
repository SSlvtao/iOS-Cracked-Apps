//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AGImagePickerController.h"

@class NSString, UIView;

@interface QLMomentImagePickerController : AGImagePickerController
{
    long long _maxSelectedCount;
    NSString *_itemPageDescription;
    UIView *_tipsView;
}

+ (_Bool)didFinish;
+ (void)loadTheLatestPhotoInGroup:(id)arg1 complete:(CDUnknownBlockType)arg2;
+ (void)loadTheLatestPhotoInLibrary:(CDUnknownBlockType)arg1;
+ (id)imagePickerWithDelegate:(id)arg1;
+ (id)sharedInstance:(id)arg1;
@property(retain, nonatomic) UIView *tipsView; // @synthesize tipsView=_tipsView;
@property(copy, nonatomic) NSString *itemPageDescription; // @synthesize itemPageDescription=_itemPageDescription;
@property(nonatomic) long long maxSelectedCount; // @synthesize maxSelectedCount=_maxSelectedCount;
- (void).cxx_destruct;
- (void)didFinish;
- (void)loadTheLatestPhotoInLibrary:(CDUnknownBlockType)arg1;
- (void)showFirstAssetsController;
- (id)pageDescription;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1 failureBlock:(CDUnknownBlockType)arg2 successBlock:(CDUnknownBlockType)arg3 maximumNumberOfPhotosToBeSelected:(unsigned long long)arg4 shouldChangeStatusBarStyle:(_Bool)arg5 toolbarItemsForManagingTheSelection:(id)arg6 andShouldShowSavedPhotosOnTop:(_Bool)arg7;

@end

