//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BWAppHandler : NSObject
{
    CDUnknownBlockType _responseBlock;
}

@property(copy, nonatomic) CDUnknownBlockType responseBlock; // @synthesize responseBlock=_responseBlock;
- (void).cxx_destruct;
- (void)responseToClient:(id)arg1 error:(id)arg2;
- (SEL)handlerSelectorForAction:(id)arg1;
@property(readonly, nonatomic) NSString *identifier;

@end

