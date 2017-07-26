//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLMomentTableViewController.h"

#import "P_QLDragToRefresh.h"
#import "QLJumpObjectOpenUrlDelegate.h"
#import "QLShareDataSource.h"

@class NSArray, NSData, NSDictionary, NSString, QLJCEMiniProgramInfo, QLMomentBottomView, QLMomentCommentBottomView, QLMomentExposureItem, QLMovieItem, QLNewMessageModel, QLWebViewController, UIButton, UIImage, UIViewController;

@interface QLMomentSinglePublishController : QLMomentTableViewController <P_QLDragToRefresh, QLShareDataSource, QLJumpObjectOpenUrlDelegate>
{
    unsigned long long _fromType;
    _Bool _isFirstIn;
    QLNewMessageModel *_fromNewMessageModel;
    NSString *_h5url;
    NSString *_rankIndex;
    UIButton *_moreButton;
    QLMomentCommentBottomView *_publishLabel;
    QLWebViewController *_webViewCtrl;
    QLMomentBottomView *_momentBottomView;
    QLMomentExposureItem *_exposureItem;
}

+ (_Bool)openJumpWithMessage:(id)arg1 byType:(unsigned long long)arg2;
+ (_Bool)openJumpSinglePublish:(id)arg1 byType:(unsigned long long)arg2;
+ (_Bool)OpenJumpUrlWithobject;
@property(retain, nonatomic) QLMomentExposureItem *exposureItem; // @synthesize exposureItem=_exposureItem;
@property(nonatomic) _Bool isFirstIn; // @synthesize isFirstIn=_isFirstIn;
@property(nonatomic) __weak QLMomentBottomView *momentBottomView; // @synthesize momentBottomView=_momentBottomView;
@property(retain, nonatomic) QLWebViewController *webViewCtrl; // @synthesize webViewCtrl=_webViewCtrl;
@property(retain, nonatomic) QLMomentCommentBottomView *publishLabel; // @synthesize publishLabel=_publishLabel;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) NSString *rankIndex; // @synthesize rankIndex=_rankIndex;
@property(retain, nonatomic) NSString *h5url; // @synthesize h5url=_h5url;
@property(retain, nonatomic) QLNewMessageModel *fromNewMessageModel; // @synthesize fromNewMessageModel=_fromNewMessageModel;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)handlePutCommentSucess:(id)arg1;
- (void)handlePutCommentFailed:(id)arg1;
- (void)engineDidFinishLoad:(id)arg1;
- (void)dragReload:(_Bool)arg1;
- (void)RequestData:(int)arg1;
- (long long)footerDragRefreshStyle;
- (_Bool)hasFootterDragRefresh;
- (_Bool)hasHeaderDragRefresh;
- (long long)headerDragRefreshStyle;
- (id)dragRefreshView;
- (void)openActionSheet:(id)arg1;
- (id)getReportParam;
- (_Bool)canPullUpByMainFeed;
- (_Bool)canPulldownByMainFeed;
- (_Bool)canPullUpByMessage;
- (_Bool)canPulldownByMessage;
- (_Bool)canPullUpByLike;
- (_Bool)canPulldownByLike;
- (void)updateUIByMainFeed:(id)arg1;
- (void)upadteUIByMessage:(id)arg1;
- (void)updateUIByLike:(id)arg1;
- (void)momentSinglePublishControllerType:(unsigned long long)arg1;
- (void)deleteMomentItemNotification:(id)arg1;
- (void)updateMomentCell:(id)arg1;
- (id)indexPathWithObject:(id)arg1;
- (void)retryDown:(id)arg1;
- (id)pageDescription;
- (void)loadSingleFeedMode:(int)arg1;
- (void)convertToQLNewMessageModelByReceivedMessageItem:(id)arg1;
- (void)convertToQLNewMessageModelByMomentPublish:(id)arg1;
- (void)removeObserver;
- (void)addObserver;
- (unsigned long long)momentSinglePublishControllerType;
- (id)initWithMomentPublish:(id)arg1 byType:(unsigned long long)arg2;
- (id)initWithMessage:(id)arg1 byType:(unsigned long long)arg2;
- (id)initWithPublishID:(id)arg1 byType:(unsigned long long)arg2;
- (id)initWithPublishID:(id)arg1;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(readonly, nonatomic) NSArray *sharePictureList;
@property(readonly, nonatomic) NSString *shareContentTail;
@property(readonly, nonatomic) NSString *shareContent;
@property(readonly, nonatomic) NSString *shareSingleTitle;
@property(readonly, nonatomic) unsigned long long shareStyle;
@property(readonly, nonatomic) NSString *shareFromPage;
@property(readonly, nonatomic) unsigned long long shareDataType;
@property(readonly, nonatomic) NSString *shareURL;
@property(readonly, nonatomic) UIImage *shareImage;
@property(readonly, nonatomic) NSString *shareImageURL;
@property(readonly, nonatomic) NSString *shareSubTitle;
@property(readonly, nonatomic) NSString *shareTitle;
@property(readonly, nonatomic) NSString *shareID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool needShare;
@property(readonly, nonatomic) NSString *shareActionUrl;
@property(readonly, nonatomic) UIViewController *shareController;
@property(readonly, nonatomic) NSString *shareCopyContent;
@property(readonly, nonatomic) NSDictionary *shareExtendInfo;
@property(readonly, nonatomic) NSData *shareGifData;
@property(readonly, nonatomic) QLJCEMiniProgramInfo *shareMiniProgramInfo;
@property(readonly, nonatomic) NSData *shareOriImgData;
@property(readonly, nonatomic) unsigned long long sharePlatformMask;
@property(readonly, nonatomic) NSDictionary *shareReportInfo;
@property(readonly, nonatomic) QLMovieItem *shareVideoInfo;
@property(readonly) Class superclass;

@end

