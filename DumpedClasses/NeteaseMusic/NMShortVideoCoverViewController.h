//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "NMScreenShotProtocol.h"
#import "NMVideoPreviewBarDataSource.h"
#import "NMVideoPreviewSelectBarDelegate.h"

@class AVAsset, AVAssetImageGenerator, AVComposition, NMShortVideoInfo, NMShortVideoPlayerView, NMShortVideoScreenshotExporter, NMVideoPreviewSelectBar, NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, UIImage, UILabel, UIView;

@interface NMShortVideoCoverViewController : UIViewController <NMVideoPreviewBarDataSource, NMVideoPreviewSelectBarDelegate, NMScreenShotProtocol>
{
    _Bool _coverEdited;
    struct CGSize _itemSize;
    float _assetRatio;
    long long _orientation;
    CDStruct_e83c9415 _videoRange;
    CDStruct_1b6d18a9 _timePerScreenshot;
    NSObject<OS_dispatch_queue> *_frameQueue;
    UIViewController *_editViewController;
    id <NMShortVideoCoverSelectDelegate> _delegate;
    NMShortVideoInfo *_videoInfo;
    AVAsset *_asset;
    AVComposition *_composition;
    NSMutableDictionary *_frameImages;
    AVAssetImageGenerator *_imageGenerator;
    NMShortVideoScreenshotExporter *_imageExporter;
    NMShortVideoPlayerView *_playerView;
    NMVideoPreviewSelectBar *_selectBar;
    UIView *_containerView;
    UILabel *_hintLabel;
    UIImage *_screenShot;
    CDStruct_1b6d18a9 _selectTime;
}

@property(retain, nonatomic) UIImage *screenShot; // @synthesize screenShot=_screenShot;
@property(nonatomic) CDStruct_1b6d18a9 selectTime; // @synthesize selectTime=_selectTime;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NMVideoPreviewSelectBar *selectBar; // @synthesize selectBar=_selectBar;
@property(retain, nonatomic) NMShortVideoPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) NMShortVideoScreenshotExporter *imageExporter; // @synthesize imageExporter=_imageExporter;
@property(retain, nonatomic) AVAssetImageGenerator *imageGenerator; // @synthesize imageGenerator=_imageGenerator;
@property(retain, nonatomic) NSMutableDictionary *frameImages; // @synthesize frameImages=_frameImages;
@property(retain, nonatomic) AVComposition *composition; // @synthesize composition=_composition;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) NMShortVideoInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(nonatomic) __weak id <NMShortVideoCoverSelectDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *editViewController; // @synthesize editViewController=_editViewController;
- (void).cxx_destruct;
- (void)imageForScreenShot:(CDUnknownBlockType)arg1;
- (void)didReceiveMemoryWarning;
- (void)videoPreviewSelectBar:(id)arg1 didSelectProgress:(float)arg2;
- (void)videoPreviewSelectBar:(id)arg1 willSelectProgress:(float)arg2;
- (CDStruct_1b6d18a9)_nominalTime:(CDStruct_1b6d18a9)arg1;
- (id)videoPreviewSelectBar:(id)arg1 imageForIndex:(unsigned long long)arg2;
- (long long)numberOfItemsInVideoPreviewBar:(id)arg1;
- (id)videoPreviewBar:(id)arg1 itemForIndex:(unsigned long long)arg2;
- (void)_updateEditBarAtIndex:(unsigned long long)arg1;
- (void)backIfAssetInvalid;
- (void)_appDidBecomeActive;
- (void)backgroundAdDimiss:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setupBarButtonItems;
- (void)setupSelectedCover;
- (void)viewDidLoad;
- (void)loadView;
- (void)completeAction:(id)arg1;
- (void)backAtion:(id)arg1;
- (void)_initQueue;
- (id)initWithWithVideoInfo:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool notNeedShowShareMenu;
@property(readonly, nonatomic) NSDictionary *screenShotLogParams;
@property(readonly) Class superclass;

@end

