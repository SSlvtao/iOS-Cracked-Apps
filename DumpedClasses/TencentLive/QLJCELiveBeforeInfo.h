//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSDictionary, QLJCEShareItem;

@interface QLJCELiveBeforeInfo : JceObjectV2
{
    _Bool jcev2_p_4_o_hasLotteryInfo;
    NSArray *jcev2_p_0_r_uiData__b0x9i_VOQLJCETempletLine;
    NSArray *jcev2_p_1_o_videoItemList__b0x9i_VOQLJCEVideoItemData;
    NSDictionary *jcev2_p_2_o_coverDataMap__b0x9i_M09ONSStringOQLJCECoverDataList;
    QLJCEShareItem *jcev2_p_3_o_shareItem;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_hasLotteryInfo, setter=setJce_hasLotteryInfo:) _Bool jcev2_p_4_o_hasLotteryInfo; // @synthesize jcev2_p_4_o_hasLotteryInfo;
@property(retain, nonatomic, getter=jce_shareItem, setter=setJce_shareItem:) QLJCEShareItem *jcev2_p_3_o_shareItem; // @synthesize jcev2_p_3_o_shareItem;
@property(retain, nonatomic, getter=jce_coverDataMap, setter=setJce_coverDataMap:) NSDictionary *jcev2_p_2_o_coverDataMap__b0x9i_M09ONSStringOQLJCECoverDataList; // @synthesize jcev2_p_2_o_coverDataMap__b0x9i_M09ONSStringOQLJCECoverDataList;
@property(retain, nonatomic, getter=jce_videoItemList, setter=setJce_videoItemList:) NSArray *jcev2_p_1_o_videoItemList__b0x9i_VOQLJCEVideoItemData; // @synthesize jcev2_p_1_o_videoItemList__b0x9i_VOQLJCEVideoItemData;
@property(retain, nonatomic, getter=jce_uiData, setter=setJce_uiData:) NSArray *jcev2_p_0_r_uiData__b0x9i_VOQLJCETempletLine; // @synthesize jcev2_p_0_r_uiData__b0x9i_VOQLJCETempletLine;
- (void).cxx_destruct;
- (id)init;

@end

