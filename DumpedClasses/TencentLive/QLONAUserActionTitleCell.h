//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLChannelUserTitleCell.h"

#import "QLTopicsPopMenuDelegate.h"

@class NSString, QLFeedbackModel, QLJCEONAUserActionTitle, QLSImageView, QLTopicsPopMenu, UIImageView;

@interface QLONAUserActionTitleCell : QLChannelUserTitleCell <QLTopicsPopMenuDelegate>
{
    id <QLONAUserActionTitleCellDelegate> _delegate;
    QLTopicsPopMenu *_popMenu;
    QLSImageView *_userHeadImgview;
    QLJCEONAUserActionTitle *_actionTitle;
    QLFeedbackModel *_feedbackModel;
    UIImageView *_enterMoreImgView;
}

+ (double)getHeightWithPosterObj:(id)arg1 uInfo:(id)arg2;
@property(retain, nonatomic) UIImageView *enterMoreImgView; // @synthesize enterMoreImgView=_enterMoreImgView;
@property(retain, nonatomic) QLFeedbackModel *feedbackModel; // @synthesize feedbackModel=_feedbackModel;
@property(retain, nonatomic) QLJCEONAUserActionTitle *actionTitle; // @synthesize actionTitle=_actionTitle;
@property(retain, nonatomic) QLSImageView *userHeadImgview; // @synthesize userHeadImgview=_userHeadImgview;
@property(retain, nonatomic) QLTopicsPopMenu *popMenu; // @synthesize popMenu=_popMenu;
@property(nonatomic) __weak id <QLONAUserActionTitleCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)topicPopMenu:(id)arg1 clickedMenuItemTag:(long long)arg2;
- (void)removeCellResouresWhenReused;
- (void)freshPopMenuAndShow;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)singleClickAction:(id)arg1;
- (void)headClick:(id)arg1;
- (void)layoutSubviews;
- (void)setAccessoryEnabled:(_Bool)arg1;
- (void)startLoadModel;
- (void)setObject:(id)arg1;
- (void)singleClick:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

