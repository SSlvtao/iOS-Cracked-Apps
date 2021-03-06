//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, NSURL, UIImageView, UILabel;

@interface FCFeedItemTitleView : UIView
{
    UILabel *_textLabel;
    UIImageView *_tagImage;
    NSString *_text;
    NSURL *_tagUrl;
}

+ (id)attributeForText;
+ (double)heightWithText:(id)arg1 withTag:(id)arg2 needFullText:(_Bool)arg3 width:(double)arg4;
@property(readonly, nonatomic) NSURL *tagUrl; // @synthesize tagUrl=_tagUrl;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)setText:(id)arg1 withTag:(id)arg2 needFullText:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

