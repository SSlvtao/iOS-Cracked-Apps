//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString, QLJCELiveVoteInfo, QLJCEShareItem;

@interface QLJCELiveProcessInfo : JceObjectV2
{
    _Bool jcev2_p_3_o_isGiftUse;
    NSArray *jcev2_p_0_r_moduleList__b0x9i_VOQLJCELiveTabModuleInfo;
    QLJCELiveVoteInfo *jcev2_p_1_o_teamList;
    NSArray *jcev2_p_2_o_actorList__b0x9i_VOQLJCEActorInfo;
    QLJCEShareItem *jcev2_p_4_o_shareItem;
    NSString *jcev2_p_5_o_propsDatakey;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_propsDatakey, setter=setJce_propsDatakey:) NSString *jcev2_p_5_o_propsDatakey; // @synthesize jcev2_p_5_o_propsDatakey;
@property(retain, nonatomic, getter=jce_shareItem, setter=setJce_shareItem:) QLJCEShareItem *jcev2_p_4_o_shareItem; // @synthesize jcev2_p_4_o_shareItem;
@property(nonatomic, getter=jce_isGiftUse, setter=setJce_isGiftUse:) _Bool jcev2_p_3_o_isGiftUse; // @synthesize jcev2_p_3_o_isGiftUse;
@property(retain, nonatomic, getter=jce_actorList, setter=setJce_actorList:) NSArray *jcev2_p_2_o_actorList__b0x9i_VOQLJCEActorInfo; // @synthesize jcev2_p_2_o_actorList__b0x9i_VOQLJCEActorInfo;
@property(retain, nonatomic, getter=jce_teamList, setter=setJce_teamList:) QLJCELiveVoteInfo *jcev2_p_1_o_teamList; // @synthesize jcev2_p_1_o_teamList;
@property(retain, nonatomic, getter=jce_moduleList, setter=setJce_moduleList:) NSArray *jcev2_p_0_r_moduleList__b0x9i_VOQLJCELiveTabModuleInfo; // @synthesize jcev2_p_0_r_moduleList__b0x9i_VOQLJCELiveTabModuleInfo;
- (void).cxx_destruct;
- (id)init;

@end

