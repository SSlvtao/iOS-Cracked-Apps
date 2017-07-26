//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseTableViewController.h"

#import "P_QLDragToRefresh.h"
#import "QLBaseInputViewDelegate.h"
#import "QLLiveChatBaseCellDelegate.h"
#import "QLLiveChatGuessCellDelegate.h"
#import "QLLiveChatTreeCellDelegate.h"
#import "QLLiveChatVoteCellDelegate.h"
#import "QLStarCommentPublishDelegate.h"

@class CALayer, NSString, QLAppLiveCommentBaseInfo, QLAppLiveCommentDetailReqModel, QLEditInputView, QLTalkingRoomKeyboardCtl;

@interface QLLiveChatFeedsDetailController : QLBaseTableViewController <QLLiveChatBaseCellDelegate, QLBaseInputViewDelegate, QLLiveChatVoteCellDelegate, QLLiveChatGuessCellDelegate, P_QLDragToRefresh, QLLiveChatTreeCellDelegate, QLStarCommentPublishDelegate>
{
    id <QLLiveChatFeedsDetailCtlDataSource> _dataSource;
    QLAppLiveCommentBaseInfo *_commentInfo;
    NSString *_commentKey;
    NSString *_filterKey;
    QLTalkingRoomKeyboardCtl *_talkRoomKeyboardCtl;
    QLEditInputView *_commentInputView;
    QLAppLiveCommentDetailReqModel *_cmdetailModel;
    QLAppLiveCommentBaseInfo *_replyComment;
    CALayer *_lineSeparator;
    struct CGRect _userTapFrame;
}

@property(retain, nonatomic) CALayer *lineSeparator; // @synthesize lineSeparator=_lineSeparator;
@property(retain, nonatomic) QLAppLiveCommentBaseInfo *replyComment; // @synthesize replyComment=_replyComment;
@property(nonatomic) struct CGRect userTapFrame; // @synthesize userTapFrame=_userTapFrame;
@property(retain, nonatomic) QLAppLiveCommentDetailReqModel *cmdetailModel; // @synthesize cmdetailModel=_cmdetailModel;
@property(retain, nonatomic) QLEditInputView *commentInputView; // @synthesize commentInputView=_commentInputView;
@property(nonatomic) __weak QLTalkingRoomKeyboardCtl *talkRoomKeyboardCtl; // @synthesize talkRoomKeyboardCtl=_talkRoomKeyboardCtl;
@property(retain, nonatomic) NSString *filterKey; // @synthesize filterKey=_filterKey;
@property(retain, nonatomic) NSString *commentKey; // @synthesize commentKey=_commentKey;
@property(retain, nonatomic) QLAppLiveCommentBaseInfo *commentInfo; // @synthesize commentInfo=_commentInfo;
@property(nonatomic) __weak id <QLLiveChatFeedsDetailCtlDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)didUnhighlight:(id)arg1;
- (void)shouldHighlight:(id)arg1;
- (void)didPressCellInside:(id)arg1 withIndexPath:(id)arg2;
- (void)didTipCellInside:(id)arg1;
- (void)showLoading:(_Bool)arg1;
- (_Bool)isHorizontal;
- (void)didTapGuess;
- (void)didPressVoteButton:(id)arg1;
- (void)didClickPhotoBtn;
- (id)starCommentEditInputViewObject;
- (id)momentInputViewControlInstance;
- (void)momentInputViewDidPressSendButton:(id)arg1;
- (void)commentRetrySendFeed:(id)arg1;
- (unsigned long long)getPostTypeOption;
- (long long)getUserProfileType;
- (void)keyboardWasShown:(id)arg1;
- (id)commentWillBegin:(id)arg1 withItem:(id)arg2;
- (void)commentWillTipLikeButton:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)loginOKForComment;
- (_Bool)shouldEditComment:(id)arg1;
- (_Bool)shouldShowStarTheme;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dragReload:(_Bool)arg1;
- (long long)footerDragRefreshStyle;
- (_Bool)hasFootterDragRefresh;
- (_Bool)hasHeaderDragRefresh;
- (long long)headerDragRefreshStyle;
- (id)dragRefreshView;
- (void)requestModelDidFinishLoad:(id)arg1;
- (id)buildCommentDetailWithCommentList:(id)arg1 rootCommentInfo:(id)arg2;
- (void)deleteWillPostNotification:(id)arg1;
- (void)handleVoteAction:(id)arg1;
- (void)handlePostLikeSucess:(id)arg1;
- (void)handleCommentResult:(id)arg1;
- (void)handleCommentFake:(id)arg1;
- (void)retryDown:(id)arg1;
- (void)dealloc;
- (void)initData;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

