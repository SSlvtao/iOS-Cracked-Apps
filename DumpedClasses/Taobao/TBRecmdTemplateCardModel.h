//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBRecmdCardModel.h"

@class TBDTemplateItem, TBRecmdTemplateInfo;

@interface TBRecmdTemplateCardModel : TBRecmdCardModel
{
    TBRecmdTemplateInfo *_templateInfo;
    TBDTemplateItem *_templateItem;
}

+ (id)jsonToModelKeyMapDictionary;
+ (id)factoryKey;
@property(retain, nonatomic) TBDTemplateItem *templateItem; // @synthesize templateItem=_templateItem;
@property(retain, nonatomic) TBRecmdTemplateInfo *templateInfo; // @synthesize templateInfo=_templateInfo;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1;

@end

