//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FMApsAlert : NSObject
{
    _Bool _rich;
    NSString *_title;
    NSString *_subTitle;
    NSString *_body;
}

+ (id)alertWithObject:(id)arg1;
@property(nonatomic) _Bool rich; // @synthesize rich=_rich;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)message;
- (id)init;

@end

