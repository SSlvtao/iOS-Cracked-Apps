//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBTakeoutCartViewTipsModel : TBJSONModel
{
    long long _type;
    NSString *_showText;
    NSString *_url;
    NSString *_categoryId;
    long long _amount;
    long long _secondType;
    NSString *_secondShowText;
    NSString *_secondUrl;
}

@property(copy, nonatomic) NSString *secondUrl; // @synthesize secondUrl=_secondUrl;
@property(copy, nonatomic) NSString *secondShowText; // @synthesize secondShowText=_secondShowText;
@property(nonatomic) long long secondType; // @synthesize secondType=_secondType;
@property(nonatomic) long long amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *showText; // @synthesize showText=_showText;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

