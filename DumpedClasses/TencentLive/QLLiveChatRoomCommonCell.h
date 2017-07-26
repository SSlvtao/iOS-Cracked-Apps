//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CALayer, NSMutableString, QLAppLiveCommentBaseInfo, QLEditInputView, QLHTMLLabel, QLRichLabel, QLSImageView, QLTalkingRoomKeyboardCtl, UIImageView, UILabel, UIView;

@interface QLLiveChatRoomCommonCell : UITableViewCell
{
    id <QLLliveV3LivingDetailDataSouce><QLLiveChatRoomCellDelegate> _delegate;
    QLAppLiveCommentBaseInfo *_baseCommentInfo;
    QLSImageView *_userHead;
    QLHTMLLabel *_nameLable;
    UILabel *_addressLabel;
    UILabel *_timeLable;
    QLRichLabel *_contentLable;
    UIView *_contentBkg;
    UIImageView *_contentBubble;
    QLSImageView *_contentImg;
    CALayer *_daVImageLayer;
    NSMutableString *_nickNameStr;
    QLEditInputView *_starCommentInputView;
    QLTalkingRoomKeyboardCtl *_talkRoomKeyboardCtl;
}

+ (double)heightOfChatRoomCommonCell:(id)arg1;
+ (id)generateReplyStr;
+ (id)generateNameHtml:(id)arg1;
@property(nonatomic) __weak QLTalkingRoomKeyboardCtl *talkRoomKeyboardCtl; // @synthesize talkRoomKeyboardCtl=_talkRoomKeyboardCtl;
@property(nonatomic) __weak QLEditInputView *starCommentInputView; // @synthesize starCommentInputView=_starCommentInputView;
@property(copy, nonatomic) NSMutableString *nickNameStr; // @synthesize nickNameStr=_nickNameStr;
@property(retain, nonatomic) CALayer *daVImageLayer; // @synthesize daVImageLayer=_daVImageLayer;
@property(retain, nonatomic) QLSImageView *contentImg; // @synthesize contentImg=_contentImg;
@property(retain) UIImageView *contentBubble; // @synthesize contentBubble=_contentBubble;
@property(retain) UIView *contentBkg; // @synthesize contentBkg=_contentBkg;
@property(retain) QLRichLabel *contentLable; // @synthesize contentLable=_contentLable;
@property(retain) UILabel *timeLable; // @synthesize timeLable=_timeLable;
@property(retain) UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain) QLHTMLLabel *nameLable; // @synthesize nameLable=_nameLable;
@property(retain) QLSImageView *userHead; // @synthesize userHead=_userHead;
@property(retain) QLAppLiveCommentBaseInfo *baseCommentInfo; // @synthesize baseCommentInfo=_baseCommentInfo;
@property(nonatomic) __weak id <QLLliveV3LivingDetailDataSouce><QLLiveChatRoomCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_starCommentEditBusinessID;
- (id)_getStarCommentEditInputView;
- (void)_showTalkRoomKeyboard;
- (void)_showCommentInputView;
- (void)loginOKForComment;
- (_Bool)_userCanOperate;
- (void)_didTapBubbleAction:(id)arg1;
- (_Bool)_checkIsReplaySelf;
- (void)didTapPhotoAction:(id)arg1;
- (void)layoutSubviews;
- (void)decorateStartTagView;
- (void)setObject:(id)arg1;
- (void)resetCell;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

