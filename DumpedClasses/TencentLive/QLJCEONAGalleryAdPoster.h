//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString;

@interface QLJCEONAGalleryAdPoster : JceObjectV2
{
    BOOL jcev2_p_0_o_uiType;
    BOOL jcev2_p_1_o_adType;
    int jcev2_p_2_o_adKey;
    NSArray *jcev2_p_3_o_posterList__b0x9i_VOQLJCEPoster;
    NSString *jcev2_p_4_o_extension;
    NSString *jcev2_p_5_o_adSerialNumber;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_adSerialNumber, setter=setJce_adSerialNumber:) NSString *jcev2_p_5_o_adSerialNumber; // @synthesize jcev2_p_5_o_adSerialNumber;
@property(retain, nonatomic, getter=jce_extension, setter=setJce_extension:) NSString *jcev2_p_4_o_extension; // @synthesize jcev2_p_4_o_extension;
@property(retain, nonatomic, getter=jce_posterList, setter=setJce_posterList:) NSArray *jcev2_p_3_o_posterList__b0x9i_VOQLJCEPoster; // @synthesize jcev2_p_3_o_posterList__b0x9i_VOQLJCEPoster;
@property(nonatomic, getter=jce_adKey, setter=setJce_adKey:) int jcev2_p_2_o_adKey; // @synthesize jcev2_p_2_o_adKey;
@property(nonatomic, getter=jce_adType, setter=setJce_adType:) BOOL jcev2_p_1_o_adType; // @synthesize jcev2_p_1_o_adType;
@property(nonatomic, getter=jce_uiType, setter=setJce_uiType:) BOOL jcev2_p_0_o_uiType; // @synthesize jcev2_p_0_o_uiType;
- (void).cxx_destruct;
- (id)init;

@end

