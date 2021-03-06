//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTViewModel.h"

@class NSString, PriceType;

@interface HotelDailyPriceInfoViewModel : CTViewModel
{
    NSString *_currency;
    PriceType *_amount;
    NSString *_checkInDate;
    NSString *_breakfastRemark;
    NSString *_exchange;
    NSString *_mealOfferDate;
    NSString *_breakfastTitle;
}

+ (id)changeModel:(id)arg1;
@property(copy, nonatomic) NSString *breakfastTitle; // @synthesize breakfastTitle=_breakfastTitle;
@property(copy, nonatomic) NSString *mealOfferDate; // @synthesize mealOfferDate=_mealOfferDate;
@property(copy, nonatomic) NSString *exchange; // @synthesize exchange=_exchange;
@property(copy, nonatomic) NSString *breakfastRemark; // @synthesize breakfastRemark=_breakfastRemark;
@property(copy, nonatomic) NSString *checkInDate; // @synthesize checkInDate=_checkInDate;
@property(retain, nonatomic) PriceType *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
- (void).cxx_destruct;
- (id)init;

@end

