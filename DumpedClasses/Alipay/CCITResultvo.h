//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface CCITResultvo : NSObject
{
    long long _resultCode;
    NSString *_CSR;
    NSString *_containerId;
    NSData *_signature;
}

@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(copy, nonatomic) NSString *containerId; // @synthesize containerId=_containerId;
@property(copy, nonatomic) NSString *CSR; // @synthesize CSR=_CSR;
@property(nonatomic) long long resultCode; // @synthesize resultCode=_resultCode;
- (void).cxx_destruct;

@end
