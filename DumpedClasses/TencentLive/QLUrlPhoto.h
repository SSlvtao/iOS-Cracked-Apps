//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBasePhoto.h"

#import "QLGifDecodeImageViewProtocol.h"
#import "QLGifDecodeProtocol.h"
#import "QLImageLoadDelegate.h"

@class NSArray, NSString;

@interface QLUrlPhoto : QQBasePhoto <QLImageLoadDelegate, QLGifDecodeImageViewProtocol, QLGifDecodeProtocol>
{
    NSString *_photoUrl;
    NSString *_thumbUrl;
    _Bool _selected;
    NSArray *_animationImages;
    double _animationDuration;
}

@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(retain, nonatomic) NSArray *animationImages; // @synthesize animationImages=_animationImages;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSString *photoUrl; // @synthesize photoUrl=_photoUrl;
- (void).cxx_destruct;
- (void)doFirstFrameImageFinished:(id)arg1;
- (void)doGifFinishDecoded:(id)arg1 animationDuration:(double)arg2;
- (id)imageUrlForGifDecode;
- (id)thumbFilePath;
- (id)imageFilePath;
- (void)loadImageFinished:(id)arg1 url:(id)arg2;
- (void)didFailLoadWithError:(id)arg1 forURL:(id)arg2;
- (void)didLoadImage:(id)arg1 forURL:(id)arg2;
- (void)didStartLoadImageForURL:(id)arg1;
- (void)sendThumbRequest;
- (void)sendRequest;
- (void)cancelDownloadPhoto;
- (void)downloadThumbPhoto;
- (void)downloadPhoto;
- (id)thumbPath;
- (id)photoPath;
- (id)getThumbImage;
- (void)asynLoadImage;
- (id)getImage;
- (void)setImage:(id)arg1;
- (void)dealloc;
- (void)releasePhotoRequest;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

