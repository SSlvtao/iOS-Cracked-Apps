//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString, PriceType;

@interface HotelBaseInformationModel : CTBusinessBean
{
    NSString *_starRemark;
    NSString *_customerPoint;
    NSString *_hotelImage;
    PriceType *_averagePrice;
    PriceType *_averageCashRefund;
    NSString *_hotelConfirm;
    NSString *_bedInfo;
    NSString *_networkInfo;
    NSString *_bossPhone;
}

@property(copy, nonatomic) NSString *bossPhone; // @synthesize bossPhone=_bossPhone;
@property(copy, nonatomic) NSString *networkInfo; // @synthesize networkInfo=_networkInfo;
@property(copy, nonatomic) NSString *bedInfo; // @synthesize bedInfo=_bedInfo;
@property(copy, nonatomic) NSString *hotelConfirm; // @synthesize hotelConfirm=_hotelConfirm;
@property(retain, nonatomic) PriceType *averageCashRefund; // @synthesize averageCashRefund=_averageCashRefund;
@property(retain, nonatomic) PriceType *averagePrice; // @synthesize averagePrice=_averagePrice;
@property(copy, nonatomic) NSString *hotelImage; // @synthesize hotelImage=_hotelImage;
@property(copy, nonatomic) NSString *customerPoint; // @synthesize customerPoint=_customerPoint;
@property(copy, nonatomic) NSString *starRemark; // @synthesize starRemark=_starRemark;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

