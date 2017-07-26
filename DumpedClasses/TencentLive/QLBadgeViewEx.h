//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIColor, UIImage;

@interface QLBadgeViewEx : UIView
{
    UIImage *_image;
    NSString *_mReadCountText;
    unsigned long long _unreadCount;
    _Bool _highlighted;
    _Bool _useNumber;
    unsigned long long _textSize;
    UIColor *_fontColor;
}

@property(retain, nonatomic) UIColor *fontColor; // @synthesize fontColor=_fontColor;
@property(nonatomic) _Bool useNumber; // @synthesize useNumber=_useNumber;
@property(nonatomic) unsigned long long textSize; // @synthesize textSize=_textSize;
@property(nonatomic) unsigned long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (_Bool)isHighlighted;
- (void)setHighlighted:(_Bool)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)getFitSize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

