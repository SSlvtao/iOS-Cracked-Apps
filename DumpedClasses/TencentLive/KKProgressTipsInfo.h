//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface KKProgressTipsInfo : NSObject
{
    NSString *_strTime;
    NSString *_strDes;
    UIImage *_image;
    unsigned long long _type;
    double _currentTime;
}

@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *strDes; // @synthesize strDes=_strDes;
@property(copy, nonatomic) NSString *strTime; // @synthesize strTime=_strTime;
- (void).cxx_destruct;

@end

