//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, UIImage;

@interface SCarTypeModel : NSObject
{
    NSString *_title;
    UIImage *_currentIcon;
    NSArray *_carTypeArr;
    long long _currentIndex;
}

@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSArray *carTypeArr; // @synthesize carTypeArr=_carTypeArr;
@property(retain, nonatomic) UIImage *currentIcon; // @synthesize currentIcon=_currentIcon;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

