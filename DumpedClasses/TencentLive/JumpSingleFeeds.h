//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface JumpSingleFeeds : JceObjectV2
{
    NSString *jcev2_p_0_r_feedId;
    NSString *jcev2_p_1_r_h5Url;
    NSString *jcev2_p_2_r_rank;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_rank, setter=setJce_rank:) NSString *jcev2_p_2_r_rank; // @synthesize jcev2_p_2_r_rank;
@property(retain, nonatomic, getter=jce_h5Url, setter=setJce_h5Url:) NSString *jcev2_p_1_r_h5Url; // @synthesize jcev2_p_1_r_h5Url;
@property(retain, nonatomic, getter=jce_feedId, setter=setJce_feedId:) NSString *jcev2_p_0_r_feedId; // @synthesize jcev2_p_0_r_feedId;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

