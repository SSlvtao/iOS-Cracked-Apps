//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString, QLJCEVideoAttentItem;

@interface QLJCESortAttentItem : JceObjectV2
{
    int jcev2_p_0_r_iAttentType;
    NSString *jcev2_p_1_r_sRid;
    QLJCEVideoAttentItem *jcev2_p_2_o_stItem;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_stItem, setter=setJce_stItem:) QLJCEVideoAttentItem *jcev2_p_2_o_stItem; // @synthesize jcev2_p_2_o_stItem;
@property(retain, nonatomic, getter=jce_sRid, setter=setJce_sRid:) NSString *jcev2_p_1_r_sRid; // @synthesize jcev2_p_1_r_sRid;
@property(nonatomic, getter=jce_iAttentType, setter=setJce_iAttentType:) int jcev2_p_0_r_iAttentType; // @synthesize jcev2_p_0_r_iAttentType;
- (void).cxx_destruct;
- (id)init;

@end
