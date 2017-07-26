//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootView.h"

#import "CTSCellDelegate.h"
#import "CTSHotelCellDelegate.h"
#import "CTSPoiCellDelegate.h"
#import "CTTableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CTMyTravelListCacheBean, CTSAnimateImageView, CTSTableView, CTSTableViewDataModel, CTVectorImageView, CTWxModel, NSString, TravelOrderInformationModel, UILabel, UIView;

@interface CTTripScheduleTableView : CTRootView <CTTableViewDelegate, UITableViewDelegate, UITableViewDataSource, CTSHotelCellDelegate, CTSPoiCellDelegate, CTSCellDelegate>
{
    CTMyTravelListCacheBean *cachBean;
    CTWxModel *shareModel;
    long long animationCount;
    double _lastOffset;
    _Bool _isRefresh;
    _Bool _isTableEditing;
    _Bool _insertingCard;
    int _currentSuggestType;
    NSString *refreshToken;
    CTSTableView *_mainTableView;
    CTSTableViewDataModel *_dataModel;
    UILabel *_userHello;
    CTSAnimateImageView *_userImage;
    id <CTTripScheduleTableViewDelegate> _delegate;
    id <CTTripScheduleTableViewDelegate> _scheduleTableViewDelegate;
    TravelOrderInformationModel *_model;
    UIView *_dateView;
    UILabel *_cityLab;
    UILabel *_monthLab;
    UILabel *_dayLab;
    UILabel *_weekLab;
    UILabel *_dayIcon;
    CTVectorImageView *_discoverRedDotView;
    UIView *_topView;
    CTVectorImageView *_discoverIcon;
    unsigned long long _networkTipsType;
}

@property(nonatomic) unsigned long long networkTipsType; // @synthesize networkTipsType=_networkTipsType;
@property(nonatomic) __weak CTVectorImageView *discoverIcon; // @synthesize discoverIcon=_discoverIcon;
@property(nonatomic) __weak UIView *topView; // @synthesize topView=_topView;
@property(nonatomic) __weak CTVectorImageView *discoverRedDotView; // @synthesize discoverRedDotView=_discoverRedDotView;
@property(nonatomic) __weak UILabel *dayIcon; // @synthesize dayIcon=_dayIcon;
@property(nonatomic) __weak UILabel *weekLab; // @synthesize weekLab=_weekLab;
@property(nonatomic) __weak UILabel *dayLab; // @synthesize dayLab=_dayLab;
@property(nonatomic) __weak UILabel *monthLab; // @synthesize monthLab=_monthLab;
@property(nonatomic) __weak UILabel *cityLab; // @synthesize cityLab=_cityLab;
@property(nonatomic) __weak UIView *dateView; // @synthesize dateView=_dateView;
@property(nonatomic) int currentSuggestType; // @synthesize currentSuggestType=_currentSuggestType;
@property(nonatomic, getter=isInsertingCard) _Bool insertingCard; // @synthesize insertingCard=_insertingCard;
@property(nonatomic) _Bool isTableEditing; // @synthesize isTableEditing=_isTableEditing;
@property(retain, nonatomic) TravelOrderInformationModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <CTTripScheduleTableViewDelegate> scheduleTableViewDelegate; // @synthesize scheduleTableViewDelegate=_scheduleTableViewDelegate;
@property(nonatomic) __weak id <CTTripScheduleTableViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak CTSAnimateImageView *userImage; // @synthesize userImage=_userImage;
@property(nonatomic) __weak UILabel *userHello; // @synthesize userHello=_userHello;
@property(retain, nonatomic) CTSTableViewDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(nonatomic) _Bool isRefresh; // @synthesize isRefresh=_isRefresh;
@property(retain, nonatomic) CTSTableView *mainTableView; // @synthesize mainTableView=_mainTableView;
@property(copy, nonatomic) NSString *refreshToken; // @synthesize refreshToken;
- (void).cxx_destruct;
- (void)reloadCellReminderUI;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)gotoCouponMoreURL:(id)arg1;
- (void)gotoCouponDetailURL:(id)arg1;
- (void)showRecommendInfo:(id)arg1;
- (_Bool)shouldDoActionWithCell:(id)arg1;
- (void)ctsPoiCellBuyTicket:(id)arg1;
- (void)ctsHotelCheckInVoucher:(id)arg1;
- (void)ctsHotelContinueBookingAction:(id)arg1;
- (void)ctsHotelGoBookingAction:(id)arg1;
- (_Bool)checkNetWorkAndLocationEnabled;
- (void)positionCardForSmartTripId:(long long)arg1;
- (void)positionCardWithModel:(id)arg1;
- (void)refreshScheduleList;
- (_Bool)hasScreenCard;
- (void)sendLatestBrowseHistoryRequest;
- (void)reloadVisibleRecommendCell;
- (void)reSetVisibleRecommendCell;
- (void)sendTLRecommendService:(id)arg1;
- (_Bool)changeRecommendModel:(id)arg1 toRequestList:(id)arg2;
- (void)handleSendRecommendRequest;
- (void)showCellDateView:(id)arg1;
- (void)handleDateView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)noNetworkTipsMessage;
- (void)constructOrderIdToSmartTripIdMapping;
- (void)travelRemindHandler;
- (void)startLoadRecommendData;
- (void)reloadMainTableView;
- (void)pullDownToRefreshData:(id)arg1;
- (void)sendTravelListService;
- (void)updateNoNetworkTips:(unsigned long long)arg1;
- (void)cleanReminderWithSmartTripId:(long long)arg1 indexPath:(id)arg2;
- (void)ctsCardCellShareCard:(id)arg1;
- (void)ctsCardCellUpdateCardDate:(id)arg1;
- (void)logDeleteCardCodeWithModel:(id)arg1;
- (void)deleteCardServiceWithModel:(id)arg1;
- (void)ctsCardCellDeleteCard:(id)arg1;
- (void)logCardClickCodeWithModel:(id)arg1;
- (void)cleanReminderFlag:(id)arg1;
- (void)selectCellAction:(id)arg1 shouldProcess:(_Bool)arg2;
- (void)scheduleCellBeganToTouch:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)showHistory:(id)arg1;
- (void)showDiscover:(id)arg1;
- (void)showSettingView:(id)arg1;
- (void)setnavigtionDelegate;
- (void)setUeserInfo;
- (void)initView;
- (void)initData;
- (void)setHidden:(_Bool)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)updateSmartTripIds:(long long)arg1;
- (_Bool)shouldShowHotelCouponView:(long long)arg1;
- (id)hotelRecommendCouponModel:(id)arg1;
- (id)hotelCardCouponModel;
- (void)showHotelCouponView:(id)arg1;
- (void)hotelRecommendCouponHandler:(id)arg1;
- (void)hotelCardCouponHandler;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
