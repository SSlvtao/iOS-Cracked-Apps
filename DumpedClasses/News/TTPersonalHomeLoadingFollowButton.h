//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedButton.h"

@class NSString, SSThemedImageView;

@interface TTPersonalHomeLoadingFollowButton : SSThemedButton
{
    _Bool _loading;
    _Bool _isFollow;
    _Bool _isBeFollow;
    SSThemedImageView *_loadingView;
    NSString *_currentShowTitle;
}

@property(copy, nonatomic) NSString *currentShowTitle; // @synthesize currentShowTitle=_currentShowTitle;
@property(nonatomic) __weak SSThemedImageView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) _Bool isBeFollow; // @synthesize isBeFollow=_isBeFollow;
@property(nonatomic) _Bool isFollow; // @synthesize isFollow=_isFollow;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
- (void).cxx_destruct;
- (void)setupSubview;
- (void)refreshTitle;
- (void)layoutSubviews;
- (void)stopLoading;
- (void)startLoading;
- (id)initWithFrame:(struct CGRect)arg1;

@end

