//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString;

@interface QLJCELiveShowBillResponse : JceObjectV2
{
    _Bool jcev2_p_4_o_isHaveNextPage;
    int jcev2_p_0_r_errCode;
    long long jcev2_p_1_o_serverTime;
    NSArray *jcev2_p_2_o_billItems__b0x9i_VOQLJCEShowBillItem;
    NSString *jcev2_p_3_o_pageContext;
    NSArray *jcev2_p_5_o_uiData__b0x9i_VOQLJCETempletLine;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_uiData, setter=setJce_uiData:) NSArray *jcev2_p_5_o_uiData__b0x9i_VOQLJCETempletLine; // @synthesize jcev2_p_5_o_uiData__b0x9i_VOQLJCETempletLine;
@property(nonatomic, getter=jce_isHaveNextPage, setter=setJce_isHaveNextPage:) _Bool jcev2_p_4_o_isHaveNextPage; // @synthesize jcev2_p_4_o_isHaveNextPage;
@property(retain, nonatomic, getter=jce_pageContext, setter=setJce_pageContext:) NSString *jcev2_p_3_o_pageContext; // @synthesize jcev2_p_3_o_pageContext;
@property(retain, nonatomic, getter=jce_billItems, setter=setJce_billItems:) NSArray *jcev2_p_2_o_billItems__b0x9i_VOQLJCEShowBillItem; // @synthesize jcev2_p_2_o_billItems__b0x9i_VOQLJCEShowBillItem;
@property(nonatomic, getter=jce_serverTime, setter=setJce_serverTime:) long long jcev2_p_1_o_serverTime; // @synthesize jcev2_p_1_o_serverTime;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void).cxx_destruct;
- (id)init;

@end

