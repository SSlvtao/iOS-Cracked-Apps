//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseCell.h"

#import "QLSelectButtonDelegate.h"

@class NSString, QLMomentHeadView, QLMomentUser, QLRichLabel, QLSelectButton, UIImageView, UILabel;

@interface QLMomentSelectFriendListCell : QLBaseCell <QLSelectButtonDelegate>
{
    QLMomentHeadView *_headImageView;
    QLSelectButton *_selectButton;
    UILabel *_nicknameLabel;
    QLRichLabel *_nicknameRichLabel;
    UIImageView *_bottomLine;
    QLMomentUser *_currentUser;
    id <QLMomentSelectFriendCellDelegate> _delegate;
}

@property(nonatomic) __weak id <QLMomentSelectFriendCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) QLMomentUser *currentUser; // @synthesize currentUser=_currentUser;
@property(readonly, nonatomic) UIImageView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(readonly, nonatomic) QLRichLabel *nicknameRichLabel; // @synthesize nicknameRichLabel=_nicknameRichLabel;
@property(readonly, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(readonly, nonatomic) QLSelectButton *selectButton; // @synthesize selectButton=_selectButton;
@property(readonly, nonatomic) QLMomentHeadView *headImageView; // @synthesize headImageView=_headImageView;
- (void).cxx_destruct;
- (void)qlSelectButton:(id)arg1 selectionDidChange:(_Bool)arg2;
- (void)prepareForReuse;
- (void)setObject:(id)arg1;
- (void)layoutSubviews;
- (id)pheadImageView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

