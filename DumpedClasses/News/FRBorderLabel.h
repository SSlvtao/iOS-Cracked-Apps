//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedLabel.h"

@interface FRBorderLabel : SSThemedLabel
{
}

+ (id)roleLabelWith:(long long)arg1 title:(id)arg2;
+ (id)borderLabelWith:(double)arg1 titleColors:(id)arg2 borderColors:(id)arg3 title:(id)arg4 cornerRadius:(double)arg5;
+ (id)borderLabelWith:(double)arg1 titleColorKey:(id)arg2 borderColorKey:(id)arg3 title:(id)arg4 cornerRadius:(double)arg5;
+ (id)defaultBorderLabelWithTitle:(id)arg1 colorKey:(id)arg2;
- (void)refreshWithRoleDisplayType:(long long)arg1 title:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;

@end
