//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCEONAVideoTipsIntro : JceObjectV2
{
    int jcev2_p_0_r_rating;
    NSString *jcev2_p_1_o_tipsFirstLine;
    NSString *jcev2_p_2_o_tipsSecondLine;
    NSString *jcev2_p_3_o_reportKey;
    NSString *jcev2_p_4_o_reportParams;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_reportParams, setter=setJce_reportParams:) NSString *jcev2_p_4_o_reportParams; // @synthesize jcev2_p_4_o_reportParams;
@property(retain, nonatomic, getter=jce_reportKey, setter=setJce_reportKey:) NSString *jcev2_p_3_o_reportKey; // @synthesize jcev2_p_3_o_reportKey;
@property(retain, nonatomic, getter=jce_tipsSecondLine, setter=setJce_tipsSecondLine:) NSString *jcev2_p_2_o_tipsSecondLine; // @synthesize jcev2_p_2_o_tipsSecondLine;
@property(retain, nonatomic, getter=jce_tipsFirstLine, setter=setJce_tipsFirstLine:) NSString *jcev2_p_1_o_tipsFirstLine; // @synthesize jcev2_p_1_o_tipsFirstLine;
@property(nonatomic, getter=jce_rating, setter=setJce_rating:) int jcev2_p_0_r_rating; // @synthesize jcev2_p_0_r_rating;
- (void).cxx_destruct;
- (id)init;

@end

