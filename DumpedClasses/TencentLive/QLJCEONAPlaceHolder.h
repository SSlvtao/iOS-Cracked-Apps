//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class QLJCEMarkLabel, QLJCEPoster;

@interface QLJCEONAPlaceHolder : JceObjectV2
{
    int jcev2_p_0_o_uiType;
    QLJCEPoster *jcev2_p_1_o_poster;
    QLJCEMarkLabel *jcev2_p_2_o_btnLabel;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_btnLabel, setter=setJce_btnLabel:) QLJCEMarkLabel *jcev2_p_2_o_btnLabel; // @synthesize jcev2_p_2_o_btnLabel;
@property(retain, nonatomic, getter=jce_poster, setter=setJce_poster:) QLJCEPoster *jcev2_p_1_o_poster; // @synthesize jcev2_p_1_o_poster;
@property(nonatomic, getter=jce_uiType, setter=setJce_uiType:) int jcev2_p_0_o_uiType; // @synthesize jcev2_p_0_o_uiType;
- (void).cxx_destruct;
- (id)init;

@end

