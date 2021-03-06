//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GMGridViewCell.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, QL15PeopleVoteButton, QL15PeopleVoteStarInfo, QLSImageView, UILabel;

@interface QL15PeopleVoteRankingCell : GMGridViewCell <UIGestureRecognizerDelegate>
{
    _Bool _isAnimate;
    NSString *_indentify;
    id <Vote15PeopleRecordDelegate> _delegate;
    QL15PeopleVoteStarInfo *_voteItem;
    NSString *_downloadAppUrl;
    NSString *_OpenAppUrl;
    QLSImageView *_avatarView;
    UILabel *_nameLabel;
    QL15PeopleVoteButton *_voteBtn;
    UILabel *_animateLabel;
}

+ (void)prompFor15Vote:(id)arg1 subTitle:(id)arg2 paramsReport:(id)arg3 movieItem:(id)arg4 openAppUrl:(id)arg5 downloadURL:(id)arg6;
+ (id)defaultTitleForPopup:(id)arg1;
+ (void)Open15PeopleApp:(id)arg1 downloadURL:(id)arg2;
@property(nonatomic) _Bool isAnimate; // @synthesize isAnimate=_isAnimate;
@property(retain, nonatomic) UILabel *animateLabel; // @synthesize animateLabel=_animateLabel;
@property(retain, nonatomic) QL15PeopleVoteButton *voteBtn; // @synthesize voteBtn=_voteBtn;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) QLSImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(copy, nonatomic) NSString *OpenAppUrl; // @synthesize OpenAppUrl=_OpenAppUrl;
@property(copy, nonatomic) NSString *downloadAppUrl; // @synthesize downloadAppUrl=_downloadAppUrl;
@property(retain, nonatomic) QL15PeopleVoteStarInfo *voteItem; // @synthesize voteItem=_voteItem;
@property(nonatomic) __weak id <Vote15PeopleRecordDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *indentify; // @synthesize indentify=_indentify;
- (void).cxx_destruct;
- (void)voteAction;
- (void)voteCommit;
- (void)voteWithAnimation;
- (void)setObject:(id)arg1;
- (void)voteBtnPress:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

