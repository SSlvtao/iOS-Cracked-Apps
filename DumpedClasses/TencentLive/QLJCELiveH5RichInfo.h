//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString, QLJCEAction;

@interface QLJCELiveH5RichInfo : JceObjectV2
{
    int jcev2_p_4_o_imageUiType;
    NSString *jcev2_p_0_o_icon;
    NSString *jcev2_p_1_o_title;
    NSString *jcev2_p_2_o_desc;
    QLJCEAction *jcev2_p_3_o_action;
    NSArray *jcev2_p_5_o_markLable__b0x9i_VOQLJCEMarkLabel;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_markLable, setter=setJce_markLable:) NSArray *jcev2_p_5_o_markLable__b0x9i_VOQLJCEMarkLabel; // @synthesize jcev2_p_5_o_markLable__b0x9i_VOQLJCEMarkLabel;
@property(nonatomic, getter=jce_imageUiType, setter=setJce_imageUiType:) int jcev2_p_4_o_imageUiType; // @synthesize jcev2_p_4_o_imageUiType;
@property(retain, nonatomic, getter=jce_action, setter=setJce_action:) QLJCEAction *jcev2_p_3_o_action; // @synthesize jcev2_p_3_o_action;
@property(retain, nonatomic, getter=jce_desc, setter=setJce_desc:) NSString *jcev2_p_2_o_desc; // @synthesize jcev2_p_2_o_desc;
@property(retain, nonatomic, getter=jce_title, setter=setJce_title:) NSString *jcev2_p_1_o_title; // @synthesize jcev2_p_1_o_title;
@property(retain, nonatomic, getter=jce_icon, setter=setJce_icon:) NSString *jcev2_p_0_o_icon; // @synthesize jcev2_p_0_o_icon;
- (void).cxx_destruct;
- (id)init;

@end

