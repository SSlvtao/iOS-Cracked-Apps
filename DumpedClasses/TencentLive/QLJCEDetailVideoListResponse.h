//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSDictionary, NSString, QLJCEONALoadMoreAction, QLJCEONAPosterTitle, QLJCEVideoMoreDetails;

@interface QLJCEDetailVideoListResponse : JceObjectV2
{
    _Bool jcev2_p_3_o_hasNextPage;
    int jcev2_p_0_r_errCode;
    int jcev2_p_8_o_uiType;
    NSString *jcev2_p_1_o_pageContext;
    NSArray *jcev2_p_2_o_videoList__b0x9i_VOQLJCEVideoItemData;
    QLJCEVideoMoreDetails *jcev2_p_4_o_detailMoreInfo;
    QLJCEONAPosterTitle *jcev2_p_5_o_title;
    NSDictionary *jcev2_p_6_o_introductionMap__b0x9i_M09ONSStringOQLJCEVideoIntroduction;
    QLJCEONALoadMoreAction *jcev2_p_7_o_moreAction;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_uiType, setter=setJce_uiType:) int jcev2_p_8_o_uiType; // @synthesize jcev2_p_8_o_uiType;
@property(retain, nonatomic, getter=jce_moreAction, setter=setJce_moreAction:) QLJCEONALoadMoreAction *jcev2_p_7_o_moreAction; // @synthesize jcev2_p_7_o_moreAction;
@property(retain, nonatomic, getter=jce_introductionMap, setter=setJce_introductionMap:) NSDictionary *jcev2_p_6_o_introductionMap__b0x9i_M09ONSStringOQLJCEVideoIntroduction; // @synthesize jcev2_p_6_o_introductionMap__b0x9i_M09ONSStringOQLJCEVideoIntroduction;
@property(retain, nonatomic, getter=jce_title, setter=setJce_title:) QLJCEONAPosterTitle *jcev2_p_5_o_title; // @synthesize jcev2_p_5_o_title;
@property(retain, nonatomic, getter=jce_detailMoreInfo, setter=setJce_detailMoreInfo:) QLJCEVideoMoreDetails *jcev2_p_4_o_detailMoreInfo; // @synthesize jcev2_p_4_o_detailMoreInfo;
@property(nonatomic, getter=jce_hasNextPage, setter=setJce_hasNextPage:) _Bool jcev2_p_3_o_hasNextPage; // @synthesize jcev2_p_3_o_hasNextPage;
@property(retain, nonatomic, getter=jce_videoList, setter=setJce_videoList:) NSArray *jcev2_p_2_o_videoList__b0x9i_VOQLJCEVideoItemData; // @synthesize jcev2_p_2_o_videoList__b0x9i_VOQLJCEVideoItemData;
@property(retain, nonatomic, getter=jce_pageContext, setter=setJce_pageContext:) NSString *jcev2_p_1_o_pageContext; // @synthesize jcev2_p_1_o_pageContext;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void).cxx_destruct;
- (id)init;

@end

