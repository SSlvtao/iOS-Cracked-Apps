//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootView.h"

#import "CTSDiscoverDelegate.h"
#import "CTSNoScheduleCellDelegate.h"

@class CTSAnimateImageView, CTSDiscoverTable, CTSNoScheduleCell, CTVectorImageView, NSLayoutConstraint, NSString, UIColor, UIImageView, UILabel, UIView;

@interface CTTripNoScheduleView : CTRootView <CTSNoScheduleCellDelegate, CTSDiscoverDelegate>
{
    UIColor *mainContentColor;
    CTRootView *homeTableView;
    int _showLoadStatus;
    id <CTSNoScheduleViewDelegate> _delegate;
    CTVectorImageView *_discoverRemindIcon;
    UILabel *_userName;
    CTSAnimateImageView *_userHead;
    CTSDiscoverTable *__mainTableView;
    CTSNoScheduleCell *_headerView;
    UIView *_topView;
    NSLayoutConstraint *_topViewHeight;
    CTVectorImageView *_discoverIcon;
    CTSNoScheduleCell *_noScheduleCell;
    UIImageView *_topShadow;
}

@property(nonatomic) __weak UIImageView *topShadow; // @synthesize topShadow=_topShadow;
@property(retain, nonatomic) CTSNoScheduleCell *noScheduleCell; // @synthesize noScheduleCell=_noScheduleCell;
@property(nonatomic) __weak CTVectorImageView *discoverIcon; // @synthesize discoverIcon=_discoverIcon;
@property(nonatomic) __weak NSLayoutConstraint *topViewHeight; // @synthesize topViewHeight=_topViewHeight;
@property(nonatomic) __weak UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) CTSNoScheduleCell *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) CTSDiscoverTable *_mainTableView; // @synthesize _mainTableView=__mainTableView;
@property(nonatomic) __weak CTSAnimateImageView *userHead; // @synthesize userHead=_userHead;
@property(nonatomic) __weak UILabel *userName; // @synthesize userName=_userName;
@property(nonatomic) __weak CTVectorImageView *discoverRemindIcon; // @synthesize discoverRemindIcon=_discoverRemindIcon;
@property(nonatomic) int showLoadStatus; // @synthesize showLoadStatus=_showLoadStatus;
@property(nonatomic) __weak id <CTSNoScheduleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)noScheduleHeaderView;
- (id)noScheduleTableView;
- (void)setUserInfo;
- (void)noScheduleCellRepeartAction:(id)arg1;
- (void)noScheduleCellShowLoginView:(id)arg1;
- (_Bool)canPullDownRefresh;
- (void)refreshTravelListResult:(_Bool)arg1;
- (void)refreshDiscoverEnd;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)refreshNoScheduleHeadImage:(id)arg1;
- (void)willShowDiscoverData;
- (void)showSettingView:(id)arg1;
- (void)discoverView:(id)arg1;
- (void)showHistoryScheduleAction:(id)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

