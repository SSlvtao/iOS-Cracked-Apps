//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QLImageLoadDelegate.h"

@class NSString, QLSImageView;

@interface QLAspectAutoFitCornerView : UIView <QLImageLoadDelegate>
{
    QLSImageView *_imageView;
    NSString *_url;
    long long _position;
}

- (void).cxx_destruct;
- (void)didFinishDownloadImage:(id)arg1 withIsGif:(_Bool)arg2;
- (void)didFailLoadWithError:(id)arg1 forURL:(id)arg2;
- (void)didLoadImage:(id)arg1 forURL:(id)arg2;
- (void)didStartLoadImageForURL:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)resizedImageSize;
- (void)dealloc;
- (void)addCornerImageView:(id)arg1;
- (struct CGSize)imageResize:(id)arg1 andResizeTo:(struct CGSize)arg2;
- (void)setImage:(id)arg1;
- (void)loadImage;
- (void)setImageUrl:(id)arg1 andCornerPosition:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

