//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString, QLJCEMessageInfo;

@interface QLJCEPostSessionMessageResponse : JceObjectV2
{
    int jcev2_p_0_r_errCode;
    NSString *jcev2_p_1_r_errMsg;
    QLJCEMessageInfo *jcev2_p_2_o_msgInfo;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_msgInfo, setter=setJce_msgInfo:) QLJCEMessageInfo *jcev2_p_2_o_msgInfo; // @synthesize jcev2_p_2_o_msgInfo;
@property(retain, nonatomic, getter=jce_errMsg, setter=setJce_errMsg:) NSString *jcev2_p_1_r_errMsg; // @synthesize jcev2_p_1_r_errMsg;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void).cxx_destruct;
- (id)init;

@end

