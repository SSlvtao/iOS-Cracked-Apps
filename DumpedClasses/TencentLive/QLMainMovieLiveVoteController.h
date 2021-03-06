//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "KKMediaPlayerEventProtocol.h"
#import "QLLiveDataProtocol.h"

@class NSString, QLAppLiveCommentBaseInfo, QLLiveV3HostManTabViewCtl;

@interface QLMainMovieLiveVoteController : UIViewController <QLLiveDataProtocol, KKMediaPlayerEventProtocol>
{
    _Bool _isFull;
    double _lastShowTime;
    id <KKMediaControllPlayerProtocol> _mediaControllPlayer;
    QLLiveV3HostManTabViewCtl *_dataSource;
    QLAppLiveCommentBaseInfo *_baseInfo;
}

@property(retain, nonatomic) QLAppLiveCommentBaseInfo *baseInfo; // @synthesize baseInfo=_baseInfo;
@property(nonatomic) __weak QLLiveV3HostManTabViewCtl *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <KKMediaControllPlayerProtocol> mediaControllPlayer; // @synthesize mediaControllPlayer=_mediaControllPlayer;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)clearResource;
- (void)showMainMovieVoteViewWithFrame:(struct CGRect)arg1 full:(_Bool)arg2;
- (id)modelsIndentifiers:(id)arg1;
- (id)getLastBaseInfo:(id)arg1;
- (id)currentLiveVoteInfo;
- (void)didFinishLoadCommentList:(id)arg1;
- (id)currentMsgId;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

