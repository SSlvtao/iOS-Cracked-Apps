//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString, QLJCEActorInfo, QLJCEApolloVoiceData, QLJCECommentParentInfoExtra, QLJCEGiftOverRankItem, QLJCEInteractionInfo, QLJCELBSInfo, QLJCELiveH5RichInfo, QLJCELiveLotteryInfo, QLJCELiveVoteInfo;

@interface QLJCECommentItem : JceObjectV2
{
    BOOL jcev2_p_7_o_type;
    int jcev2_p_8_o_upCount;
    int jcev2_p_9_o_richType;
    int jcev2_p_15_o_replyCount;
    int jcev2_p_16_o_oriReplyCount;
    int jcev2_p_17_o_commentFlag;
    int jcev2_p_20_o_showType;
    int jcev2_p_24_o_topIndex;
    int jcev2_p_26_o_status;
    NSString *jcev2_p_0_r_commentId;
    NSString *jcev2_p_1_r_content;
    long long jcev2_p_2_r_time;
    QLJCEActorInfo *jcev2_p_3_r_userInfo;
    NSString *jcev2_p_4_o_parentId;
    NSString *jcev2_p_5_o_rootId;
    NSString *jcev2_p_6_o_msgId;
    NSArray *jcev2_p_10_o_imageList__b0x9i_VOQLJCEVideoImage;
    QLJCELiveVoteInfo *jcev2_p_11_o_voteInfo;
    QLJCELBSInfo *jcev2_p_12_o_lbsInfo;
    QLJCELiveLotteryInfo *jcev2_p_13_o_lotteryInfo;
    QLJCELiveH5RichInfo *jcev2_p_14_o_h5RichInfo;
    NSString *jcev2_p_18_o_oriParentId;
    NSString *jcev2_p_19_o_oriRootId;
    QLJCEInteractionInfo *jcev2_p_21_o_interInfo;
    long long jcev2_p_22_o_upTime;
    QLJCEGiftOverRankItem *jcev2_p_23_o_giftOverRankItem;
    QLJCEApolloVoiceData *jcev2_p_25_o_voiceData;
    QLJCECommentParentInfoExtra *jcev2_p_27_o_extraParentInfo;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_extraParentInfo, setter=setJce_extraParentInfo:) QLJCECommentParentInfoExtra *jcev2_p_27_o_extraParentInfo; // @synthesize jcev2_p_27_o_extraParentInfo;
