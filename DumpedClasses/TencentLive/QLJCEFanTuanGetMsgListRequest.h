//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCEFanTuanGetMsgListRequest : JceObjectV2
{
    int jcev2_p_0_r_type;
    NSString *jcev2_p_1_o_beginMsgId;
    NSString *jcev2_p_2_o_pageContext;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_pageContext, setter=setJce_pageContext:) NSString *jcev2_p_2_o_pageContext; // @synthesize jcev2_p_2_o_pageContext;
@property(retain, nonatomic, getter=jce_beginMsgId, setter=setJce_beginMsgId:) NSString *jcev2_p_1_o_beginMsgId; // @synthesize jcev2_p_1_o_beginMsgId;
@property(nonatomic, getter=jce_type, setter=setJce_type:) int jcev2_p_0_r_type; // @synthesize jcev2_p_0_r_type;
- (void).cxx_destruct;
- (id)init;

@end

