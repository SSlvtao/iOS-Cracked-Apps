//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSData, NSURLResponse;

@interface NVMURLCacheData : NSObject <NSCoding>
{
    NSData *_data;
    NSURLResponse *_response;
    double _timeToLive;
    double _maxAge;
    double _timeStamp;
}

@property(nonatomic) double timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) double maxAge; // @synthesize maxAge=_maxAge;
@property(nonatomic) double timeToLive; // @synthesize timeToLive=_timeToLive;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
