//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTJSONModel.h"

@interface CTFioPromotionInfo : CTJSONModel
{
    int _PromotionID;
    int _PromotionType;
    int _SegmentNo;
}

@property(nonatomic) int SegmentNo; // @synthesize SegmentNo=_SegmentNo;
@property(nonatomic) int PromotionType; // @synthesize PromotionType=_PromotionType;
@property(nonatomic) int PromotionID; // @synthesize PromotionID=_PromotionID;
- (id)init;

@end

