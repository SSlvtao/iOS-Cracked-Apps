//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SOfoResponseModel.h"

@class NSArray<Optional><SOfoPathModel>, NSNumber<Optional>, SOfoRedPacketModel<Optional>;

@interface SOfoNearbyBicycleResModel : SOfoResponseModel
{
    NSNumber<Optional> *_total;
    NSArray<Optional><SOfoPathModel> *_bicycles;
    SOfoRedPacketModel<Optional> *_redPacket;
}

@property(copy, nonatomic) SOfoRedPacketModel<Optional> *redPacket; // @synthesize redPacket=_redPacket;
@property(copy, nonatomic) NSArray<Optional><SOfoPathModel> *bicycles; // @synthesize bicycles=_bicycles;
@property(copy, nonatomic) NSNumber<Optional> *total; // @synthesize total=_total;
- (void).cxx_destruct;

@end

