//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, UIImage;

@interface TBPhotoObject : NSObject
{
    _Bool _isNewPhoto;
    UIImage *_image;
    NSString *_localPath;
    UIImage *_thumbnail;
    NSString *_thumbPath;
    NSString *_assetUrl;
    NSArray *_watermarkArray;
}

@property(retain, nonatomic) NSArray *watermarkArray; // @synthesize watermarkArray=_watermarkArray;
@property(nonatomic) _Bool isNewPhoto; // @synthesize isNewPhoto=_isNewPhoto;
@property(retain, nonatomic) NSString *assetUrl; // @synthesize assetUrl=_assetUrl;
@property(retain, nonatomic) NSString *thumbPath; // @synthesize thumbPath=_thumbPath;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(retain, nonatomic) NSString *localPath; // @synthesize localPath=_localPath;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)initWithObj:(id)arg1;

@end

