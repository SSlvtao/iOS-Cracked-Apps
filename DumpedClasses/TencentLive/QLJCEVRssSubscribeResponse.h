//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class QLJCEONAVRSSFeed;

@interface QLJCEVRssSubscribeResponse : JceObjectV2
{
    int jcev2_p_0_r_retCode;
    QLJCEONAVRSSFeed *jcev2_p_1_o_vRssFeed;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_vRssFeed, setter=setJce_vRssFeed:) QLJCEONAVRSSFeed *jcev2_p_1_o_vRssFeed; // @synthesize jcev2_p_1_o_vRssFeed;
@property(nonatomic, getter=jce_retCode, setter=setJce_retCode:) int jcev2_p_0_r_retCode; // @synthesize jcev2_p_0_r_retCode;
- (void).cxx_destruct;
- (id)init;

@end

