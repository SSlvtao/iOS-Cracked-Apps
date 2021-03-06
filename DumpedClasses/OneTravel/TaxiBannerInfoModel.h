//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TaxiBaseModel.h"

@class NSNumber<Ignore>, NSString<Optional>;

@interface TaxiBannerInfoModel : TaxiBaseModel
{
    NSString<Optional> *_barId;
    NSString<Optional> *_targetUrl;
    NSString<Optional> *_showType;
    NSString<Optional> *_content;
    NSNumber<Ignore> *_adOperationType;
    NSString<Optional> *_identifier;
}

+ (id)keyMapper;
@property(copy, nonatomic) NSString<Optional> *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSNumber<Ignore> *adOperationType; // @synthesize adOperationType=_adOperationType;
@property(copy, nonatomic) NSString<Optional> *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString<Optional> *showType; // @synthesize showType=_showType;
@property(copy, nonatomic) NSString<Optional> *targetUrl; // @synthesize targetUrl=_targetUrl;
@property(copy, nonatomic) NSString<Optional> *barId; // @synthesize barId=_barId;
- (void).cxx_destruct;

@end

