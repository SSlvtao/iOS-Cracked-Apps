//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TADCacheStrategy;

@interface TADFileManager : NSObject
{
    TADCacheStrategy *_cacheStrategy;
}

+ (id)shareInstance;
@property(retain, nonatomic) TADCacheStrategy *cacheStrategy; // @synthesize cacheStrategy=_cacheStrategy;
- (void).cxx_destruct;
- (void)clearCacheFileWithURL:(id)arg1;
- (id)pathOfFileWithURL:(id)arg1;
- (void)cacheFileWithURL:(id)arg1 md5:(id)arg2 expired:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)hasCacheFileWithURL:(id)arg1;
- (id)init;

@end

