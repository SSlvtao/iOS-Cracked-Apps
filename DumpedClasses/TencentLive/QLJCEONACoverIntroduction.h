//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCEONACoverIntroduction : JceObjectV2
{
    int jcev2_p_0_r_uiType;
    NSString *jcev2_p_1_r_dataKey;
    NSString *jcev2_p_2_o_reportParams;
    NSString *jcev2_p_3_o_reportKey;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_reportKey, setter=setJce_reportKey:) NSString *jcev2_p_3_o_reportKey; // @synthesize jcev2_p_3_o_reportKey;
@property(retain, nonatomic, getter=jce_reportParams, setter=setJce_reportParams:) NSString *jcev2_p_2_o_reportParams; // @synthesize jcev2_p_2_o_reportParams;
@property(retain, nonatomic, getter=jce_dataKey, setter=setJce_dataKey:) NSString *jcev2_p_1_r_dataKey; // @synthesize jcev2_p_1_r_dataKey;
@property(nonatomic, getter=jce_uiType, setter=setJce_uiType:) int jcev2_p_0_r_uiType; // @synthesize jcev2_p_0_r_uiType;
- (void).cxx_destruct;
- (id)init;

@end

