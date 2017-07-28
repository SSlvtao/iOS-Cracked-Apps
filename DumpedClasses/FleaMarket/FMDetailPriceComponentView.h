//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FMComponentCellProtocol.h"

@class NSString, UIImageView, UILabel;

@interface FMDetailPriceComponentView : UIView <FMComponentCellProtocol>
{
    UILabel *_priceOrDraftLabel;
    UIImageView *_bgImageView;
}

+ (double)rowHeightForComponent:(id)arg1;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UILabel *priceOrDraftLabel; // @synthesize priceOrDraftLabel=_priceOrDraftLabel;
- (void).cxx_destruct;
- (void)bindComponent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
