//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTPassengerModel;

@protocol CTHotelInsuredPassengerEditDelegate <NSObject>

@optional
- (void)deletePassenger:(CTPassengerModel *)arg1 index:(long long)arg2;
- (void)editPassenger:(CTPassengerModel *)arg1 index:(long long)arg2;
- (void)addPassenger;
@end
