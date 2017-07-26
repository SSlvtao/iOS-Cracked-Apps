//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

#import "QLMovieCoreReportItemsProtocal.h"

@class NSArray, NSNumber, NSString, QLJCEAction, QLJCEFeedbackBoard, QLJCEIconTagText, QLJCEOptionGroup, QLJCEPoster, QLJCEVideoAttentItem, QLJCEVideoItemData, QLJCEVideoItemExtra;

@interface QLJCEONABulletinBoardV2 : JceObjectV2 <QLMovieCoreReportItemsProtocal>
{
    _Bool jcev2_p_5_o_isAutoPlayer;
    _Bool jcev2_p_6_o_isLiveVideo;
    _Bool jcev2_p_11_o_dislikeMark;
    _Bool jcev2_p_20_o_isAutoPlayNext;
    _Bool jcev2_p_22_o_isNeedShowFloatWindow;
    _Bool jcev2_p_23_o_isContinuePlayOutOfWindow;
    _Bool jcev2_p_27_o_isLoopPlayBack;
    int jcev2_p_13_o_uiStyle;
    int jcev2_p_18_o_insertNewLineProgress;
    QLJCEPoster *jcev2_p_0_r_poster;
    NSArray *jcev2_p_1_o_tagTexts__b0x9i_VOQLJCEIconTagText;
    QLJCEAction *jcev2_p_2_o_action;
    QLJCEVideoAttentItem *jcev2_p_3_o_attentItem;
    QLJCEVideoItemData *jcev2_p_4_o_videoData;
    NSString *jcev2_p_7_o_pid;
    NSString *jcev2_p_8_o_streamId;
    long long jcev2_p_9_o_startTime;
    long long jcev2_p_10_o_endTime;
    QLJCEOptionGroup *jcev2_p_12_o_dislikeOptionGroup;
    NSString *jcev2_p_14_o_feedbackDataKey;
    NSString *jcev2_p_15_o_insertNewLineDataKey;
    NSString *jcev2_p_16_o_feedbackType;
    NSArray *jcev2_p_17_o_recommendList__b0x9i_VOQLJCEPoster;
    QLJCEVideoItemExtra *jcev2_p_19_o_liveExtra;
    QLJCEIconTagText *jcev2_p_21_o_commentTag;
    NSString *jcev2_p_24_o_cid;
    QLJCEFeedbackBoard *jcev2_p_25_o_feedbackBorad;
    NSString *jcev2_p_26_o_getALineDataKey;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_isLoopPlayBack, setter=setJce_isLoopPlayBack:) _Bool jcev2_p_27_o_isLoopPlayBack; // @synthesize jcev2_p_27_o_isLoopPlayBack;
