//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@protocol RCTImageCache <NSObject>
- (void)addImageToCache:(UIImage *)arg1 URL:(NSString *)arg2 size:(struct CGSize)arg3 scale:(double)arg4 resizeMode:(long long)arg5 responseDate:(NSString *)arg6;
- (UIImage *)imageForUrl:(NSString *)arg1 size:(struct CGSize)arg2 scale:(double)arg3 resizeMode:(long long)arg4 responseDate:(NSString *)arg5;
@end
