//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString, QLJCEONAPosterTitle, QLJCEONASplitLine;

@interface QLJCEONADetailsVideoList : JceObjectV2
{
    int jcev2_p_0_r_uiType;
    NSString *jcev2_p_1_r_dataKey;
    NSString *jcev2_p_2_o_reportParams;
    NSString *jcev2_p_3_o_reportKey;
    QLJCEONAPosterTitle *jcev2_p_4_o_title;
    QLJCEONASplitLine *jcev2_p_5_o_spliteLine;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_spliteLine, setter=setJce_spliteLine:) QLJCEONASplitLine *jcev2_p_5_o_spliteLine; // @synthesize jcev2_p_5_o_spliteLine;
@property(retain, nonatomic, getter=jce_title, setter=setJce_title:) QLJCEONAPosterTitle *jcev2_p_4_o_title; // @synthesize jcev2_p_4_o_title;
@property(retain, nonatomic, getter=jce_reportKey, setter=setJce_reportKey:) NSString *jcev2_p_3_o_reportKey; // @synthesize jcev2_p_3_o_reportKey;
@property(retain, nonatomic, getter=jce_reportParams, setter=setJce_reportParams:) NSString *jcev2_p_2_o_reportParams; // @synthesize jcev2_p_2_o_reportParams;
@property(retain, nonatomic, getter=jce_dataKey, setter=setJce_dataKey:) NSString *jcev2_p_1_r_dataKey; // @synthesize jcev2_p_1_r_dataKey;
@property(nonatomic, getter=jce_uiType, setter=setJce_uiType:) int jcev2_p_0_r_uiType; // @synthesize jcev2_p_0_r_uiType;
- (void).cxx_destruct;
- (id)init;

@end