@property(retain, nonatomic, getter=jce_getALineDataKey, setter=setJce_getALineDataKey:) NSString *jcev2_p_26_o_getALineDataKey; // @synthesize jcev2_p_26_o_getALineDataKey;
@property(retain, nonatomic, getter=jce_feedbackBorad, setter=setJce_feedbackBorad:) QLJCEFeedbackBoard *jcev2_p_25_o_feedbackBorad; // @synthesize jcev2_p_25_o_feedbackBorad;
@property(retain, nonatomic, getter=jce_cid, setter=setJce_cid:) NSString *jcev2_p_24_o_cid; // @synthesize jcev2_p_24_o_cid;
@property(nonatomic, getter=jce_isContinuePlayOutOfWindow, setter=setJce_isContinuePlayOutOfWindow:) _Bool jcev2_p_23_o_isContinuePlayOutOfWindow; // @synthesize jcev2_p_23_o_isContinuePlayOutOfWindow;
@property(nonatomic, getter=jce_isNeedShowFloatWindow, setter=setJce_isNeedShowFloatWindow:) _Bool jcev2_p_22_o_isNeedShowFloatWindow; // @synthesize jcev2_p_22_o_isNeedShowFloatWindow;
@property(retain, nonatomic, getter=jce_commentTag, setter=setJce_commentTag:) QLJCEIconTagText *jcev2_p_21_o_commentTag; // @synthesize jcev2_p_21_o_commentTag;
@property(nonatomic, getter=jce_isAutoPlayNext, setter=setJce_isAutoPlayNext:) _Bool jcev2_p_20_o_isAutoPlayNext; // @synthesize jcev2_p_20_o_isAutoPlayNext;
@property(retain, nonatomic, getter=jce_liveExtra, setter=setJce_liveExtra:) QLJCEVideoItemExtra *jcev2_p_19_o_liveExtra; // @synthesize jcev2_p_19_o_liveExtra;
@property(nonatomic, getter=jce_insertNewLineProgress, setter=setJce_insertNewLineProgress:) int jcev2_p_18_o_insertNewLineProgress; // @synthesize jcev2_p_18_o_insertNewLineProgress;
@property(retain, nonatomic, getter=jce_recommendList, setter=setJce_recommendList:) NSArray *jcev2_p_17_o_recommendList__b0x9i_VOQLJCEPoster; // @synthesize jcev2_p_17_o_recommendList__b0x9i_VOQLJCEPoster;
@property(retain, nonatomic, getter=jce_feedbackType, setter=setJce_feedbackType:) NSString *jcev2_p_16_o_feedbackType; // @synthesize jcev2_p_16_o_feedbackType;
@property(retain, nonatomic, getter=jce_insertNewLineDataKey, setter=setJce_insertNewLineDataKey:) NSString *jcev2_p_15_o_insertNewLineDataKey; // @synthesize jcev2_p_15_o_insertNewLineDataKey;
@property(retain, nonatomic, getter=jce_feedbackDataKey, setter=setJce_feedbackDataKey:) NSString *jcev2_p_14_o_feedbackDataKey; // @synthesize jcev2_p_14_o_feedbackDataKey;
@property(nonatomic, getter=jce_uiStyle, setter=setJce_uiStyle:) int jcev2_p_13_o_uiStyle; // @synthesize jcev2_p_13_o_uiStyle;
@property(retain, nonatomic, getter=jce_dislikeOptionGroup, setter=setJce_dislikeOptionGroup:) QLJCEOptionGroup *jcev2_p_12_o_dislikeOptionGroup; // @synthesize jcev2_p_12_o_dislikeOptionGroup;
@property(nonatomic, getter=jce_dislikeMark, setter=setJce_dislikeMark:) _Bool jcev2_p_11_o_dislikeMark; // @synthesize jcev2_p_11_o_dislikeMark;
@property(nonatomic, getter=jce_endTime, setter=setJce_endTime:) long long jcev2_p_10_o_endTime; // @synthesize jcev2_p_10_o_endTime;
@property(nonatomic, getter=jce_startTime, setter=setJce_startTime:) long long jcev2_p_9_o_startTime; // @synthesize jcev2_p_9_o_startTime;
@property(retain, nonatomic, getter=jce_streamId, setter=setJce_streamId:) NSString *jcev2_p_8_o_streamId; // @synthesize jcev2_p_8_o_streamId;
@property(retain, nonatomic, getter=jce_pid, setter=setJce_pid:) NSString *jcev2_p_7_o_pid; // @synthesize jcev2_p_7_o_pid;
@property(nonatomic, getter=jce_isLiveVideo, setter=setJce_isLiveVideo:) _Bool jcev2_p_6_o_isLiveVideo; // @synthesize jcev2_p_6_o_isLiveVideo;
@property(nonatomic, getter=jce_isAutoPlayer, setter=setJce_isAutoPlayer:) _Bool jcev2_p_5_o_isAutoPlayer; // @synthesize jcev2_p_5_o_isAutoPlayer;
@property(retain, nonatomic, getter=jce_videoData, setter=setJce_videoData:) QLJCEVideoItemData *jcev2_p_4_o_videoData; // @synthesize jcev2_p_4_o_videoData;
@property(retain, nonatomic, getter=jce_attentItem, setter=setJce_attentItem:) QLJCEVideoAttentItem *jcev2_p_3_o_attentItem; // @synthesize jcev2_p_3_o_attentItem;
@property(retain, nonatomic, getter=jce_action, setter=setJce_action:) QLJCEAction *jcev2_p_2_o_action; // @synthesize jcev2_p_2_o_action;
@property(retain, nonatomic, getter=jce_tagTexts, setter=setJce_tagTexts:) NSArray *jcev2_p_1_o_tagTexts__b0x9i_VOQLJCEIconTagText; // @synthesize jcev2_p_1_o_tagTexts__b0x9i_VOQLJCEIconTagText;
@property(retain, nonatomic, getter=jce_poster, setter=setJce_poster:) QLJCEPoster *jcev2_p_0_r_poster; // @synthesize jcev2_p_0_r_poster;
- (void).cxx_destruct;
- (id)init;
@property(retain, nonatomic) NSNumber *markedAsFeedback; // @dynamic markedAsFeedback;
@property(retain, nonatomic) QLJCEAction *liveEndAction;
- (id)movieCoreReportCGIItems;
- (id)movieCoreReportItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

