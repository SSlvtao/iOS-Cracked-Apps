//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString;

@interface PPPJCEPush2PhoneResponse : JceObjectV2
{
    int jcev2_p_0_o_errCode;
    NSString *jcev2_p_1_o_msg;
    NSArray *jcev2_p_2_o_vecPush2PhoneData__b0x9i_VOPPPJCEPush2PhoneData;
    NSArray *jcev2_p_3_o_vecPushClarityData__b0x9i_VOPPPJCEPushClarityData;
    NSArray *jcev2_p_4_o_vecVolumeData__b0x9i_VOPPPJCEVolumeData;
    NSArray *jcev2_p_5_o_vecTv2PhoneNotify__b0x9i_VOPPPJCETv2PhoneNotify;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_vecTv2PhoneNotify, setter=setJce_vecTv2PhoneNotify:) NSArray *jcev2_p_5_o_vecTv2PhoneNotify__b0x9i_VOPPPJCETv2PhoneNotify; // @synthesize jcev2_p_5_o_vecTv2PhoneNotify__b0x9i_VOPPPJCETv2PhoneNotify;
@property(retain, nonatomic, getter=jce_vecVolumeData, setter=setJce_vecVolumeData:) NSArray *jcev2_p_4_o_vecVolumeData__b0x9i_VOPPPJCEVolumeData; // @synthesize jcev2_p_4_o_vecVolumeData__b0x9i_VOPPPJCEVolumeData;
@property(retain, nonatomic, getter=jce_vecPushClarityData, setter=setJce_vecPushClarityData:) NSArray *jcev2_p_3_o_vecPushClarityData__b0x9i_VOPPPJCEPushClarityData; // @synthesize jcev2_p_3_o_vecPushClarityData__b0x9i_VOPPPJCEPushClarityData;
@property(retain, nonatomic, getter=jce_vecPush2PhoneData, setter=setJce_vecPush2PhoneData:) NSArray *jcev2_p_2_o_vecPush2PhoneData__b0x9i_VOPPPJCEPush2PhoneData; // @synthesize jcev2_p_2_o_vecPush2PhoneData__b0x9i_VOPPPJCEPush2PhoneData;
@property(retain, nonatomic, getter=jce_msg, setter=setJce_msg:) NSString *jcev2_p_1_o_msg; // @synthesize jcev2_p_1_o_msg;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_o_errCode; // @synthesize jcev2_p_0_o_errCode;
- (void).cxx_destruct;
- (id)init;

@end

