//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString, QLJCEActorInfo;

@interface QLJCEContributionsItem : JceObjectV2
{
    QLJCEActorInfo *jcev2_p_0_r_actor;
    NSString *jcev2_p_1_o_time;
    NSString *jcev2_p_2_o_values;
    NSString *jcev2_p_3_o_offerColor;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_offerColor, setter=setJce_offerColor:) NSString *jcev2_p_3_o_offerColor; // @synthesize jcev2_p_3_o_offerColor;
@property(retain, nonatomic, getter=jce_values, setter=setJce_values:) NSString *jcev2_p_2_o_values; // @synthesize jcev2_p_2_o_values;
@property(retain, nonatomic, getter=jce_time, setter=setJce_time:) NSString *jcev2_p_1_o_time; // @synthesize jcev2_p_1_o_time;
@property(retain, nonatomic, getter=jce_actor, setter=setJce_actor:) QLJCEActorInfo *jcev2_p_0_r_actor; // @synthesize jcev2_p_0_r_actor;
- (void).cxx_destruct;
- (id)init;

@end

