//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKBaseParameter.h"

@class NSString;

@interface VKQueryBindTelParameter : VKBaseParameter
{
    NSString *_token;
    NSString *_tel;
    NSString *_bindData;
}

@property(readonly, copy, nonatomic) NSString *bindData; // @synthesize bindData=_bindData;
@property(readonly, copy, nonatomic) NSString *tel; // @synthesize tel=_tel;
@property(readonly, copy, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (id)initWithPrepareCallParameter:(id)arg1;
- (id)toDictionary;

@end

