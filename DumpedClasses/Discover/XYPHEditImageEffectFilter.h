//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYRKModel.h"

@class NSString;

@interface XYPHEditImageEffectFilter : XYRKModel
{
    float _brightness;
    float _contrast;
    float _warmth;
    float _saturation;
    NSString *_filterKey;
}

@property(nonatomic) float saturation; // @synthesize saturation=_saturation;
@property(nonatomic) float warmth; // @synthesize warmth=_warmth;
@property(nonatomic) float contrast; // @synthesize contrast=_contrast;
@property(nonatomic) float brightness; // @synthesize brightness=_brightness;
@property(retain, nonatomic) NSString *filterKey; // @synthesize filterKey=_filterKey;
- (void).cxx_destruct;
- (float)valueForEffectKey:(id)arg1;
- (void)setEffectValue:(float)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) float gpuSaturation;
@property(readonly, nonatomic) float gpuWarmth;
@property(readonly, nonatomic) float gpuContrast;
@property(readonly, nonatomic) float gpuBrightness;
- (id)init;

@end

