//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QLStarThemeItem;

@interface QLBackupedStarThemeItem : NSObject
{
    QLStarThemeItem *_starThemeItem;
    NSString *_userId;
}

+ (id)copyWithStarThemeItem:(id)arg1;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) QLStarThemeItem *starThemeItem; // @synthesize starThemeItem=_starThemeItem;
- (void).cxx_destruct;

@end

