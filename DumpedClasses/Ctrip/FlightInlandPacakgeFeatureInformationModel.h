//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface FlightInlandPacakgeFeatureInformationModel : CTBusinessBean
{
    int featureType;
    NSString *featureContent;
}

@property(copy, nonatomic) NSString *featureContent; // @synthesize featureContent;
@property(nonatomic) int featureType; // @synthesize featureType;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

