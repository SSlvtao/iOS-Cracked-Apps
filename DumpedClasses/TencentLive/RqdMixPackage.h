//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RqdLocalObjInitWithWupProtocol.h"
#import "RqdObjTransToJceBufferProtocol.h"

@class NSMutableDictionary, NSString;

@interface RqdMixPackage : NSObject <RqdObjTransToJceBufferProtocol, RqdLocalObjInitWithWupProtocol>
{
    NSMutableDictionary *mixMap;
}

@property(retain, nonatomic) NSMutableDictionary *mixMap; // @synthesize mixMap;
- (void)dealloc;
- (void)createWUPModle:(struct MixPkg *)arg1;
- (id)initWithMXWUPModel:(struct MixPkg *)arg1;
- (void)initLocalObjWithWupBuffer:(JceInputStream_f07640a9 *)arg1;
- (void)setDataToBuffer:(JceOutputStream_31132a5e *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

