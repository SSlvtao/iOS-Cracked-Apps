//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDate, NSString, QLMomentPublish;

@interface QLFakeFeedItem : NSObject <NSCoding>
{
    QLMomentPublish *feed;
    NSString *feedKey;
    NSDate *time;
}

@property(nonatomic) NSDate *time; // @synthesize time;
@property(retain, nonatomic) NSString *feedKey; // @synthesize feedKey;
@property(retain, nonatomic) QLMomentPublish *feed; // @synthesize feed;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

