//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSString;

@interface ESPBusinessAdvertisement : NVMModel
{
    long long _advertisementID;
    long long _index;
    NSString *_restaurantID;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *restaurantID; // @synthesize restaurantID=_restaurantID;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) long long advertisementID; // @synthesize advertisementID=_advertisementID;
- (void).cxx_destruct;

@end

