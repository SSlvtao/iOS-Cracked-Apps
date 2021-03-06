//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSMutableDictionary;

@interface QLWebImageButton : UIButton
{
    NSMutableDictionary *_imageURLStorage;
}

@property(retain, nonatomic) NSMutableDictionary *imageURLStorage; // @synthesize imageURLStorage=_imageURLStorage;
- (void).cxx_destruct;
- (void)didFinishDownloadImage:(id)arg1 withIsGif:(_Bool)arg2;
- (void)didFailLoadWithError:(id)arg1 forURL:(id)arg2;
- (void)didLoadImage:(id)arg1 forURL:(id)arg2 imageView:(id)arg3;
- (void)didLoadImage:(id)arg1 forURL:(id)arg2;
- (void)didStartLoadImageForURL:(id)arg1;
- (void)setImageWithURL:(id)arg1 forState:(unsigned long long)arg2;

@end

