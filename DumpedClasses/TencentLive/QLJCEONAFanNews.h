//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString, QLJCEAction;

@interface QLJCEONAFanNews : JceObjectV2
{
    int jcev2_p_4_o_shareNum;
    int jcev2_p_5_o_commentNum;
    int jcev2_p_6_o_type;
    NSArray *jcev2_p_0_r_content__b0x9i_VONSString;
    NSArray *jcev2_p_1_o_imgList__b0x9i_VOQLJCEVideoImage;
    NSString *jcev2_p_2_o_faceUrl;
    NSString *jcev2_p_3_o_detailInfo;
    QLJCEAction *jcev2_p_7_o_action;
    NSString *jcev2_p_8_o_reportKey;
    NSString *jcev2_p_9_o_reportParams;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_reportParams, setter=setJce_reportParams:) NSString *jcev2_p_9_o_reportParams; // @synthesize jcev2_p_9_o_reportParams;
@property(retain, nonatomic, getter=jce_reportKey, setter=setJce_reportKey:) NSString *jcev2_p_8_o_reportKey; // @synthesize jcev2_p_8_o_reportKey;
@property(retain, nonatomic, getter=jce_action, setter=setJce_action:) QLJCEAction *jcev2_p_7_o_action; // @synthesize jcev2_p_7_o_action;
@property(nonatomic, getter=jce_type, setter=setJce_type:) int jcev2_p_6_o_type; // @synthesize jcev2_p_6_o_type;
@property(nonatomic, getter=jce_commentNum, setter=setJce_commentNum:) int jcev2_p_5_o_commentNum; // @synthesize jcev2_p_5_o_commentNum;
@property(nonatomic, getter=jce_shareNum, setter=setJce_shareNum:) int jcev2_p_4_o_shareNum; // @synthesize jcev2_p_4_o_shareNum;
@property(retain, nonatomic, getter=jce_detailInfo, setter=setJce_detailInfo:) NSString *jcev2_p_3_o_detailInfo; // @synthesize jcev2_p_3_o_detailInfo;
@property(retain, nonatomic, getter=jce_faceUrl, setter=setJce_faceUrl:) NSString *jcev2_p_2_o_faceUrl; // @synthesize jcev2_p_2_o_faceUrl;
@property(retain, nonatomic, getter=jce_imgList, setter=setJce_imgList:) NSArray *jcev2_p_1_o_imgList__b0x9i_VOQLJCEVideoImage; // @synthesize jcev2_p_1_o_imgList__b0x9i_VOQLJCEVideoImage;
@property(retain, nonatomic, getter=jce_content, setter=setJce_content:) NSArray *jcev2_p_0_r_content__b0x9i_VONSString; // @synthesize jcev2_p_0_r_content__b0x9i_VONSString;
- (void).cxx_destruct;
- (id)init;

@end