@property(nonatomic, getter=jce_status, setter=setJce_status:) int jcev2_p_26_o_status; // @synthesize jcev2_p_26_o_status;
@property(retain, nonatomic, getter=jce_voiceData, setter=setJce_voiceData:) QLJCEApolloVoiceData *jcev2_p_25_o_voiceData; // @synthesize jcev2_p_25_o_voiceData;
@property(nonatomic, getter=jce_topIndex, setter=setJce_topIndex:) int jcev2_p_24_o_topIndex; // @synthesize jcev2_p_24_o_topIndex;
@property(retain, nonatomic, getter=jce_giftOverRankItem, setter=setJce_giftOverRankItem:) QLJCEGiftOverRankItem *jcev2_p_23_o_giftOverRankItem; // @synthesize jcev2_p_23_o_giftOverRankItem;
@property(nonatomic, getter=jce_upTime, setter=setJce_upTime:) long long jcev2_p_22_o_upTime; // @synthesize jcev2_p_22_o_upTime;
@property(retain, nonatomic, getter=jce_interInfo, setter=setJce_interInfo:) QLJCEInteractionInfo *jcev2_p_21_o_interInfo; // @synthesize jcev2_p_21_o_interInfo;
@property(nonatomic, getter=jce_showType, setter=setJce_showType:) int jcev2_p_20_o_showType; // @synthesize jcev2_p_20_o_showType;
@property(retain, nonatomic, getter=jce_oriRootId, setter=setJce_oriRootId:) NSString *jcev2_p_19_o_oriRootId; // @synthesize jcev2_p_19_o_oriRootId;
@property(retain, nonatomic, getter=jce_oriParentId, setter=setJce_oriParentId:) NSString *jcev2_p_18_o_oriParentId; // @synthesize jcev2_p_18_o_oriParentId;
@property(nonatomic, getter=jce_commentFlag, setter=setJce_commentFlag:) int jcev2_p_17_o_commentFlag; // @synthesize jcev2_p_17_o_commentFlag;
@property(nonatomic, getter=jce_oriReplyCount, setter=setJce_oriReplyCount:) int jcev2_p_16_o_oriReplyCount; // @synthesize jcev2_p_16_o_oriReplyCount;
@property(nonatomic, getter=jce_replyCount, setter=setJce_replyCount:) int jcev2_p_15_o_replyCount; // @synthesize jcev2_p_15_o_replyCount;
@property(retain, nonatomic, getter=jce_h5RichInfo, setter=setJce_h5RichInfo:) QLJCELiveH5RichInfo *jcev2_p_14_o_h5RichInfo; // @synthesize jcev2_p_14_o_h5RichInfo;
@property(retain, nonatomic, getter=jce_lotteryInfo, setter=setJce_lotteryInfo:) QLJCELiveLotteryInfo *jcev2_p_13_o_lotteryInfo; // @synthesize jcev2_p_13_o_lotteryInfo;
@property(retain, nonatomic, getter=jce_lbsInfo, setter=setJce_lbsInfo:) QLJCELBSInfo *jcev2_p_12_o_lbsInfo; // @synthesize jcev2_p_12_o_lbsInfo;
@property(retain, nonatomic, getter=jce_voteInfo, setter=setJce_voteInfo:) QLJCELiveVoteInfo *jcev2_p_11_o_voteInfo; // @synthesize jcev2_p_11_o_voteInfo;
@property(retain, nonatomic, getter=jce_imageList, setter=setJce_imageList:) NSArray *jcev2_p_10_o_imageList__b0x9i_VOQLJCEVideoImage; // @synthesize jcev2_p_10_o_imageList__b0x9i_VOQLJCEVideoImage;
@property(nonatomic, getter=jce_richType, setter=setJce_richType:) int jcev2_p_9_o_richType; // @synthesize jcev2_p_9_o_richType;
@property(nonatomic, getter=jce_upCount, setter=setJce_upCount:) int jcev2_p_8_o_upCount; // @synthesize jcev2_p_8_o_upCount;
@property(nonatomic, getter=jce_type, setter=setJce_type:) BOOL jcev2_p_7_o_type; // @synthesize jcev2_p_7_o_type;
@property(retain, nonatomic, getter=jce_msgId, setter=setJce_msgId:) NSString *jcev2_p_6_o_msgId; // @synthesize jcev2_p_6_o_msgId;
@property(retain, nonatomic, getter=jce_rootId, setter=setJce_rootId:) NSString *jcev2_p_5_o_rootId; // @synthesize jcev2_p_5_o_rootId;
@property(retain, nonatomic, getter=jce_parentId, setter=setJce_parentId:) NSString *jcev2_p_4_o_parentId; // @synthesize jcev2_p_4_o_parentId;
@property(retain, nonatomic, getter=jce_userInfo, setter=setJce_userInfo:) QLJCEActorInfo *jcev2_p_3_r_userInfo; // @synthesize jcev2_p_3_r_userInfo;
@property(nonatomic, getter=jce_time, setter=setJce_time:) long long jcev2_p_2_r_time; // @synthesize jcev2_p_2_r_time;
@property(retain, nonatomic, getter=jce_content, setter=setJce_content:) NSString *jcev2_p_1_r_content; // @synthesize jcev2_p_1_r_content;
@property(retain, nonatomic, getter=jce_commentId, setter=setJce_commentId:) NSString *jcev2_p_0_r_commentId; // @synthesize jcev2_p_0_r_commentId;
- (void).cxx_destruct;
- (id)init;

@end

