//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QLMyWalletTipsTimerManager : NSObject
{
}

+ (id)sharedInstance;
- (_Bool)isRecordDaySomeDaysAgo:(long long)arg1 forKey:(id)arg2;
- (_Bool)isRecordDayEqualCurrentDayForKey:(id)arg1;
- (long long)compareTowDays:(id)arg1 toDate:(id)arg2;
- (id)getCurrentDay;
- (id)getRecordTimeForKey:(id)arg1;
- (void)saveData:(id)arg1 withKey:(id)arg2;
- (void)saveCurrentDayWithKey:(id)arg1;
- (void)writeRecordData:(id)arg1;
- (id)readRecordData;
- (id)getRecordDataPath;

@end

