//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QLCoinConsumeItem : NSObject
{
    NSString *_strActivityId;
    long long _count;
    NSString *_desc;
    long long _price;
    NSString *_imageUrl;
}

+ (id)coinConsumeItem:(id)arg1;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic) long long price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSString *strActivityId; // @synthesize strActivityId=_strActivityId;
- (void).cxx_destruct;

@end

