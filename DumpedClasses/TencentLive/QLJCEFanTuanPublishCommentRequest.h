//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString, QLJCEFanTuanExtInfo;

@interface QLJCEFanTuanPublishCommentRequest : JceObjectV2
{
    int jcev2_p_4_o_targetType;
    NSString *jcev2_p_0_o_parentId;
    NSString *jcev2_p_1_o_content;
    NSString *jcev2_p_2_o_seq;
    NSArray *jcev2_p_3_o_photos__b0x9i_VOQLJCECircleUploadImageUrl;
    QLJCEFanTuanExtInfo *jcev2_p_5_o_stExtInfo;
    NSString *jcev2_p_6_o_rootId;
    NSString *jcev2_p_7_o_fanTuanId;
    NSArray *jcev2_p_8_o_longVideos__b0x9i_VOQLJCEFantuanLongVideo;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_longVideos, setter=setJce_longVideos:) NSArray *jcev2_p_8_o_longVideos__b0x9i_VOQLJCEFantuanLongVideo; // @synthesize jcev2_p_8_o_longVideos__b0x9i_VOQLJCEFantuanLongVideo;
@property(retain, nonatomic, getter=jce_fanTuanId, setter=setJce_fanTuanId:) NSString *jcev2_p_7_o_fanTuanId; // @synthesize jcev2_p_7_o_fanTuanId;
@property(retain, nonatomic, getter=jce_rootId, setter=setJce_rootId:) NSString *jcev2_p_6_o_rootId; // @synthesize jcev2_p_6_o_rootId;
@property(retain, nonatomic, getter=jce_stExtInfo, setter=setJce_stExtInfo:) QLJCEFanTuanExtInfo *jcev2_p_5_o_stExtInfo; // @synthesize jcev2_p_5_o_stExtInfo;
@property(nonatomic, getter=jce_targetType, setter=setJce_targetType:) int jcev2_p_4_o_targetType; // @synthesize jcev2_p_4_o_targetType;
@property(retain, nonatomic, getter=jce_photos, setter=setJce_photos:) NSArray *jcev2_p_3_o_photos__b0x9i_VOQLJCECircleUploadImageUrl; // @synthesize jcev2_p_3_o_photos__b0x9i_VOQLJCECircleUploadImageUrl;
@property(retain, nonatomic, getter=jce_seq, setter=setJce_seq:) NSString *jcev2_p_2_o_seq; // @synthesize jcev2_p_2_o_seq;
@property(retain, nonatomic, getter=jce_content, setter=setJce_content:) NSString *jcev2_p_1_o_content; // @synthesize jcev2_p_1_o_content;
@property(retain, nonatomic, getter=jce_parentId, setter=setJce_parentId:) NSString *jcev2_p_0_o_parentId; // @synthesize jcev2_p_0_o_parentId;
- (void).cxx_destruct;
- (id)init;

@end

