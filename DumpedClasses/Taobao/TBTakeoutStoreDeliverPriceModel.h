//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBTakeoutStoreDeliverPriceModel : TBJSONModel
{
    NSString *_priceRangeDesc;
    NSString *_lowPriceBound;
    NSString *_deliverFeeDesc;
}

@property(copy, nonatomic) NSString *deliverFeeDesc; // @synthesize deliverFeeDesc=_deliverFeeDesc;
@property(copy, nonatomic) NSString *lowPriceBound; // @synthesize lowPriceBound=_lowPriceBound;
@property(copy, nonatomic) NSString *priceRangeDesc; // @synthesize priceRangeDesc=_priceRangeDesc;
- (void).cxx_destruct;

@end

