//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMAdvertisement.h"

@class NSString;

@interface NMToplistAdvertisement : NMAdvertisement
{
    _Bool _isDefault;
    NSString *_adLogoUrl;
    NSString *_adNameImageUrl;
    NSString *_adBgImageUrl;
}

@property(nonatomic) _Bool isDefault; // @synthesize isDefault=_isDefault;
@property(copy, nonatomic) NSString *adBgImageUrl; // @synthesize adBgImageUrl=_adBgImageUrl;
@property(copy, nonatomic) NSString *adNameImageUrl; // @synthesize adNameImageUrl=_adNameImageUrl;
@property(copy, nonatomic) NSString *adLogoUrl; // @synthesize adLogoUrl=_adLogoUrl;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

