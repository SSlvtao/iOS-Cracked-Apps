//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSDictionary, NSString;

@interface QLJCEVideoSplitRequest : JceObjectV2
{
    int jcev2_p_1_r_startMs;
    int jcev2_p_2_r_endMs;
    int jcev2_p_3_o_defn;
    int jcev2_p_13_o_splitType;
    NSString *jcev2_p_0_r_vid;
    NSDictionary *jcev2_p_4_o_graffiti__b0x9i_M09ONSStringOQLJCEVideoGraffity;
    NSString *jcev2_p_5_o_script;
    NSString *jcev2_p_6_o_cid;
    NSString *jcev2_p_7_o_pid;
    NSString *jcev2_p_8_o_zid;
    NSString *jcev2_p_9_o_columnId;
    NSString *jcev2_p_10_o_title;
    NSString *jcev2_p_11_o_subtitle;
    NSString *jcev2_p_12_o_miniVid;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_splitType, setter=setJce_splitType:) int jcev2_p_13_o_splitType; // @synthesize jcev2_p_13_o_splitType;
@property(retain, nonatomic, getter=jce_miniVid, setter=setJce_miniVid:) NSString *jcev2_p_12_o_miniVid; // @synthesize jcev2_p_12_o_miniVid;
@property(retain, nonatomic, getter=jce_subtitle, setter=setJce_subtitle:) NSString *jcev2_p_11_o_subtitle; // @synthesize jcev2_p_11_o_subtitle;
@property(retain, nonatomic, getter=jce_title, setter=setJce_title:) NSString *jcev2_p_10_o_title; // @synthesize jcev2_p_10_o_title;
@property(retain, nonatomic, getter=jce_columnId, setter=setJce_columnId:) NSString *jcev2_p_9_o_columnId; // @synthesize jcev2_p_9_o_columnId;
@property(retain, nonatomic, getter=jce_zid, setter=setJce_zid:) NSString *jcev2_p_8_o_zid; // @synthesize jcev2_p_8_o_zid;
@property(retain, nonatomic, getter=jce_pid, setter=setJce_pid:) NSString *jcev2_p_7_o_pid; // @synthesize jcev2_p_7_o_pid;
@property(retain, nonatomic, getter=jce_cid, setter=setJce_cid:) NSString *jcev2_p_6_o_cid; // @synthesize jcev2_p_6_o_cid;
@property(retain, nonatomic, getter=jce_script, setter=setJce_script:) NSString *jcev2_p_5_o_script; // @synthesize jcev2_p_5_o_script;
@property(retain, nonatomic, getter=jce_graffiti, setter=setJce_graffiti:) NSDictionary *jcev2_p_4_o_graffiti__b0x9i_M09ONSStringOQLJCEVideoGraffity; // @synthesize jcev2_p_4_o_graffiti__b0x9i_M09ONSStringOQLJCEVideoGraffity;
@property(nonatomic, getter=jce_defn, setter=setJce_defn:) int jcev2_p_3_o_defn; // @synthesize jcev2_p_3_o_defn;
@property(nonatomic, getter=jce_endMs, setter=setJce_endMs:) int jcev2_p_2_r_endMs; // @synthesize jcev2_p_2_r_endMs;
@property(nonatomic, getter=jce_startMs, setter=setJce_startMs:) int jcev2_p_1_r_startMs; // @synthesize jcev2_p_1_r_startMs;
@property(retain, nonatomic, getter=jce_vid, setter=setJce_vid:) NSString *jcev2_p_0_r_vid; // @synthesize jcev2_p_0_r_vid;
- (void).cxx_destruct;
- (id)init;

@end

