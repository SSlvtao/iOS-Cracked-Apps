//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BMKOpenOption.h"

@class BMKPlanNode;

@interface BMKOpenRouteOption : BMKOpenOption
{
    BMKPlanNode *startPoint;
    BMKPlanNode *endPoint;
}

@property(retain, nonatomic) BMKPlanNode *endPoint; // @synthesize endPoint;
@property(retain, nonatomic) BMKPlanNode *startPoint; // @synthesize startPoint;
- (void).cxx_destruct;

@end
