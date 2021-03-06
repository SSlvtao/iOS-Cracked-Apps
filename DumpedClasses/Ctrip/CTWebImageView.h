//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTImageView.h"

#import "CTImageViewDelegate.h"

@class NSString;

@interface CTWebImageView : CTImageView <CTImageViewDelegate>
{
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completeBlock;
    NSString *placeHolderImgStr;
    NSString *loadFailedImgStr;
    id <CTWebImageViewDelegate> _webImageDelegate;
}

+ (void)downloadImageWithURL:(id)arg1 completed:(CDUnknownBlockType)arg2;
@property(nonatomic) __weak id <CTWebImageViewDelegate> webImageDelegate; // @synthesize webImageDelegate=_webImageDelegate;
- (void).cxx_destruct;
- (void)handleTapAction:(id)arg1;
- (id)getIcon:(id)arg1 style:(unsigned long long)arg2;
- (void)imageViewLoadImageFailed:(id)arg1 error:(id)arg2;
- (void)imageViewProgressed:(id)arg1 receivedBytes:(unsigned long long)arg2 totalBytes:(long long)arg3;
- (void)imageViewLoadImageSucceed:(id)arg1;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2 progress:(CDUnknownBlockType)arg3 completed:(CDUnknownBlockType)arg4;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2 completed:(CDUnknownBlockType)arg3;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2 loadFailedImg:(id)arg3;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2;
- (void)setImageWithURL:(id)arg1;
- (_Bool)dealView:(id)arg1;
- (id)getloadNothingImage;
- (id)getplaceHoldImage;
- (id)getloadFailedImage;
- (void)initOtherImage;
@property(nonatomic) _Bool hasAnimation;
- (void)awakeFromNib;
- (void)initCode;
- (id)initWithImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

