//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMSectionComponent.h"

@class NSString;

@interface FMSocialUserSectionComponent : FMSectionComponent
{
    _Bool _hasArrow;
    _Bool _hasSeparator;
    NSString *_nextUrl;
    NSString *_title;
}

@property(nonatomic) _Bool hasSeparator; // @synthesize hasSeparator=_hasSeparator;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *nextUrl; // @synthesize nextUrl=_nextUrl;
@property(nonatomic) _Bool hasArrow; // @synthesize hasArrow=_hasArrow;
- (void).cxx_destruct;
- (Class)viewClass;

@end

