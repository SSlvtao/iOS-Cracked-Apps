//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableArray;

@interface QLMarketAttentionOperateTaskQueue : NSObject <NSCoding>
{
    NSMutableArray *_aryTasks;
}

@property(retain, nonatomic) NSMutableArray *aryTasks; // @synthesize aryTasks=_aryTasks;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)removeTask:(id)arg1;
- (void)addTask:(id)arg1;
- (id)init;

@end

