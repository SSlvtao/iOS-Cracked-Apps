//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBTradeRecmdItemTagModel.h"

@class NSDictionary, NSString;

@interface TBTradeRecmdItemTagModel : NSObject <TBTradeRecmdItemTagModel>
{
    NSString *_tag;
    NSDictionary *_data;
}

@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (unsigned long long)iconType;
- (id)textColor;
- (id)bgColor;
- (id)text;
- (double)width;
- (double)height;
- (id)picUrl;
- (id)initWithTag:(id)arg1 data:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

