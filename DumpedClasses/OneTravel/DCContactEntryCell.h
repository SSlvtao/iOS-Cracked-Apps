//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "DCContactCell.h"

@class CALayer, DCNewerView, NSString, UILabel;

@interface DCContactEntryCell : UITableViewCell <DCContactCell>
{
    _Bool _lastRowInSection;
    UILabel *_moreLabel;
    DCNewerView *_newerView;
    CALayer *_topLineLayer;
    CALayer *_bottomLineLayer;
}

@property(nonatomic) _Bool lastRowInSection; // @synthesize lastRowInSection=_lastRowInSection;
@property(retain, nonatomic) CALayer *bottomLineLayer; // @synthesize bottomLineLayer=_bottomLineLayer;
@property(retain, nonatomic) CALayer *topLineLayer; // @synthesize topLineLayer=_topLineLayer;
@property(retain, nonatomic) DCNewerView *newerView; // @synthesize newerView=_newerView;
@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configWithModel:(id)arg1 indexPath:(id)arg2 numberOfRows:(long long)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

