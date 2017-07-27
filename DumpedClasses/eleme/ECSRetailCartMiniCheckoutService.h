//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMHTTPRequestData.h"

@class NSArray, NSString;

@interface ECSRetailCartMiniCheckoutService : NVMHTTPRequestData
{
    NSString *_checkoutRestaurantID;
    NSArray *_checkoutFoods;
}

+ (id)cartMiniCheckoutWithRestaurantID:(id)arg1 checkoutFoods:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)cartMiniCheckoutWithRestaurantID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)cartMiniCheckoutWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) NSArray *checkoutFoods; // @synthesize checkoutFoods=_checkoutFoods;
@property(copy, nonatomic) NSString *checkoutRestaurantID; // @synthesize checkoutRestaurantID=_checkoutRestaurantID;
- (void).cxx_destruct;
- (id)selectedFoodFromLocalInRestaurant:(id)arg1;
- (id)localSelectedFoodGroupsDataForCheckout;
- (id)localFoodGroupsDataForCheckout;
- (id)extraParameters;
- (id)init;

@end
