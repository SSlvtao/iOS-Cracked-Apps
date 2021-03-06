//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JVSDataLayer.h"

@class JVSTensor, NSString, NSUUID;

@interface JVSInputLayer : NSObject <JVSDataLayer>
{
    JVSTensor *_inputTensor;
    JVSTensor *_input4Tensor;
    NSString *_name;
    NSUUID *_uuid;
}

@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) JVSTensor *inputTensor; // @synthesize inputTensor=_inputTensor;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (float *)nextBatch:(int)arg1;
@property(readonly, nonatomic) struct jvsdimensions dimensions;
@property(readonly, nonatomic) int outputSize;
- (id)initWithDimensions:(struct jvsdimensions)arg1 name:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

