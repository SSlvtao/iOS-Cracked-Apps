//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableAttributedString, NSString, UIImage;

@interface QLImageMixedItem : NSObject
{
    double _maxLabelWidth;
    double _maxLabelHeight;
    NSMutableAttributedString *_attrText;
    UIImage *_defaultImage;
    NSString *_imageUrl;
    unsigned long long _insertImageIndex;
    double _imageWidth;
    double _imageHeight;
}

@property(nonatomic) double imageHeight; // @synthesize imageHeight=_imageHeight;
@property(nonatomic) double imageWidth; // @synthesize imageWidth=_imageWidth;
@property(nonatomic) unsigned long long insertImageIndex; // @synthesize insertImageIndex=_insertImageIndex;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(copy, nonatomic) NSMutableAttributedString *attrText; // @synthesize attrText=_attrText;
@property(nonatomic) double maxLabelHeight; // @synthesize maxLabelHeight=_maxLabelHeight;
@property(nonatomic) double maxLabelWidth; // @synthesize maxLabelWidth=_maxLabelWidth;
- (void).cxx_destruct;

@end

