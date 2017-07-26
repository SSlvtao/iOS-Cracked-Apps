//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseDownloadTipsView.h"

@class NSIndexPath, NSString;

@interface QLDownLoadAndPlayTipsView : QLBaseDownloadTipsView
{
    NSString *_showFromVid;
    NSIndexPath *_indexPath;
}

+ (id)tipImage;
+ (id)secondLine;
+ (id)secondSectionInFirstLine;
+ (id)firsrSectionInFirstLine;
+ (unsigned long long)maxShowCount;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(copy, nonatomic) NSString *showFromVid; // @synthesize showFromVid=_showFromVid;
- (void).cxx_destruct;

@end

