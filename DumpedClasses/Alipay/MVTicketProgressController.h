//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface MVTicketProgressController : NSObject
{
    NSString *_imageHash;
    UIImage *_defaultBlurBackgroundImage;
    UIImage *_savedblurBackgroundImage;
}

+ (id)blurryImage:(id)arg1 withBlurLevel:(double)arg2;
+ (id)sharedController;
- (void).cxx_destruct;
- (void)updateOriginalImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) UIImage *blurBackgroundImage;
- (id)createBlurBackgroundView;
- (id)init;

@end

