//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString;

@interface QLJCEAnchorRankResponse : JceObjectV2
{
    _Bool jcev2_p_6_o_isHaveNextPage;
    int jcev2_p_0_r_errCode;
    int jcev2_p_4_o_totalAnchorCount;
    NSString *jcev2_p_1_o_errMsg;
    NSArray *jcev2_p_2_r_anchorList__b0x9i_VOQLJCEActorInfo;
    NSString *jcev2_p_3_o_propsDataKey;
    NSString *jcev2_p_5_o_pageContext;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_isHaveNextPage, setter=setJce_isHaveNextPage:) _Bool jcev2_p_6_o_isHaveNextPage; // @synthesize jcev2_p_6_o_isHaveNextPage;
@property(retain, nonatomic, getter=jce_pageContext, setter=setJce_pageContext:) NSString *jcev2_p_5_o_pageContext; // @synthesize jcev2_p_5_o_pageContext;
@property(nonatomic, getter=jce_totalAnchorCount, setter=setJce_totalAnchorCount:) int jcev2_p_4_o_totalAnchorCount; // @synthesize jcev2_p_4_o_totalAnchorCount;
@property(retain, nonatomic, getter=jce_propsDataKey, setter=setJce_propsDataKey:) NSString *jcev2_p_3_o_propsDataKey; // @synthesize jcev2_p_3_o_propsDataKey;
@property(retain, nonatomic, getter=jce_anchorList, setter=setJce_anchorList:) NSArray *jcev2_p_2_r_anchorList__b0x9i_VOQLJCEActorInfo; // @synthesize jcev2_p_2_r_anchorList__b0x9i_VOQLJCEActorInfo;
@property(retain, nonatomic, getter=jce_errMsg, setter=setJce_errMsg:) NSString *jcev2_p_1_o_errMsg; // @synthesize jcev2_p_1_o_errMsg;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void).cxx_destruct;
- (id)init;

@end

