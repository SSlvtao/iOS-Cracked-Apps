//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCEScoreListItem : JceObjectV2
{
    int jcev2_p_0_r_rankId;
    int jcev2_p_4_r_medalNums;
    NSString *jcev2_p_1_r_rankBgImgUrl;
    NSString *jcev2_p_2_r_rankTitle;
    NSString *jcev2_p_3_r_medalBgImgUrl;
    NSString *jcev2_p_5_o_reportKey;
    NSString *jcev2_p_6_o_reportParams;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_reportParams, setter=setJce_reportParams:) NSString *jcev2_p_6_o_reportParams; // @synthesize jcev2_p_6_o_reportParams;
@property(retain, nonatomic, getter=jce_reportKey, setter=setJce_reportKey:) NSString *jcev2_p_5_o_reportKey; // @synthesize jcev2_p_5_o_reportKey;
@property(nonatomic, getter=jce_medalNums, setter=setJce_medalNums:) int jcev2_p_4_r_medalNums; // @synthesize jcev2_p_4_r_medalNums;
@property(retain, nonatomic, getter=jce_medalBgImgUrl, setter=setJce_medalBgImgUrl:) NSString *jcev2_p_3_r_medalBgImgUrl; // @synthesize jcev2_p_3_r_medalBgImgUrl;
@property(retain, nonatomic, getter=jce_rankTitle, setter=setJce_rankTitle:) NSString *jcev2_p_2_r_rankTitle; // @synthesize jcev2_p_2_r_rankTitle;
@property(retain, nonatomic, getter=jce_rankBgImgUrl, setter=setJce_rankBgImgUrl:) NSString *jcev2_p_1_r_rankBgImgUrl; // @synthesize jcev2_p_1_r_rankBgImgUrl;
@property(nonatomic, getter=jce_rankId, setter=setJce_rankId:) int jcev2_p_0_r_rankId; // @synthesize jcev2_p_0_r_rankId;
- (void).cxx_destruct;
- (id)init;

@end

