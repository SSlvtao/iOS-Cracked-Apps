//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCEVipCommonMsgRequest : JceObjectV2
{
    int jcev2_p_0_r_type;
    int jcev2_p_2_o_localShowedTimes;
    NSString *jcev2_p_1_o_id;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_localShowedTimes, setter=setJce_localShowedTimes:) int jcev2_p_2_o_localShowedTimes; // @synthesize jcev2_p_2_o_localShowedTimes;
@property(retain, nonatomic, getter=jce_id, setter=setJce_id:) NSString *jcev2_p_1_o_id; // @synthesize jcev2_p_1_o_id;
@property(nonatomic, getter=jce_type, setter=setJce_type:) int jcev2_p_0_r_type; // @synthesize jcev2_p_0_r_type;
- (void).cxx_destruct;
- (id)init;

@end

