//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGThemeButton.h"

@class KGThemeLabel, NSString, UIImageView;

@interface KMMusicRecommendLitterBannerBtn : KGThemeButton
{
    NSString *_titleString;
    NSString *_iconNameString;
    KGThemeButton *_upBtn;
    KGThemeLabel *_downLabel;
    UIImageView *_imageHoldImageView;
}

@property(retain, nonatomic) UIImageView *imageHoldImageView; // @synthesize imageHoldImageView=_imageHoldImageView;
@property(retain, nonatomic) KGThemeLabel *downLabel; // @synthesize downLabel=_downLabel;
@property(retain, nonatomic) KGThemeButton *upBtn; // @synthesize upBtn=_upBtn;
@property(retain, nonatomic) NSString *iconNameString; // @synthesize iconNameString=_iconNameString;
@property(retain, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)cancelHighlighted;
- (void)refresh:(id)arg1 andIconNameUrlString:(id)arg2;
- (void)refresh:(id)arg1 andIconName:(id)arg2;
- (void)createRecommendLitterBannerBtn;
- (id)initWithData:(id)arg1 andIconName:(id)arg2;

@end

