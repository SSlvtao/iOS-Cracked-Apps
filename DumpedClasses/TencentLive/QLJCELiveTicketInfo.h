//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString, QLJCEAction;

@interface QLJCELiveTicketInfo : JceObjectV2
{
    _Bool jcev2_p_8_r_isAttent;
    _Bool jcev2_p_9_o_isHasLottery;
    NSString *jcev2_p_0_r_imageUrl;
    NSString *jcev2_p_1_r_title;
    NSString *jcev2_p_2_r_time;
    long long jcev2_p_3_r_orderCount;
    NSString *jcev2_p_4_o_address;
    NSString *jcev2_p_5_o_btnTitle;
    QLJCEAction *jcev2_p_6_o_btnAction;
    NSString *jcev2_p_7_r_attentKey;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_isHasLottery, setter=setJce_isHasLottery:) _Bool jcev2_p_9_o_isHasLottery; // @synthesize jcev2_p_9_o_isHasLottery;
@property(nonatomic, getter=jce_isAttent, setter=setJce_isAttent:) _Bool jcev2_p_8_r_isAttent; // @synthesize jcev2_p_8_r_isAttent;
@property(retain, nonatomic, getter=jce_attentKey, setter=setJce_attentKey:) NSString *jcev2_p_7_r_attentKey; // @synthesize jcev2_p_7_r_attentKey;
@property(retain, nonatomic, getter=jce_btnAction, setter=setJce_btnAction:) QLJCEAction *jcev2_p_6_o_btnAction; // @synthesize jcev2_p_6_o_btnAction;
@property(retain, nonatomic, getter=jce_btnTitle, setter=setJce_btnTitle:) NSString *jcev2_p_5_o_btnTitle; // @synthesize jcev2_p_5_o_btnTitle;
@property(retain, nonatomic, getter=jce_address, setter=setJce_address:) NSString *jcev2_p_4_o_address; // @synthesize jcev2_p_4_o_address;
@property(nonatomic, getter=jce_orderCount, setter=setJce_orderCount:) long long jcev2_p_3_r_orderCount; // @synthesize jcev2_p_3_r_orderCount;
@property(retain, nonatomic, getter=jce_time, setter=setJce_time:) NSString *jcev2_p_2_r_time; // @synthesize jcev2_p_2_r_time;
@property(retain, nonatomic, getter=jce_title, setter=setJce_title:) NSString *jcev2_p_1_r_title; // @synthesize jcev2_p_1_r_title;
@property(retain, nonatomic, getter=jce_imageUrl, setter=setJce_imageUrl:) NSString *jcev2_p_0_r_imageUrl; // @synthesize jcev2_p_0_r_imageUrl;
- (void).cxx_destruct;
- (id)init;

@end

