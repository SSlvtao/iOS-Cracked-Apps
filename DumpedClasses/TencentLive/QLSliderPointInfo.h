//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage;

@interface QLSliderPointInfo : NSObject
{
    _Bool _isShow;
    UIImage *_pointImage;
    unsigned long long _pointStyle;
    long long _sliderPointId;
}

@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(nonatomic) long long sliderPointId; // @synthesize sliderPointId=_sliderPointId;
@property(nonatomic) unsigned long long pointStyle; // @synthesize pointStyle=_pointStyle;
@property(retain, nonatomic) UIImage *pointImage; // @synthesize pointImage=_pointImage;
- (void).cxx_destruct;
- (id)initWithStyle:(unsigned long long)arg1 pointImage:(id)arg2;

@end

