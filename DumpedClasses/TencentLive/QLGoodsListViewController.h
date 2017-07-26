//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseTableViewController.h"

#import "P_QLDragToRefresh.h"
#import "QLJumpObjectOpenUrlDelegate.h"

@class NSArray, NSDictionary, NSString, QLCoinListModel, QLDiamondListModel, QLMyPropertySmallHeaderView, QLPropertyActivityView, QLPropertyMineModel;

@interface QLGoodsListViewController : QLBaseTableViewController <QLJumpObjectOpenUrlDelegate, P_QLDragToRefresh>
{
    long long _goodsType;
    NSArray *_goodsList;
    NSArray *_myPropertyList;
    NSString *_activTip;
    NSArray *_present_level;
    long long _propTypeFrom;
    id <QLGoodsListViewEventProtocol> _goodsDelegate;
    NSDictionary *_activDict;
    long long _first_save_flag;
    QLMyPropertySmallHeaderView *_headerView;
    QLPropertyActivityView *_bannerTipView;
    QLCoinListModel *_coinListModel;
    QLDiamondListModel *_dimondListModel;
    QLPropertyMineModel *_propertyMineModel;
    long long _propertyDiamondCount;
}

+ (_Bool)OpenJumpUrlWithobject;
@property(nonatomic) long long propertyDiamondCount; // @synthesize propertyDiamondCount=_propertyDiamondCount;
@property(retain, nonatomic) QLPropertyMineModel *propertyMineModel; // @synthesize propertyMineModel=_propertyMineModel;
@property(retain, nonatomic) QLDiamondListModel *dimondListModel; // @synthesize dimondListModel=_dimondListModel;
@property(retain, nonatomic) QLCoinListModel *coinListModel; // @synthesize coinListModel=_coinListModel;
@property(retain, nonatomic) QLPropertyActivityView *bannerTipView; // @synthesize bannerTipView=_bannerTipView;
@property(retain, nonatomic) QLMyPropertySmallHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) long long first_save_flag; // @synthesize first_save_flag=_first_save_flag;
@property(retain, nonatomic) NSDictionary *activDict; // @synthesize activDict=_activDict;
@property(nonatomic) __weak id <QLGoodsListViewEventProtocol> goodsDelegate; // @synthesize goodsDelegate=_goodsDelegate;
@property(nonatomic) long long propTypeFrom; // @synthesize propTypeFrom=_propTypeFrom;
@property(retain, nonatomic) NSArray *present_level; // @synthesize present_level=_present_level;
@property(retain, nonatomic) NSString *activTip; // @synthesize activTip=_activTip;
@property(retain, nonatomic) NSArray *myPropertyList; // @synthesize myPropertyList=_myPropertyList;
@property(retain, nonatomic) NSArray *goodsList; // @synthesize goodsList=_goodsList;
@property(nonatomic) long long goodsType; // @synthesize goodsType=_goodsType;
- (void).cxx_destruct;
- (void)delayDismissWithPayResult:(long long)arg1;
- (void)popUp:(_Bool)arg1;
- (void)autoDismissWithPayResult:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)responseDragbackAtScreenPoint:(struct CGPoint)arg1;
- (void)dragReload:(_Bool)arg1;
- (_Bool)hasFootterDragRefresh;
- (_Bool)hasHeaderDragRefresh;
- (id)dragRefreshView;
- (void)pushAnotherViewCtl:(id)arg1;
- (void)payDiamondFaild:(id)arg1;
- (void)payDiamondSuccess:(id)arg1;
- (void)requestModel:(id)arg1 didFailedLoadWithError:(id)arg2;
- (void)requestModelDidFinishLoad:(id)arg1;
- (void)requestModelDidStartLoad:(id)arg1;
- (_Bool)isRightModel:(id)arg1;
- (_Bool)isDiamondEnough:(id)arg1;
- (void)retryDown:(id)arg1;
- (id)subtitleForEmpty;
- (id)titleForEmpty;
- (struct CGRect)frameOfPageStatusView;
- (id)getActivBannerTip;
- (id)getActivTip:(long long)arg1;
- (void)receiveGoodsActivityFaild:(id)arg1;
- (void)receiveGoodsActivitySucess:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)setframe;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

