//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString;

@interface QLJCELiveBannerItemData : JceObjectV2
{
    BOOL jcev2_p_0_r_showType;
    NSString *jcev2_p_1_o_title;
    NSString *jcev2_p_2_o_subTitle;
    NSArray *jcev2_p_3_o_guestList__b0x9i_VOQLJCEActorInfo;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_guestList, setter=setJce_guestList:) NSArray *jcev2_p_3_o_guestList__b0x9i_VOQLJCEActorInfo; // @synthesize jcev2_p_3_o_guestList__b0x9i_VOQLJCEActorInfo;
@property(retain, nonatomic, getter=jce_subTitle, setter=setJce_subTitle:) NSString *jcev2_p_2_o_subTitle; // @synthesize jcev2_p_2_o_subTitle;
@property(retain, nonatomic, getter=jce_title, setter=setJce_title:) NSString *jcev2_p_1_o_title; // @synthesize jcev2_p_1_o_title;
@property(nonatomic, getter=jce_showType, setter=setJce_showType:) BOOL jcev2_p_0_r_showType; // @synthesize jcev2_p_0_r_showType;
- (void).cxx_destruct;
- (id)init;

@end

