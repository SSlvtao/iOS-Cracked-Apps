//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCEGetVideoPayInfoRequest : JceObjectV2
{
    int jcev2_p_3_o_type;
    int jcev2_p_4_o_queryType;
    int jcev2_p_5_o_payStatus;
    NSString *jcev2_p_0_o_lid;
    NSString *jcev2_p_1_o_cid;
    NSString *jcev2_p_2_o_vid;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_payStatus, setter=setJce_payStatus:) int jcev2_p_5_o_payStatus; // @synthesize jcev2_p_5_o_payStatus;
@property(nonatomic, getter=jce_queryType, setter=setJce_queryType:) int jcev2_p_4_o_queryType; // @synthesize jcev2_p_4_o_queryType;
@property(nonatomic, getter=jce_type, setter=setJce_type:) int jcev2_p_3_o_type; // @synthesize jcev2_p_3_o_type;
@property(retain, nonatomic, getter=jce_vid, setter=setJce_vid:) NSString *jcev2_p_2_o_vid; // @synthesize jcev2_p_2_o_vid;
@property(retain, nonatomic, getter=jce_cid, setter=setJce_cid:) NSString *jcev2_p_1_o_cid; // @synthesize jcev2_p_1_o_cid;
@property(retain, nonatomic, getter=jce_lid, setter=setJce_lid:) NSString *jcev2_p_0_o_lid; // @synthesize jcev2_p_0_o_lid;
- (void).cxx_destruct;
- (id)init;

@end

