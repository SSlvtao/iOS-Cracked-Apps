//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseTabelViewCell.h"

@class QLJCEONADiscoveryEntry, UIView;

@interface QLHomeSpecialEntryCell : QLBaseTabelViewCell
{
    UIView *_bgView;
    QLJCEONADiscoveryEntry *_entry;
}

+ (double)getHeightWithPosterObj:(id)arg1 uInfo:(id)arg2;
+ (long long)maxCountOneLine;
@property(retain, nonatomic) QLJCEONADiscoveryEntry *entry; // @synthesize entry=_entry;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)entryClicked:(id)arg1;
- (void)setEntryItem:(id)arg1;
- (void)setObject:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;

@end

