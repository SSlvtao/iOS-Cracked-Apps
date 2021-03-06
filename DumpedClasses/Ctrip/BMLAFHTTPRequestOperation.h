//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BMLAFURLConnectionOperation.h"

@class BMLAFHTTPResponseSerializer<BMLAFURLResponseSerialization>, NSError, NSHTTPURLResponse, NSRecursiveLock;

@interface BMLAFHTTPRequestOperation : BMLAFURLConnectionOperation
{
    BMLAFHTTPResponseSerializer<BMLAFURLResponseSerialization> *_responseSerializer;
    id _responseObject;
    NSError *_responseSerializationError;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSError *responseSerializationError; // @synthesize responseSerializationError=_responseSerializationError;
@property(retain, nonatomic) id responseObject; // @synthesize responseObject=_responseObject;
@property(retain, nonatomic) BMLAFHTTPResponseSerializer<BMLAFURLResponseSerialization> *responseSerializer; // @synthesize responseSerializer=_responseSerializer;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)pause;
- (void)setCompletionBlockWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)error;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSRecursiveLock *lock; // @dynamic lock;
@property(retain, nonatomic) NSHTTPURLResponse *response; // @dynamic response;

@end

