//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ImageCacheQuery.h"

@interface ImageCacheQueryDecorator : ImageCacheQuery
{
    ImageCacheQuery *_wrappedQuery;
}

+ (id)instanceWithQuery:(id)arg1;
@property(retain, nonatomic) ImageCacheQuery *wrappedQuery; // @synthesize wrappedQuery=_wrappedQuery;
- (void).cxx_destruct;

@end
