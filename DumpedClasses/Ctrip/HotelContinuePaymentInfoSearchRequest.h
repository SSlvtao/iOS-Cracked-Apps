//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class AllianceEntityModel, HotelUserInfoModel;

@interface HotelContinuePaymentInfoSearchRequest : CTBusinessBean
{
    _Bool _isPaymentAgain;
    HotelUserInfoModel *_hotelUserInfoModel;
    AllianceEntityModel *_allianceInfoModel;
    long long _orderId;
}

@property(nonatomic) _Bool isPaymentAgain; // @synthesize isPaymentAgain=_isPaymentAgain;
@property(nonatomic) long long orderId; // @synthesize orderId=_orderId;
@property(retain, nonatomic) AllianceEntityModel *allianceInfoModel; // @synthesize allianceInfoModel=_allianceInfoModel;
@property(retain, nonatomic) HotelUserInfoModel *hotelUserInfoModel; // @synthesize hotelUserInfoModel=_hotelUserInfoModel;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

