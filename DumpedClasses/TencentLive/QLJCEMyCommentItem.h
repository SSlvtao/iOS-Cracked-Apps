//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCEMyCommentItem : JceObjectV2
{
    int jcev2_p_7_o_upNumber;
    int jcev2_p_8_o_replyNumber;
    NSString *jcev2_p_0_r_commentId;
    NSString *jcev2_p_1_r_content;
    long long jcev2_p_2_r_time;
    NSString *jcev2_p_3_r_voideImageUrl;
    NSString *jcev2_p_4_r_commentDataKey;
    NSString *jcev2_p_5_r_videoTitle;
    NSString *jcev2_p_6_r_pageContext;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_replyNumber, setter=setJce_replyNumber:) int jcev2_p_8_o_replyNumber; // @synthesize jcev2_p_8_o_replyNumber;
@property(nonatomic, getter=jce_upNumber, setter=setJce_upNumber:) int jcev2_p_7_o_upNumber; // @synthesize jcev2_p_7_o_upNumber;
@property(retain, nonatomic, getter=jce_pageContext, setter=setJce_pageContext:) NSString *jcev2_p_6_r_pageContext; // @synthesize jcev2_p_6_r_pageContext;
@property(retain, nonatomic, getter=jce_videoTitle, setter=setJce_videoTitle:) NSString *jcev2_p_5_r_videoTitle; // @synthesize jcev2_p_5_r_videoTitle;
@property(retain, nonatomic, getter=jce_commentDataKey, setter=setJce_commentDataKey:) NSString *jcev2_p_4_r_commentDataKey; // @synthesize jcev2_p_4_r_commentDataKey;
@property(retain, nonatomic, getter=jce_voideImageUrl, setter=setJce_voideImageUrl:) NSString *jcev2_p_3_r_voideImageUrl; // @synthesize jcev2_p_3_r_voideImageUrl;
@property(nonatomic, getter=jce_time, setter=setJce_time:) long long jcev2_p_2_r_time; // @synthesize jcev2_p_2_r_time;
@property(retain, nonatomic, getter=jce_content, setter=setJce_content:) NSString *jcev2_p_1_r_content; // @synthesize jcev2_p_1_r_content;
@property(retain, nonatomic, getter=jce_commentId, setter=setJce_commentId:) NSString *jcev2_p_0_r_commentId; // @synthesize jcev2_p_0_r_commentId;
- (void).cxx_destruct;
- (id)init;

@end

