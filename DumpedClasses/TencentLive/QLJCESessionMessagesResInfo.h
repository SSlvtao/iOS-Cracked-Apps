//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString, QLJCEMessageInfo;

@interface QLJCESessionMessagesResInfo : JceObjectV2
{
    _Bool jcev2_p_4_o_hasNextPage;
    int jcev2_p_0_r_errCode;
    int jcev2_p_5_o_unReadCount;
    int jcev2_p_6_o_nextMsgReqIntervalTime;
    NSString *jcev2_p_1_r_errMsg;
    NSArray *jcev2_p_2_o_msgList__b0x9i_VOQLJCEMessageInfo;
    NSString *jcev2_p_3_o_pageContext;
    QLJCEMessageInfo *jcev2_p_7_o_unReadMsgInfo;
    NSArray *jcev2_p_8_o_extMsgList__b0x9i_VOQLJCEMessageInfo;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_extMsgList, setter=setJce_extMsgList:) NSArray *jcev2_p_8_o_extMsgList__b0x9i_VOQLJCEMessageInfo; // @synthesize jcev2_p_8_o_extMsgList__b0x9i_VOQLJCEMessageInfo;
@property(retain, nonatomic, getter=jce_unReadMsgInfo, setter=setJce_unReadMsgInfo:) QLJCEMessageInfo *jcev2_p_7_o_unReadMsgInfo; // @synthesize jcev2_p_7_o_unReadMsgInfo;
@property(nonatomic, getter=jce_nextMsgReqIntervalTime, setter=setJce_nextMsgReqIntervalTime:) int jcev2_p_6_o_nextMsgReqIntervalTime; // @synthesize jcev2_p_6_o_nextMsgReqIntervalTime;
@property(nonatomic, getter=jce_unReadCount, setter=setJce_unReadCount:) int jcev2_p_5_o_unReadCount; // @synthesize jcev2_p_5_o_unReadCount;
@property(nonatomic, getter=jce_hasNextPage, setter=setJce_hasNextPage:) _Bool jcev2_p_4_o_hasNextPage; // @synthesize jcev2_p_4_o_hasNextPage;
@property(retain, nonatomic, getter=jce_pageContext, setter=setJce_pageContext:) NSString *jcev2_p_3_o_pageContext; // @synthesize jcev2_p_3_o_pageContext;
@property(retain, nonatomic, getter=jce_msgList, setter=setJce_msgList:) NSArray *jcev2_p_2_o_msgList__b0x9i_VOQLJCEMessageInfo; // @synthesize jcev2_p_2_o_msgList__b0x9i_VOQLJCEMessageInfo;
@property(retain, nonatomic, getter=jce_errMsg, setter=setJce_errMsg:) NSString *jcev2_p_1_r_errMsg; // @synthesize jcev2_p_1_r_errMsg;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void).cxx_destruct;
- (id)init;

@end

