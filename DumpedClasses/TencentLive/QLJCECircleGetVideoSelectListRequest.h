//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCECircleGetVideoSelectListRequest : JceObjectV2
{
    int jcev2_p_0_o_flag;
    NSString *jcev2_p_1_o_pageContext;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_pageContext, setter=setJce_pageContext:) NSString *jcev2_p_1_o_pageContext; // @synthesize jcev2_p_1_o_pageContext;
@property(nonatomic, getter=jce_flag, setter=setJce_flag:) int jcev2_p_0_o_flag; // @synthesize jcev2_p_0_o_flag;
- (void).cxx_destruct;
- (id)init;

@end

