//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCECircleUploadImageUrl : JceObjectV2
{
    BOOL jcev2_p_6_o_imgType;
    int jcev2_p_4_o_width;
    int jcev2_p_5_o_height;
    long long jcev2_p_0_r_playTime;
    NSString *jcev2_p_1_r_url;
    NSString *jcev2_p_2_o_waterFlagUrl;
    NSString *jcev2_p_3_o_handWriteInfo;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_imgType, setter=setJce_imgType:) BOOL jcev2_p_6_o_imgType; // @synthesize jcev2_p_6_o_imgType;
@property(nonatomic, getter=jce_height, setter=setJce_height:) int jcev2_p_5_o_height; // @synthesize jcev2_p_5_o_height;
@property(nonatomic, getter=jce_width, setter=setJce_width:) int jcev2_p_4_o_width; // @synthesize jcev2_p_4_o_width;
@property(retain, nonatomic, getter=jce_handWriteInfo, setter=setJce_handWriteInfo:) NSString *jcev2_p_3_o_handWriteInfo; // @synthesize jcev2_p_3_o_handWriteInfo;
@property(retain, nonatomic, getter=jce_waterFlagUrl, setter=setJce_waterFlagUrl:) NSString *jcev2_p_2_o_waterFlagUrl; // @synthesize jcev2_p_2_o_waterFlagUrl;
@property(retain, nonatomic, getter=jce_url, setter=setJce_url:) NSString *jcev2_p_1_r_url; // @synthesize jcev2_p_1_r_url;
@property(nonatomic, getter=jce_playTime, setter=setJce_playTime:) long long jcev2_p_0_r_playTime; // @synthesize jcev2_p_0_r_playTime;
- (void).cxx_destruct;
- (id)init;

@end

