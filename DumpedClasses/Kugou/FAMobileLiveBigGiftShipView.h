//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAView.h"

@class UIImageView;

@interface FAMobileLiveBigGiftShipView : FAView
{
    id <FAMobileLiveBigGiftShipViewDelegate> _delegate;
    UIImageView *_shipImageView;
    UIImageView *_wavesImageView;
    long long _shipType;
}

+ (struct CGSize)getShipImageSizeWithType:(long long)arg1;
@property(nonatomic) long long shipType; // @synthesize shipType=_shipType;
@property(retain, nonatomic) UIImageView *wavesImageView; // @synthesize wavesImageView=_wavesImageView;
@property(retain, nonatomic) UIImageView *shipImageView; // @synthesize shipImageView=_shipImageView;
@property(nonatomic) __weak id <FAMobileLiveBigGiftShipViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)configBigGiftAnimationWithDuration:(double)arg1 postionValues:(id)arg2 postionKeyTimes:(id)arg3 zoomInOutValues:(id)arg4 zoomInOutTimes:(id)arg5 rotationValue:(id)arg6 rotationTimes:(id)arg7 wavesAppearKeyTime:(double)arg8;
- (void)doImageAnimation;
- (void)setupAnimationImages;
- (void)initViews;
- (id)initWithShipType:(long long)arg1;

@end

