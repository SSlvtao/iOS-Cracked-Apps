//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "QLJCEFormatModelItem.h"

@class NSString;

@interface QLMomentItemBase : NSObject <NSCoding, QLJCEFormatModelItem>
{
    _Bool _isFake;
    _Bool _isFromServer;
    NSString *_clientKey;
    long long _cacheId;
    NSString *_uniqueId;
}

+ (id)genClientKey;
@property(nonatomic) _Bool isFromServer; // @synthesize isFromServer=_isFromServer;
@property(copy, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(nonatomic) long long cacheId; // @synthesize cacheId=_cacheId;
@property(nonatomic) _Bool isFake; // @synthesize isFake=_isFake;
@property(copy, nonatomic) NSString *clientKey; // @synthesize clientKey=_clientKey;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initFakeBase;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

