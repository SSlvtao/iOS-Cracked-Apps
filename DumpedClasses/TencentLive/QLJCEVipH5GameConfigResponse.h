//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString, QLJCEH5GameConfigData;

@interface QLJCEVipH5GameConfigResponse : JceObjectV2
{
    int jcev2_p_0_r_errCode;
    QLJCEH5GameConfigData *jcev2_p_1_o_h5GameConfigData;
    long long jcev2_p_2_o_serverTime;
    NSString *jcev2_p_3_o_dataVersion;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_dataVersion, setter=setJce_dataVersion:) NSString *jcev2_p_3_o_dataVersion; // @synthesize jcev2_p_3_o_dataVersion;
@property(nonatomic, getter=jce_serverTime, setter=setJce_serverTime:) long long jcev2_p_2_o_serverTime; // @synthesize jcev2_p_2_o_serverTime;
@property(retain, nonatomic, getter=jce_h5GameConfigData, setter=setJce_h5GameConfigData:) QLJCEH5GameConfigData *jcev2_p_1_o_h5GameConfigData; // @synthesize jcev2_p_1_o_h5GameConfigData;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void).cxx_destruct;
- (id)init;

@end

