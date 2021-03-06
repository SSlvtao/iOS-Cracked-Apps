//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSArray, NSString, UIImageView, UILabel, UIView;

@interface TBCouponButtonListItem : UIControl
{
    _Bool _isEndFlag;
    long long _index;
    CDUnknownBlockType _itemClickBlock;
    NSArray *_dataArray;
    NSString *_url;
    NSString *_text;
    NSString *_selectorType;
    UILabel *_textLabel;
    UIImageView *_iconImage;
    UIView *_separateLine;
}

@property(retain, nonatomic) UIView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) UIImageView *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(copy, nonatomic) NSString *selectorType; // @synthesize selectorType=_selectorType;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) _Bool isEndFlag; // @synthesize isEndFlag=_isEndFlag;
@property(copy, nonatomic) CDUnknownBlockType itemClickBlock; // @synthesize itemClickBlock=_itemClickBlock;
@property(nonatomic) long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (void)displayDateWithTitle:(id)arg1 url:(id)arg2;
- (void)displayDateWithIndex:(long long)arg1;
- (void)changeSelect;
- (void)changeStyle;
- (void)setSelected:(_Bool)arg1;
- (void)setUpViews;
- (void)setDict:(id)arg1;
- (struct CGSize)getSizeWithText:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

