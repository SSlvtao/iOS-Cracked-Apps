//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString, QLJCEH5GameImageConfig;

@interface QLJCEH5GameVipIconConfig : JceObjectV2
{
    QLJCEH5GameImageConfig *jcev2_p_0_o_entryTabIcon;
    NSString *jcev2_p_1_o_normalGameIcon;
    NSString *jcev2_p_2_o_pressGameIcon;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_pressGameIcon, setter=setJce_pressGameIcon:) NSString *jcev2_p_2_o_pressGameIcon; // @synthesize jcev2_p_2_o_pressGameIcon;
@property(retain, nonatomic, getter=jce_normalGameIcon, setter=setJce_normalGameIcon:) NSString *jcev2_p_1_o_normalGameIcon; // @synthesize jcev2_p_1_o_normalGameIcon;
@property(retain, nonatomic, getter=jce_entryTabIcon, setter=setJce_entryTabIcon:) QLJCEH5GameImageConfig *jcev2_p_0_o_entryTabIcon; // @synthesize jcev2_p_0_o_entryTabIcon;
- (void).cxx_destruct;
- (id)init;

@end

