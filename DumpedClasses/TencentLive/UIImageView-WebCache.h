//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@interface UIImageView (WebCache)
- (void)removeActivityIndicator;
- (void)addActivityIndicator;
- (int)getIndicatorStyle;
- (void)setIndicatorStyle:(long long)arg1;
- (_Bool)showActivityIndicatorView;
- (void)setShowActivityIndicatorView:(_Bool)arg1;
- (void)setActivityIndicator:(id)arg1;
- (id)activityIndicator;
- (void)sd_cancelCurrentAnimationImagesLoad;
- (void)sd_cancelCurrentImageLoad;
- (void)sd_setAnimationImagesWithURLs:(id)arg1;
- (id)sd_imageURL;
- (void)sd_setImageWithPreviousCachedImageWithURL:(id)arg1 andPlaceholderImage:(id)arg2 options:(unsigned long long)arg3 progress:(CDUnknownBlockType)arg4 completed:(CDUnknownBlockType)arg5;
- (void)sd_setImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3 progress:(CDUnknownBlockType)arg4 completed:(CDUnknownBlockType)arg5;
- (void)sd_setImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3 completed:(CDUnknownBlockType)arg4;
- (void)sd_setImageWithURL:(id)arg1 placeholderImage:(id)arg2 completed:(CDUnknownBlockType)arg3;
- (void)sd_setImageWithURL:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (void)sd_setImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3;
- (void)sd_setImageWithURL:(id)arg1 placeholderImage:(id)arg2;
- (void)sd_setImageWithURL:(id)arg1;
@end

