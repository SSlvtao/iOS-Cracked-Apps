//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MVTheme.h"

@class UIColor, UIImage;

@interface MVTabTheme : MVTheme
{
    UIColor *_normalTitleColor;
    UIColor *_highLightTitleColor;
    UIImage *_filmIcon;
    UIImage *_filmHighLightIcon;
    UIImage *_cinemaIcon;
    UIImage *_cinemaHighLightIcon;
    UIImage *_damaiIcon;
    UIImage *_damaiHighLightIcon;
    UIImage *_discoverIcon;
    UIImage *_discoverHighLightIcon;
    UIImage *_mineIcon;
    UIImage *_mineHighLightIcon;
}

+ (id)themeWithResponse:(id)arg1;
@property(retain, nonatomic) UIImage *mineHighLightIcon; // @synthesize mineHighLightIcon=_mineHighLightIcon;
@property(retain, nonatomic) UIImage *mineIcon; // @synthesize mineIcon=_mineIcon;
@property(retain, nonatomic) UIImage *discoverHighLightIcon; // @synthesize discoverHighLightIcon=_discoverHighLightIcon;
@property(retain, nonatomic) UIImage *discoverIcon; // @synthesize discoverIcon=_discoverIcon;
@property(retain, nonatomic) UIImage *damaiHighLightIcon; // @synthesize damaiHighLightIcon=_damaiHighLightIcon;
@property(retain, nonatomic) UIImage *damaiIcon; // @synthesize damaiIcon=_damaiIcon;
@property(retain, nonatomic) UIImage *cinemaHighLightIcon; // @synthesize cinemaHighLightIcon=_cinemaHighLightIcon;
@property(retain, nonatomic) UIImage *cinemaIcon; // @synthesize cinemaIcon=_cinemaIcon;
@property(retain, nonatomic) UIImage *filmHighLightIcon; // @synthesize filmHighLightIcon=_filmHighLightIcon;
@property(retain, nonatomic) UIImage *filmIcon; // @synthesize filmIcon=_filmIcon;
@property(retain, nonatomic) UIColor *highLightTitleColor; // @synthesize highLightTitleColor=_highLightTitleColor;
@property(retain, nonatomic) UIColor *normalTitleColor; // @synthesize normalTitleColor=_normalTitleColor;
- (void).cxx_destruct;
- (_Bool)validateThemeDirectory:(id)arg1;
- (void)downloadRemoteResourceAndValid:(CDUnknownBlockType)arg1;
- (id)colorWithString:(id)arg1;
- (id)initWithResponse:(id)arg1;
- (id)initWithDefaultValue;
- (_Bool)isEqualToTheme:(id)arg1;

@end

