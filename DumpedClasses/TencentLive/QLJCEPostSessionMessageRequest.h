//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString, QLJCEApolloVoiceData;

@interface QLJCEPostSessionMessageRequest : JceObjectV2
{
    int jcev2_p_1_o_msgType;
    NSString *jcev2_p_0_r_sessionId;
    NSString *jcev2_p_2_o_textContent;
    QLJCEApolloVoiceData *jcev2_p_3_o_voiceData;
    NSString *jcev2_p_4_o_seqId;
    long long jcev2_p_5_o_playTime;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_playTime, setter=setJce_playTime:) long long jcev2_p_5_o_playTime; // @synthesize jcev2_p_5_o_playTime;
@property(retain, nonatomic, getter=jce_seqId, setter=setJce_seqId:) NSString *jcev2_p_4_o_seqId; // @synthesize jcev2_p_4_o_seqId;
@property(retain, nonatomic, getter=jce_voiceData, setter=setJce_voiceData:) QLJCEApolloVoiceData *jcev2_p_3_o_voiceData; // @synthesize jcev2_p_3_o_voiceData;
@property(retain, nonatomic, getter=jce_textContent, setter=setJce_textContent:) NSString *jcev2_p_2_o_textContent; // @synthesize jcev2_p_2_o_textContent;
@property(nonatomic, getter=jce_msgType, setter=setJce_msgType:) int jcev2_p_1_o_msgType; // @synthesize jcev2_p_1_o_msgType;
@property(retain, nonatomic, getter=jce_sessionId, setter=setJce_sessionId:) NSString *jcev2_p_0_r_sessionId; // @synthesize jcev2_p_0_r_sessionId;
- (void).cxx_destruct;
- (id)init;

@end

