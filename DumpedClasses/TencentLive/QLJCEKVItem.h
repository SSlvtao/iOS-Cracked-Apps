//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString;

@interface QLJCEKVItem : JceObjectV2
{
    NSString *jcev2_p_0_r_itemKey;
    NSString *jcev2_p_1_r_itemValue;
    NSString *jcev2_p_2_o_itemId;
    NSArray *jcev2_p_3_o_itemValues__b0x9i_VONSString;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_itemValues, setter=setJce_itemValues:) NSArray *jcev2_p_3_o_itemValues__b0x9i_VONSString; // @synthesize jcev2_p_3_o_itemValues__b0x9i_VONSString;
@property(retain, nonatomic, getter=jce_itemId, setter=setJce_itemId:) NSString *jcev2_p_2_o_itemId; // @synthesize jcev2_p_2_o_itemId;
@property(retain, nonatomic, getter=jce_itemValue, setter=setJce_itemValue:) NSString *jcev2_p_1_r_itemValue; // @synthesize jcev2_p_1_r_itemValue;
@property(retain, nonatomic, getter=jce_itemKey, setter=setJce_itemKey:) NSString *jcev2_p_0_r_itemKey; // @synthesize jcev2_p_0_r_itemKey;
- (void).cxx_destruct;
- (id)init;

@end

