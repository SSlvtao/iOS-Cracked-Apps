//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface TMMarketFrontPageModel : NSObject
{
    NSArray *_cards;
    NSMutableArray *_layouts;
}

@property(retain, nonatomic) NSMutableArray *layouts; // @synthesize layouts=_layouts;
@property(retain, nonatomic) NSArray *cards; // @synthesize cards=_cards;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1;

@end

