//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString;

@interface QLJCELiveRecommendResponse : JceObjectV2
{
    _Bool jcev2_p_3_o_hasNextPage;
    int jcev2_p_0_r_errCode;
    NSArray *jcev2_p_1_o_recommendInfos__b0x9i_VOQLJCELiveRlativeRecommendVideoItem;
    NSString *jcev2_p_2_o_pageContext;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_hasNextPage, setter=setJce_hasNextPage:) _Bool jcev2_p_3_o_hasNextPage; // @synthesize jcev2_p_3_o_hasNextPage;
@property(retain, nonatomic, getter=jce_pageContext, setter=setJce_pageContext:) NSString *jcev2_p_2_o_pageContext; // @synthesize jcev2_p_2_o_pageContext;
@property(retain, nonatomic, getter=jce_recommendInfos, setter=setJce_recommendInfos:) NSArray *jcev2_p_1_o_recommendInfos__b0x9i_VOQLJCELiveRlativeRecommendVideoItem; // @synthesize jcev2_p_1_o_recommendInfos__b0x9i_VOQLJCELiveRlativeRecommendVideoItem;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void).cxx_destruct;
- (id)init;

@end

