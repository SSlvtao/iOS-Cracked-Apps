//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTJSONModel.h"

@class NSString;

@interface CTDiscoverDestinationDetailsSpecialFlightModel : CTJSONModel
{
    NSString *_ID;
    NSString *_flightLine;
    NSString *_price;
    NSString *_extInfo;
    NSString *_url;
}

@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *flightLine; // @synthesize flightLine=_flightLine;
@property(copy, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (void).cxx_destruct;

@end

