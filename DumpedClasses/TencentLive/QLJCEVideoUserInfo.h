//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCEVideoUserInfo : JceObjectV2
{
    int jcev2_p_1_o_nettype;
    int jcev2_p_2_o_speed;
    int jcev2_p_6_o_unicomtype;
    NSString *jcev2_p_0_r_ckey;
    NSString *jcev2_p_3_o_speeds;
    NSString *jcev2_p_4_o_telcom;
    NSString *jcev2_p_5_o_unicom;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_unicomtype, setter=setJce_unicomtype:) int jcev2_p_6_o_unicomtype; // @synthesize jcev2_p_6_o_unicomtype;
@property(retain, nonatomic, getter=jce_unicom, setter=setJce_unicom:) NSString *jcev2_p_5_o_unicom; // @synthesize jcev2_p_5_o_unicom;
@property(retain, nonatomic, getter=jce_telcom, setter=setJce_telcom:) NSString *jcev2_p_4_o_telcom; // @synthesize jcev2_p_4_o_telcom;
@property(retain, nonatomic, getter=jce_speeds, setter=setJce_speeds:) NSString *jcev2_p_3_o_speeds; // @synthesize jcev2_p_3_o_speeds;
@property(nonatomic, getter=jce_speed, setter=setJce_speed:) int jcev2_p_2_o_speed; // @synthesize jcev2_p_2_o_speed;
@property(nonatomic, getter=jce_nettype, setter=setJce_nettype:) int jcev2_p_1_o_nettype; // @synthesize jcev2_p_1_o_nettype;
@property(retain, nonatomic, getter=jce_ckey, setter=setJce_ckey:) NSString *jcev2_p_0_r_ckey; // @synthesize jcev2_p_0_r_ckey;
- (void).cxx_destruct;
- (id)init;

@end

