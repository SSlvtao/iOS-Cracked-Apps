//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NXViewModel.h"

#import "NXStoreProtocol.h"

@class NSArray, NSMutableArray, NSString, TBTakeoutOrderDetailFooterModel, TBTakeoutOrderDetailModel, TBTakeoutOrderDetailStoreModel;

@interface TBTakeoutOrderDetailViewModel : NXViewModel <NXStoreProtocol>
{
    _Bool _showRiderMap;
    NSString *_tbMainOrderId;
    TBTakeoutOrderDetailModel *_model;
    TBTakeoutOrderDetailStoreModel *_storeViewModel;
    TBTakeoutOrderDetailFooterModel *_footerViewModel;
    long long _riderStatus;
    NSMutableArray *_processList;
    unsigned long long _dataGroupCount;
    NSMutableArray *_dataList;
}

@property(retain, nonatomic) NSMutableArray *dataList; // @synthesize dataList=_dataList;
@property(nonatomic) unsigned long long dataGroupCount; // @synthesize dataGroupCount=_dataGroupCount;
@property(retain, nonatomic) NSMutableArray *processList; // @synthesize processList=_processList;
@property(nonatomic) long long riderStatus; // @synthesize riderStatus=_riderStatus;
@property(retain, nonatomic) TBTakeoutOrderDetailFooterModel *footerViewModel; // @synthesize footerViewModel=_footerViewModel;
@property(retain, nonatomic) TBTakeoutOrderDetailStoreModel *storeViewModel; // @synthesize storeViewModel=_storeViewModel;
@property(nonatomic) _Bool showRiderMap; // @synthesize showRiderMap=_showRiderMap;
@property(retain, nonatomic) TBTakeoutOrderDetailModel *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *tbMainOrderId; // @synthesize tbMainOrderId=_tbMainOrderId;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *subViewModels;
- (id)orderItems;
- (id)orderProcessList;
@property(readonly, nonatomic) long long statusInterval;
@property(readonly, nonatomic) long long appointOrderId;
- (void)clear;
- (void)parse:(id)arg1;
- (Class)modelClass;
- (struct NSDictionary *)api;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

