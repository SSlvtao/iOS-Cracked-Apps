//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

@class TTGradientView;

@interface TTFullScreenLoadingView : SSThemedView
{
    TTGradientView *_loadingAnimationView;
}

@property(nonatomic) __weak TTGradientView *loadingAnimationView; // @synthesize loadingAnimationView=_loadingAnimationView;
- (void).cxx_destruct;
- (void)startLoadingAnimation;

@end
