//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCECoinConsumeItem : JceObjectV2
{
    int jcev2_p_1_r_count;
    int jcev2_p_3_r_price;
    NSString *jcev2_p_0_r_strActivityId;
    NSString *jcev2_p_2_r_Description;
    NSString *jcev2_p_4_o_imgUrl;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_imgUrl, setter=setJce_imgUrl:) NSString *jcev2_p_4_o_imgUrl; // @synthesize jcev2_p_4_o_imgUrl;
@property(nonatomic, getter=jce_price, setter=setJce_price:) int jcev2_p_3_r_price; // @synthesize jcev2_p_3_r_price;
@property(retain, nonatomic, getter=jce_Description, setter=setJce_Description:) NSString *jcev2_p_2_r_Description; // @synthesize jcev2_p_2_r_Description;
@property(nonatomic, getter=jce_count, setter=setJce_count:) int jcev2_p_1_r_count; // @synthesize jcev2_p_1_r_count;
@property(retain, nonatomic, getter=jce_strActivityId, setter=setJce_strActivityId:) NSString *jcev2_p_0_r_strActivityId; // @synthesize jcev2_p_0_r_strActivityId;
- (void).cxx_destruct;
- (id)init;

@end

