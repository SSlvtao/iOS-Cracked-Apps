//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QLAppLiveFeedH5Info : NSObject
{
    NSString *_icon;
    NSString *_title;
    NSString *_desc;
    NSString *_url;
}

+ (id)h5InfoWithJceObj:(id)arg1;
+ (id)h5InfoWith:(id)arg1;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;

@end

