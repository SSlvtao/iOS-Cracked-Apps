//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString, QLJCEActorInfo;

@interface QLJCECircleGetUserTimeLineResponse : JceObjectV2
{
    _Bool jcev2_p_3_o_hasNextPage;
    int jcev2_p_0_r_errCode;
    int jcev2_p_4_o_isFriend;
    NSArray *jcev2_p_1_o_feedList__b0x9i_VOQLJCECirclePrimaryFeed;
    NSString *jcev2_p_2_o_pageContext;
    QLJCEActorInfo *jcev2_p_5_o_userInfo;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_userInfo, setter=setJce_userInfo:) QLJCEActorInfo *jcev2_p_5_o_userInfo; // @synthesize jcev2_p_5_o_userInfo;
@property(nonatomic, getter=jce_isFriend, setter=setJce_isFriend:) int jcev2_p_4_o_isFriend; // @synthesize jcev2_p_4_o_isFriend;
@property(nonatomic, getter=jce_hasNextPage, setter=setJce_hasNextPage:) _Bool jcev2_p_3_o_hasNextPage; // @synthesize jcev2_p_3_o_hasNextPage;
@property(retain, nonatomic, getter=jce_pageContext, setter=setJce_pageContext:) NSString *jcev2_p_2_o_pageContext; // @synthesize jcev2_p_2_o_pageContext;
@property(retain, nonatomic, getter=jce_feedList, setter=setJce_feedList:) NSArray *jcev2_p_1_o_feedList__b0x9i_VOQLJCECirclePrimaryFeed; // @synthesize jcev2_p_1_o_feedList__b0x9i_VOQLJCECirclePrimaryFeed;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void).cxx_destruct;
- (id)init;

@end

