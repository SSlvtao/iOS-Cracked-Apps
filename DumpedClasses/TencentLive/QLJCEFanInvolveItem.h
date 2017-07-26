//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString, QLJCEAction, QLJCEActionBarInfo;

@interface QLJCEFanInvolveItem : JceObjectV2
{
    int jcev2_p_4_o_fansFlag;
    int jcev2_p_5_o_fanType;
    int jcev2_p_10_o_signCount;
    NSString *jcev2_p_0_r_fanId;
    NSString *jcev2_p_1_o_fanAttendKey;
    NSArray *jcev2_p_2_o_detailInfo__b0x9i_VOQLJCEKVItem;
    NSArray *jcev2_p_3_o_relateFans__b0x9i_VOQLJCEPortraitInfo;
    NSString *jcev2_p_6_o_fanTitle;
    NSString *jcev2_p_7_o_faceImageUrl;
    NSString *jcev2_p_8_o_backgroundUrl;
    QLJCEActionBarInfo *jcev2_p_9_o_moreAction;
    QLJCEActionBarInfo *jcev2_p_11_o_signMoreAction;
    QLJCEAction *jcev2_p_12_o_signedAction;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_signedAction, setter=setJce_signedAction:) QLJCEAction *jcev2_p_12_o_signedAction; // @synthesize jcev2_p_12_o_signedAction;
@property(retain, nonatomic, getter=jce_signMoreAction, setter=setJce_signMoreAction:) QLJCEActionBarInfo *jcev2_p_11_o_signMoreAction; // @synthesize jcev2_p_11_o_signMoreAction;
@property(nonatomic, getter=jce_signCount, setter=setJce_signCount:) int jcev2_p_10_o_signCount; // @synthesize jcev2_p_10_o_signCount;
@property(retain, nonatomic, getter=jce_moreAction, setter=setJce_moreAction:) QLJCEActionBarInfo *jcev2_p_9_o_moreAction; // @synthesize jcev2_p_9_o_moreAction;
@property(retain, nonatomic, getter=jce_backgroundUrl, setter=setJce_backgroundUrl:) NSString *jcev2_p_8_o_backgroundUrl; // @synthesize jcev2_p_8_o_backgroundUrl;
@property(retain, nonatomic, getter=jce_faceImageUrl, setter=setJce_faceImageUrl:) NSString *jcev2_p_7_o_faceImageUrl; // @synthesize jcev2_p_7_o_faceImageUrl;
@property(retain, nonatomic, getter=jce_fanTitle, setter=setJce_fanTitle:) NSString *jcev2_p_6_o_fanTitle; // @synthesize jcev2_p_6_o_fanTitle;
@property(nonatomic, getter=jce_fanType, setter=setJce_fanType:) int jcev2_p_5_o_fanType; // @synthesize jcev2_p_5_o_fanType;
@property(nonatomic, getter=jce_fansFlag, setter=setJce_fansFlag:) int jcev2_p_4_o_fansFlag; // @synthesize jcev2_p_4_o_fansFlag;
@property(retain, nonatomic, getter=jce_relateFans, setter=setJce_relateFans:) NSArray *jcev2_p_3_o_relateFans__b0x9i_VOQLJCEPortraitInfo; // @synthesize jcev2_p_3_o_relateFans__b0x9i_VOQLJCEPortraitInfo;
@property(retain, nonatomic, getter=jce_detailInfo, setter=setJce_detailInfo:) NSArray *jcev2_p_2_o_detailInfo__b0x9i_VOQLJCEKVItem; // @synthesize jcev2_p_2_o_detailInfo__b0x9i_VOQLJCEKVItem;
@property(retain, nonatomic, getter=jce_fanAttendKey, setter=setJce_fanAttendKey:) NSString *jcev2_p_1_o_fanAttendKey; // @synthesize jcev2_p_1_o_fanAttendKey;
@property(retain, nonatomic, getter=jce_fanId, setter=setJce_fanId:) NSString *jcev2_p_0_r_fanId; // @synthesize jcev2_p_0_r_fanId;
- (void).cxx_destruct;
- (id)init;
- (void)updatepopularCountWithAddDelta:(long long)arg1;
- (void)updateCoverCountWithAddDelta:(long long)arg1;
- (void)updateFansNumWithAddDelta:(long long)arg1;

@end

