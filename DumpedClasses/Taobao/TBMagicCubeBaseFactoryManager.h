//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface TBMagicCubeBaseFactoryManager : NSObject
{
    NSMutableArray *_registerRecord;
}

@property(retain, nonatomic) NSMutableArray *registerRecord; // @synthesize registerRecord=_registerRecord;
- (void).cxx_destruct;
- (Class)makeClass:(id)arg1 domain:(id)arg2;
- (id)factoryList;
- (id)make:(id)arg1 data:(id)arg2 domain:(id)arg3;
- (_Bool)registerFactory:(id)arg1 priority:(int)arg2 domain:(id)arg3;
- (void)dealloc;
- (id)init;

@end

