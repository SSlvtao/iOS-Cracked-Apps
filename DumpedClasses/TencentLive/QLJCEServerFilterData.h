//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSDictionary;

@interface QLJCEServerFilterData : JceObjectV2
{
    int jcev2_p_1_o_filterStategy;
    NSDictionary *jcev2_p_0_o_filter__b0x9i_M09ONSStringONSString;
    NSArray *jcev2_p_2_o_mulFilter__b0x9i_VM09ONSStringONSString;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_mulFilter, setter=setJce_mulFilter:) NSArray *jcev2_p_2_o_mulFilter__b0x9i_VM09ONSStringONSString; // @synthesize jcev2_p_2_o_mulFilter__b0x9i_VM09ONSStringONSString;
@property(nonatomic, getter=jce_filterStategy, setter=setJce_filterStategy:) int jcev2_p_1_o_filterStategy; // @synthesize jcev2_p_1_o_filterStategy;
@property(retain, nonatomic, getter=jce_filter, setter=setJce_filter:) NSDictionary *jcev2_p_0_o_filter__b0x9i_M09ONSStringONSString; // @synthesize jcev2_p_0_o_filter__b0x9i_M09ONSStringONSString;
- (void).cxx_destruct;
- (id)init;

@end

