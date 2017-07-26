//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QLAutoScrollLabel, QLJCECoralSummaryInfo, QLSImageView, QLThemeListPanel, UIImageView, UILabel;

@interface QLCommentCountUserHeaderView : UIView
{
    QLAutoScrollLabel *_paomaTxtView;
    id <QLCommentCountUserHeaderViewClickEventDelegate> _delegate;
    UIImageView *_bgImg;
    QLSImageView *_headerImgView;
    UILabel *_countLabel;
    UILabel *_commentNumBubbleLabel;
    long long _totalCommentNum;
    QLThemeListPanel *_starListView;
    QLJCECoralSummaryInfo *_headSummaryInfo;
    QLSImageView *_starBottomRightImgView;
}

@property(retain, nonatomic) QLSImageView *starBottomRightImgView; // @synthesize starBottomRightImgView=_starBottomRightImgView;
@property(retain, nonatomic) QLJCECoralSummaryInfo *headSummaryInfo; // @synthesize headSummaryInfo=_headSummaryInfo;
@property(retain, nonatomic) QLThemeListPanel *starListView; // @synthesize starListView=_starListView;
@property(nonatomic) long long totalCommentNum; // @synthesize totalCommentNum=_totalCommentNum;
@property(retain, nonatomic) UILabel *commentNumBubbleLabel; // @synthesize commentNumBubbleLabel=_commentNumBubbleLabel;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) QLSImageView *headerImgView; // @synthesize headerImgView=_headerImgView;
@property(retain, nonatomic) UIImageView *bgImg; // @synthesize bgImg=_bgImg;
@property(readonly) QLAutoScrollLabel *paomaTxtView; // @synthesize paomaTxtView=_paomaTxtView;
@property(nonatomic) __weak id <QLCommentCountUserHeaderViewClickEventDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setShortStyle;
- (void)setCountLabelTitle:(id)arg1;
- (id)getCountLabelText;
- (void)setObjce:(id)arg1;
- (id)summaryInfo;
- (void)layoutSubviews;
- (double)widthForTextString:(id)arg1 height:(double)arg2 fontSize:(double)arg3;
- (void)commentViewClicked:(id)arg1;
- (id)initWithCommentsData:(id)arg1;
- (void)dealloc;

@end

