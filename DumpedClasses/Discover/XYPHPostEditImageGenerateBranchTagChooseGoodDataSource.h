//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHRefreshBaseDataSource.h"

@class NSString;

@interface XYPHPostEditImageGenerateBranchTagChooseGoodDataSource : XYPHRefreshBaseDataSource
{
    NSString *_searchKey;
    NSString *_parentName;
}

@property(copy, nonatomic) NSString *parentName; // @synthesize parentName=_parentName;
@property(copy, nonatomic) NSString *searchKey; // @synthesize searchKey=_searchKey;
- (void).cxx_destruct;
- (id)objectAtIndexPath:(id)arg1;
- (long long)numberOfObjectsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)init;

@end

