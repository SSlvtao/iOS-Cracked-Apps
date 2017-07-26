//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseTabelViewCell.h"

@class NSString, QLJCEAction, QLJCEONAMatchSchedule, QLPullDownloadEntryViewV1, QLSImageView, UIButton, UILabel;

@interface QLMatchScheduleView : QLBaseTabelViewCell
{
    _Bool _isAttended;
    int _sportMatchState;
    QLJCEONAMatchSchedule *_schedule;
    QLSImageView *_promotionImgView;
    UILabel *_mainTxtLbl;
    UILabel *_subTxtLbl;
    UIButton *_btnNotify;
    UIButton *_btnLive;
    QLPullDownloadEntryViewV1 *_bottomPullDownloadEntry;
    QLJCEAction *_touchViewAction;
    NSString *_infoTitle;
}

+ (double)scheduleCellTotalHeigh:(id)arg1;
+ (double)getHeightWithPosterObj:(id)arg1 uInfo:(id)arg2;
@property(copy, nonatomic) NSString *infoTitle; // @synthesize infoTitle=_infoTitle;
@property(retain, nonatomic) QLJCEAction *touchViewAction; // @synthesize touchViewAction=_touchViewAction;
@property(nonatomic) int sportMatchState; // @synthesize sportMatchState=_sportMatchState;
@property(retain, nonatomic) QLPullDownloadEntryViewV1 *bottomPullDownloadEntry; // @synthesize bottomPullDownloadEntry=_bottomPullDownloadEntry;
@property(retain, nonatomic) UIButton *btnLive; // @synthesize btnLive=_btnLive;
@property(retain, nonatomic) UIButton *btnNotify; // @synthesize btnNotify=_btnNotify;
@property(readonly, nonatomic) UILabel *subTxtLbl; // @synthesize subTxtLbl=_subTxtLbl;
@property(readonly, nonatomic) UILabel *mainTxtLbl; // @synthesize mainTxtLbl=_mainTxtLbl;
@property(readonly, nonatomic) QLSImageView *promotionImgView; // @synthesize promotionImgView=_promotionImgView;
@property(retain, nonatomic) QLJCEONAMatchSchedule *schedule; // @synthesize schedule=_schedule;
- (void).cxx_destruct;
- (void)setLiveStyle:(_Bool)arg1;
- (void)refreshAttentState;
- (void)notifyClicked:(id)arg1;
- (void)setObject:(id)arg1;
- (void)startLoadModel;
- (void)layoutSubviews;
- (void)reportShowUp;
- (void)tapClicked:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

