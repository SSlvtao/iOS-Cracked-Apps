//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString<Optional>;

@interface SDDJMemberPrivilegeModel : JSONModel
{
    NSString<Optional> *_icon;
    NSString<Optional> *_smallIcon;
    long long _able;
    NSString<Optional> *_name;
    NSString<Optional> *_desc;
    NSString<Optional> *_url;
}

@property(retain, nonatomic) NSString<Optional> *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString<Optional> *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString<Optional> *name; // @synthesize name=_name;
@property(nonatomic) long long able; // @synthesize able=_able;
@property(retain, nonatomic) NSString<Optional> *smallIcon; // @synthesize smallIcon=_smallIcon;
@property(retain, nonatomic) NSString<Optional> *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;

@end

