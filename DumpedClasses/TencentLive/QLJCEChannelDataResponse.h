//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString, QLJCEChannelEventInfo, QLJCESearchHotWordInfo;

@interface QLJCEChannelDataResponse : JceObjectV2
{
    _Bool jcev2_p_1_r_hasNextPage;
    BOOL jcev2_p_6_o_optType;
    int jcev2_p_0_r_errCode;
    int jcev2_p_7_o_refreshType;
    int jcev2_p_9_o_dataType;
    int jcev2_p_10_o_showLastReadPositionFlag;
    int jcev2_p_12_o_timeOut;
    int jcev2_p_13_o_autoPlayIndex;
    NSString *jcev2_p_2_r_pageContext;
    NSArray *jcev2_p_3_o_data__b0x9i_VOQLJCETempletLine;
    NSString *jcev2_p_4_o_refreshContext;
    NSString *jcev2_p_5_o_refreshWording;
    QLJCESearchHotWordInfo *jcev2_p_8_o_hotWordInfo;
    NSString *jcev2_p_11_o_reportContext;
    QLJCEChannelEventInfo *jcev2_p_14_o_eventItem;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_eventItem, setter=setJce_eventItem:) QLJCEChannelEventInfo *jcev2_p_14_o_eventItem; // @synthesize jcev2_p_14_o_eventItem;
@property(nonatomic, getter=jce_autoPlayIndex, setter=setJce_autoPlayIndex:) int jcev2_p_13_o_autoPlayIndex; // @synthesize jcev2_p_13_o_autoPlayIndex;
@property(nonatomic, getter=jce_timeOut, setter=setJce_timeOut:) int jcev2_p_12_o_timeOut; // @synthesize jcev2_p_12_o_timeOut;
@property(retain, nonatomic, getter=jce_reportContext, setter=setJce_reportContext:) NSString *jcev2_p_11_o_reportContext; // @synthesize jcev2_p_11_o_reportContext;
@property(nonatomic, getter=jce_showLastReadPositionFlag, setter=setJce_showLastReadPositionFlag:) int jcev2_p_10_o_showLastReadPositionFlag; // @synthesize jcev2_p_10_o_showLastReadPositionFlag;
@property(nonatomic, getter=jce_dataType, setter=setJce_dataType:) int jcev2_p_9_o_dataType; // @synthesize jcev2_p_9_o_dataType;
@property(retain, nonatomic, getter=jce_hotWordInfo, setter=setJce_hotWordInfo:) QLJCESearchHotWordInfo *jcev2_p_8_o_hotWordInfo; // @synthesize jcev2_p_8_o_hotWordInfo;
@property(nonatomic, getter=jce_refreshType, setter=setJce_refreshType:) int jcev2_p_7_o_refreshType; // @synthesize jcev2_p_7_o_refreshType;
@property(nonatomic, getter=jce_optType, setter=setJce_optType:) BOOL jcev2_p_6_o_optType; // @synthesize jcev2_p_6_o_optType;
@property(retain, nonatomic, getter=jce_refreshWording, setter=setJce_refreshWording:) NSString *jcev2_p_5_o_refreshWording; // @synthesize jcev2_p_5_o_refreshWording;
@property(retain, nonatomic, getter=jce_refreshContext, setter=setJce_refreshContext:) NSString *jcev2_p_4_o_refreshContext; // @synthesize jcev2_p_4_o_refreshContext;
@property(retain, nonatomic, getter=jce_data, setter=setJce_data:) NSArray *jcev2_p_3_o_data__b0x9i_VOQLJCETempletLine; // @synthesize jcev2_p_3_o_data__b0x9i_VOQLJCETempletLine;
@property(retain, nonatomic, getter=jce_pageContext, setter=setJce_pageContext:) NSString *jcev2_p_2_r_pageContext; // @synthesize jcev2_p_2_r_pageContext;
@property(nonatomic, getter=jce_hasNextPage, setter=setJce_hasNextPage:) _Bool jcev2_p_1_r_hasNextPage; // @synthesize jcev2_p_1_r_hasNextPage;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void).cxx_destruct;
- (id)init;

@end

