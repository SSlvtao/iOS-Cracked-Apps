//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString, QLJCEActionBarInfo, QLJCEGameDownloadItemData, QLJCEShareItem, QLJCEVideoAttentItem;

@interface QLJCENavOperatePageResponse : JceObjectV2
{
    _Bool jcev2_p_9_o_showEditModelList;
    int jcev2_p_0_r_errCode;
    int jcev2_p_5_o_actionType;
    NSArray *jcev2_p_1_r_moduleList__b0x9i_VOQLJCELiveTabModuleInfo;
    NSString *jcev2_p_2_o_title;
    QLJCEVideoAttentItem *jcev2_p_3_o_attentItem;
    QLJCEShareItem *jcev2_p_4_o_shareItem;
    NSString *jcev2_p_6_o_subTitle;
    QLJCEGameDownloadItemData *jcev2_p_7_o_apkInfo;
    QLJCEActionBarInfo *jcev2_p_8_o_moreAction;
    NSString *jcev2_p_10_o_titleOnEdit;
    NSString *jcev2_p_11_o_labelMyChannelOnEdit;
    NSString *jcev2_p_12_o_labelOtherChannelOnEdit;
    NSString *jcev2_p_13_o_labelNoMoreTips;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_labelNoMoreTips, setter=setJce_labelNoMoreTips:) NSString *jcev2_p_13_o_labelNoMoreTips; // @synthesize jcev2_p_13_o_labelNoMoreTips;
@property(retain, nonatomic, getter=jce_labelOtherChannelOnEdit, setter=setJce_labelOtherChannelOnEdit:) NSString *jcev2_p_12_o_labelOtherChannelOnEdit; // @synthesize jcev2_p_12_o_labelOtherChannelOnEdit;
@property(retain, nonatomic, getter=jce_labelMyChannelOnEdit, setter=setJce_labelMyChannelOnEdit:) NSString *jcev2_p_11_o_labelMyChannelOnEdit; // @synthesize jcev2_p_11_o_labelMyChannelOnEdit;
@property(retain, nonatomic, getter=jce_titleOnEdit, setter=setJce_titleOnEdit:) NSString *jcev2_p_10_o_titleOnEdit; // @synthesize jcev2_p_10_o_titleOnEdit;
@property(nonatomic, getter=jce_showEditModelList, setter=setJce_showEditModelList:) _Bool jcev2_p_9_o_showEditModelList; // @synthesize jcev2_p_9_o_showEditModelList;
@property(retain, nonatomic, getter=jce_moreAction, setter=setJce_moreAction:) QLJCEActionBarInfo *jcev2_p_8_o_moreAction; // @synthesize jcev2_p_8_o_moreAction;
@property(retain, nonatomic, getter=jce_apkInfo, setter=setJce_apkInfo:) QLJCEGameDownloadItemData *jcev2_p_7_o_apkInfo; // @synthesize jcev2_p_7_o_apkInfo;
@property(retain, nonatomic, getter=jce_subTitle, setter=setJce_subTitle:) NSString *jcev2_p_6_o_subTitle; // @synthesize jcev2_p_6_o_subTitle;
@property(nonatomic, getter=jce_actionType, setter=setJce_actionType:) int jcev2_p_5_o_actionType; // @synthesize jcev2_p_5_o_actionType;
@property(retain, nonatomic, getter=jce_shareItem, setter=setJce_shareItem:) QLJCEShareItem *jcev2_p_4_o_shareItem; // @synthesize jcev2_p_4_o_shareItem;
@property(retain, nonatomic, getter=jce_attentItem, setter=setJce_attentItem:) QLJCEVideoAttentItem *jcev2_p_3_o_attentItem; // @synthesize jcev2_p_3_o_attentItem;
@property(retain, nonatomic, getter=jce_title, setter=setJce_title:) NSString *jcev2_p_2_o_title; // @synthesize jcev2_p_2_o_title;
@property(retain, nonatomic, getter=jce_moduleList, setter=setJce_moduleList:) NSArray *jcev2_p_1_r_moduleList__b0x9i_VOQLJCELiveTabModuleInfo; // @synthesize jcev2_p_1_r_moduleList__b0x9i_VOQLJCELiveTabModuleInfo;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void).cxx_destruct;
- (id)init;

@end

