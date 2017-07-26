//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImageView, UILabel;

@interface KKTipVolumeView : UIView
{
    double _volume;
    double _avgvolume;
    NSString *_imagePreName;
    double _durationDismiss;
    UIImageView *_processImageView;
    UIImageView *_volumeView;
    UILabel *_volumeLable;
    UILabel *_silenceLable;
    UIView *_maskView;
}

@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UILabel *silenceLable; // @synthesize silenceLable=_silenceLable;
@property(retain, nonatomic) UILabel *volumeLable; // @synthesize volumeLable=_volumeLable;
@property(retain, nonatomic) UIImageView *volumeView; // @synthesize volumeView=_volumeView;
@property(retain, nonatomic) UIImageView *processImageView; // @synthesize processImageView=_processImageView;
- (void).cxx_destruct;
- (void)hideVolumeHUD:(double)arg1;
- (void)hideVolumeHUD;
- (void)hideVolumeHUDAfterDelay:(double)arg1 Duration:(double)arg2;
- (void)willShowVolumeHUD;
- (void)setAlpha:(double)arg1;
@property(nonatomic) double volume;
- (void)__updateProcessImageByvolume:(double)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

