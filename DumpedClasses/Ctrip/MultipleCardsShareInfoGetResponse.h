//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface MultipleCardsShareInfoGetResponse : CTBusinessBean
{
    int result;
    NSString *title;
    NSString *shareH5Url;
}

@property(copy, nonatomic) NSString *shareH5Url; // @synthesize shareH5Url;
@property(copy, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) int result; // @synthesize result;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

