//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface BookingRouteModel : CTBusinessBean
{
    int routeType;
    NSString *title;
    NSString *summary;
    NSString *bookingUrl;
}

@property(copy, nonatomic) NSString *bookingUrl; // @synthesize bookingUrl;
@property(copy, nonatomic) NSString *summary; // @synthesize summary;
@property(copy, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) int routeType; // @synthesize routeType;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

