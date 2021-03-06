//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMCategoryOperateDO, NSMutableArray<FMFishpondDO>, NSMutableArray<FMItemDO>, NSNumber, NSString;

@interface FMItemDOList : NSObject
{
    NSString *_serverTime;
    _Bool _nextPage;
    _Bool _previousPage;
    NSNumber *_totalCount;
    _Bool _recommend;
    NSMutableArray<FMItemDO> *_items;
    NSString *_startTimePoint;
    FMCategoryOperateDO *_operationData;
    NSString *_fishpoolSeperateLine;
    NSString *_fishpoolSearchTip;
    NSString *_fishpoolSearchTipLink;
    NSString *_itemsSeperateLine;
    NSMutableArray<FMFishpondDO> *_fishpools;
    NSMutableArray<FMItemDO> *_noPaginateItems;
    NSString *_seperateLine;
}

@property(copy, nonatomic) NSString *seperateLine; // @synthesize seperateLine=_seperateLine;
@property(retain, nonatomic) NSMutableArray<FMItemDO> *noPaginateItems; // @synthesize noPaginateItems=_noPaginateItems;
@property(nonatomic) _Bool recommend; // @synthesize recommend=_recommend;
@property(retain, nonatomic) NSMutableArray<FMFishpondDO> *fishpools; // @synthesize fishpools=_fishpools;
@property(copy, nonatomic) NSString *itemsSeperateLine; // @synthesize itemsSeperateLine=_itemsSeperateLine;
@property(copy, nonatomic) NSString *fishpoolSearchTipLink; // @synthesize fishpoolSearchTipLink=_fishpoolSearchTipLink;
@property(copy, nonatomic) NSString *fishpoolSearchTip; // @synthesize fishpoolSearchTip=_fishpoolSearchTip;
@property(copy, nonatomic) NSString *fishpoolSeperateLine; // @synthesize fishpoolSeperateLine=_fishpoolSeperateLine;
@property(retain, nonatomic) FMCategoryOperateDO *operationData; // @synthesize operationData=_operationData;
@property(copy, nonatomic) NSString *startTimePoint; // @synthesize startTimePoint=_startTimePoint;
@property(retain, nonatomic) NSMutableArray<FMItemDO> *items; // @synthesize items=_items;
@property(retain, nonatomic) NSNumber *totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) _Bool previousPage; // @synthesize previousPage=_previousPage;
@property(nonatomic) _Bool nextPage; // @synthesize nextPage=_nextPage;
@property(retain, nonatomic) NSString *serverTime; // @synthesize serverTime=_serverTime;
- (void).cxx_destruct;
- (id)init;

@end

