//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class QLJCEActorInfo;

@interface QLJCEFanTuanGetUnReadMsgCountResponse : JceObjectV2
{
    int jcev2_p_0_r_errCode;
    int jcev2_p_1_r_count;
    long long jcev2_p_2_r_modifyTime;
    QLJCEActorInfo *jcev2_p_3_o_userInfo;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_userInfo, setter=setJce_userInfo:) QLJCEActorInfo *jcev2_p_3_o_userInfo; // @synthesize jcev2_p_3_o_userInfo;
@property(nonatomic, getter=jce_modifyTime, setter=setJce_modifyTime:) long long jcev2_p_2_r_modifyTime; // @synthesize jcev2_p_2_r_modifyTime;
@property(nonatomic, getter=jce_count, setter=setJce_count:) int jcev2_p_1_r_count; // @synthesize jcev2_p_1_r_count;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void).cxx_destruct;
- (id)init;

@end

