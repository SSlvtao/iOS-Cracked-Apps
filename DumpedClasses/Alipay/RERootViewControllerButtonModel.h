//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface RERootViewControllerButtonModel : NSObject
{
    _Bool _isHot;
    long long _type;
    NSString *_title;
    NSString *_subTitle;
    NSString *_iconUrl;
    UIImage *_defaultIcon;
    NSString *_schema;
}

+ (id)constructButtonModelList:(id)arg1;
@property(retain, nonatomic) NSString *schema; // @synthesize schema=_schema;
@property(nonatomic) _Bool isHot; // @synthesize isHot=_isHot;
@property(retain, nonatomic) UIImage *defaultIcon; // @synthesize defaultIcon=_defaultIcon;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithParams:(id)arg1;

@end

