//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface QLStreamAdSeperator : UIView
{
    UILabel *_textLabel;
    UIView *_seperatorLine;
    struct CGSize _textSize;
}

@property(retain, nonatomic) UIView *seperatorLine; // @synthesize seperatorLine=_seperatorLine;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) struct CGSize textSize; // @synthesize textSize=_textSize;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)calculateTextWidth:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 text:(id)arg2;

@end

