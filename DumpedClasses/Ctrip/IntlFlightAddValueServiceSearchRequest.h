//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface IntlFlightAddValueServiceSearchRequest : CTBusinessBean
{
    int serviceVersion;
    NSMutableArray *segmentList;
    NSString *gUID;
}

@property(copy, nonatomic) NSString *gUID; // @synthesize gUID;
@property(retain, nonatomic) NSMutableArray *segmentList; // @synthesize segmentList;
@property(nonatomic) int serviceVersion; // @synthesize serviceVersion;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

