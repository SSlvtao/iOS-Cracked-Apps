//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString, QLJCEAction;

@interface QLJCEPlayerTipsInfo : JceObjectV2
{
    NSString *jcev2_p_0_r_strTips;
    NSString *jcev2_p_1_o_highlightMsg;
    QLJCEAction *jcev2_p_2_o_highlightAction;
    NSString *jcev2_p_3_o_tipsId;
    NSString *jcev2_p_4_o_reportKey;
    NSString *jcev2_p_5_o_reportParams;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_reportParams, setter=setJce_reportParams:) NSString *jcev2_p_5_o_reportParams; // @synthesize jcev2_p_5_o_reportParams;
@property(retain, nonatomic, getter=jce_reportKey, setter=setJce_reportKey:) NSString *jcev2_p_4_o_reportKey; // @synthesize jcev2_p_4_o_reportKey;
@property(retain, nonatomic, getter=jce_tipsId, setter=setJce_tipsId:) NSString *jcev2_p_3_o_tipsId; // @synthesize jcev2_p_3_o_tipsId;
@property(retain, nonatomic, getter=jce_highlightAction, setter=setJce_highlightAction:) QLJCEAction *jcev2_p_2_o_highlightAction; // @synthesize jcev2_p_2_o_highlightAction;
@property(retain, nonatomic, getter=jce_highlightMsg, setter=setJce_highlightMsg:) NSString *jcev2_p_1_o_highlightMsg; // @synthesize jcev2_p_1_o_highlightMsg;
@property(retain, nonatomic, getter=jce_strTips, setter=setJce_strTips:) NSString *jcev2_p_0_r_strTips; // @synthesize jcev2_p_0_r_strTips;
- (void).cxx_destruct;
- (id)init;

@end

