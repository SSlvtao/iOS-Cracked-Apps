//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSDictionary, NSString, QLJCEActorInfo;

@interface QLJCEStarHomeResponse : JceObjectV2
{
    int jcev2_p_0_r_errCode;
    QLJCEActorInfo *jcev2_p_1_o_actorInfo;
    NSArray *jcev2_p_2_o_uiData__b0x9i_VOQLJCETempletLine;
    NSString *jcev2_p_3_o_starNewsDataKey;
    NSDictionary *jcev2_p_4_o_coverDataMap__b0x9i_M09ONSStringOQLJCECoverDataList;
    NSDictionary *jcev2_p_5_o_actorDataMap__b0x9i_M09ONSStringOQLJCEActorList;
    NSString *jcev2_p_6_o_starFansDataKey;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_starFansDataKey, setter=setJce_starFansDataKey:) NSString *jcev2_p_6_o_starFansDataKey; // @synthesize jcev2_p_6_o_starFansDataKey;
@property(retain, nonatomic, getter=jce_actorDataMap, setter=setJce_actorDataMap:) NSDictionary *jcev2_p_5_o_actorDataMap__b0x9i_M09ONSStringOQLJCEActorList; // @synthesize jcev2_p_5_o_actorDataMap__b0x9i_M09ONSStringOQLJCEActorList;
@property(retain, nonatomic, getter=jce_coverDataMap, setter=setJce_coverDataMap:) NSDictionary *jcev2_p_4_o_coverDataMap__b0x9i_M09ONSStringOQLJCECoverDataList; // @synthesize jcev2_p_4_o_coverDataMap__b0x9i_M09ONSStringOQLJCECoverDataList;
@property(retain, nonatomic, getter=jce_starNewsDataKey, setter=setJce_starNewsDataKey:) NSString *jcev2_p_3_o_starNewsDataKey; // @synthesize jcev2_p_3_o_starNewsDataKey;
@property(retain, nonatomic, getter=jce_uiData, setter=setJce_uiData:) NSArray *jcev2_p_2_o_uiData__b0x9i_VOQLJCETempletLine; // @synthesize jcev2_p_2_o_uiData__b0x9i_VOQLJCETempletLine;
@property(retain, nonatomic, getter=jce_actorInfo, setter=setJce_actorInfo:) QLJCEActorInfo *jcev2_p_1_o_actorInfo; // @synthesize jcev2_p_1_o_actorInfo;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void).cxx_destruct;
- (id)init;

@end

