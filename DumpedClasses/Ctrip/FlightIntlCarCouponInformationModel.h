//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString, PriceType;

@interface FlightIntlCarCouponInformationModel : CTBusinessBean
{
    NSString *couponCode;
    PriceType *amount;
}

@property(retain, nonatomic) PriceType *amount; // @synthesize amount;
@property(copy, nonatomic) NSString *couponCode; // @synthesize couponCode;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

