//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface HomePagePortalInfoModel : CTBusinessBean
{
    int _businessID;
    int _urlType;
    NSString *_title;
    NSString *_url;
    NSString *_imageUrl;
}

@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) int urlType; // @synthesize urlType=_urlType;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int businessID; // @synthesize businessID=_businessID;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

