//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface QLPosterShowUpReportMgr : NSObject
{
    NSMutableArray *_lastReportedCellIndexes;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)clearPartOfIndexesShowUpCache:(id)arg1;
- (void)clearShowUpCache;
- (void)reportShowUpWithTableView:(id)arg1;
- (id)init;

@end

