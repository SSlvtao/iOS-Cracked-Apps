//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface IpInfo : NSObject <NSCoding, NSCopying>
{
    int apn;
    int port;
    int cookie;
    NSString *ip;
    NSString *remark;
}

+ (int)covertToApn:(id)arg1;
@property(nonatomic) int cookie; // @synthesize cookie;
@property(copy, nonatomic) NSString *remark; // @synthesize remark;
@property(nonatomic) int port; // @synthesize port;
@property(copy, nonatomic) NSString *ip; // @synthesize ip;
@property(nonatomic) int apn; // @synthesize apn;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithInfo:(id)arg1 port:(int)arg2 apn:(int)arg3 remark:(id)arg4 cookie:(int)arg5;

@end

