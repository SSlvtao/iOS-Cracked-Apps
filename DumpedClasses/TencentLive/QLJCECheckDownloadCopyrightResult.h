//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString;

@interface QLJCECheckDownloadCopyrightResult : JceObjectV2
{
    _Bool jcev2_p_4_o_cacheCheckVip;
    int jcev2_p_1_o_downloadState;
    int jcev2_p_2_o_detailCode;
    int jcev2_p_5_o_errorCode;
    NSArray *jcev2_p_0_o_requestItems__b0x9i_VOQLJCEVideoBaseParams;
    NSString *jcev2_p_3_o_detailTips;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_errorCode, setter=setJce_errorCode:) int jcev2_p_5_o_errorCode; // @synthesize jcev2_p_5_o_errorCode;
@property(nonatomic, getter=jce_cacheCheckVip, setter=setJce_cacheCheckVip:) _Bool jcev2_p_4_o_cacheCheckVip; // @synthesize jcev2_p_4_o_cacheCheckVip;
@property(retain, nonatomic, getter=jce_detailTips, setter=setJce_detailTips:) NSString *jcev2_p_3_o_detailTips; // @synthesize jcev2_p_3_o_detailTips;
@property(nonatomic, getter=jce_detailCode, setter=setJce_detailCode:) int jcev2_p_2_o_detailCode; // @synthesize jcev2_p_2_o_detailCode;
@property(nonatomic, getter=jce_downloadState, setter=setJce_downloadState:) int jcev2_p_1_o_downloadState; // @synthesize jcev2_p_1_o_downloadState;
@property(retain, nonatomic, getter=jce_requestItems, setter=setJce_requestItems:) NSArray *jcev2_p_0_o_requestItems__b0x9i_VOQLJCEVideoBaseParams; // @synthesize jcev2_p_0_o_requestItems__b0x9i_VOQLJCEVideoBaseParams;
- (void).cxx_destruct;
- (id)init;

@end

