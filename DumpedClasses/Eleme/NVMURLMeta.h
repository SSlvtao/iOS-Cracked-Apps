//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NVMURLMeta : NSObject
{
    _Bool _ignoreFormat;
    _Bool _useOrigin;
    NSString *_hash;
    unsigned long long _quality;
    struct CGSize _size;
}

@property(nonatomic) _Bool useOrigin; // @synthesize useOrigin=_useOrigin;
@property(nonatomic) _Bool ignoreFormat; // @synthesize ignoreFormat=_ignoreFormat;
@property(nonatomic) unsigned long long quality; // @synthesize quality=_quality;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *hash; // @synthesize hash=_hash;
- (void).cxx_destruct;
- (id)description;
- (id)initWithHash:(id)arg1;

@end

