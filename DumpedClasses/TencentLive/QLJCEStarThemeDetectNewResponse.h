//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCEStarThemeDetectNewResponse : JceObjectV2
{
    _Bool jcev2_p_2_o_hasNew;
    int jcev2_p_0_r_errCode;
    NSString *jcev2_p_1_r_updateKey;
    NSString *jcev2_p_3_o_headImgUrl;
    NSString *jcev2_p_4_o_startThemeId;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_startThemeId, setter=setJce_startThemeId:) NSString *jcev2_p_4_o_startThemeId; // @synthesize jcev2_p_4_o_startThemeId;
@property(retain, nonatomic, getter=jce_headImgUrl, setter=setJce_headImgUrl:) NSString *jcev2_p_3_o_headImgUrl; // @synthesize jcev2_p_3_o_headImgUrl;
@property(nonatomic, getter=jce_hasNew, setter=setJce_hasNew:) _Bool jcev2_p_2_o_hasNew; // @synthesize jcev2_p_2_o_hasNew;
@property(retain, nonatomic, getter=jce_updateKey, setter=setJce_updateKey:) NSString *jcev2_p_1_r_updateKey; // @synthesize jcev2_p_1_r_updateKey;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void).cxx_destruct;
- (id)init;

@end

