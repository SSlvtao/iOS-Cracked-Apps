//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface QNBOuterVideoIndexObj : NSObject <NSCoding>
{
    NSString *_lid;
    NSString *_cid;
    long long _playIndex;
}

+ (id)itemWithLid:(id)arg1 cid:(id)arg2 playIndex:(long long)arg3;
@property(nonatomic) long long playIndex; // @synthesize playIndex=_playIndex;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(copy, nonatomic) NSString *lid; // @synthesize lid=_lid;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

