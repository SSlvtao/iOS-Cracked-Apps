//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCEFeedbackActionRequest : JceObjectV2
{
    int jcev2_p_0_r_actionType;
    NSString *jcev2_p_1_o_dataKey;
    NSString *jcev2_p_2_o_type;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_type, setter=setJce_type:) NSString *jcev2_p_2_o_type; // @synthesize jcev2_p_2_o_type;
@property(retain, nonatomic, getter=jce_dataKey, setter=setJce_dataKey:) NSString *jcev2_p_1_o_dataKey; // @synthesize jcev2_p_1_o_dataKey;
@property(nonatomic, getter=jce_actionType, setter=setJce_actionType:) int jcev2_p_0_r_actionType; // @synthesize jcev2_p_0_r_actionType;
- (void).cxx_destruct;
- (id)init;

@end

