//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCEUserCenterVipEntryResponse : JceObjectV2
{
    int jcev2_p_0_r_errCode;
    NSString *jcev2_p_1_o_iconUrl;
    NSString *jcev2_p_2_o_title;
    NSString *jcev2_p_3_o_subtitle;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_subtitle, setter=setJce_subtitle:) NSString *jcev2_p_3_o_subtitle; // @synthesize jcev2_p_3_o_subtitle;
@property(retain, nonatomic, getter=jce_title, setter=setJce_title:) NSString *jcev2_p_2_o_title; // @synthesize jcev2_p_2_o_title;
@property(retain, nonatomic, getter=jce_iconUrl, setter=setJce_iconUrl:) NSString *jcev2_p_1_o_iconUrl; // @synthesize jcev2_p_1_o_iconUrl;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void).cxx_destruct;
- (id)init;

@end

