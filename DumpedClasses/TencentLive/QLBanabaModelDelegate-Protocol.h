//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@protocol QLBanabaModelDelegate <NSObject>
- (void)banabaModelDidFinishBanabaDataPool:(NSDictionary *)arg1 withTargetID:(NSString *)arg2;
- (void)banabaModelDidFinishBanabaTargetID:(NSString *)arg1 shouldLoadHollyWoodBubbleKeyBoardData:(_Bool)arg2;
- (void)banabaModelDidFinishBanabaTargetID:(NSString *)arg1;

@optional
- (double)getCurrentSeeBackTimestamp;
- (_Bool)isLiveSeeBackStatus;
- (void)banabaModelDidFinishBanabaList:(NSArray *)arg1 withFlag:(NSString *)arg2;
@end

