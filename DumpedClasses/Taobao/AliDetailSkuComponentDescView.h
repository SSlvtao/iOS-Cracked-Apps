//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString, UILabel, UIView;

@interface AliDetailSkuComponentDescView : UIButton
{
    UILabel *_titleInfoLabel;
    UILabel *_preDescLabel;
    UILabel *_descLabel;
    UILabel *_arrowLabel;
    NSString *_action;
    NSString *_utName;
    UIView *_endLine;
}

@property(retain, nonatomic) UIView *endLine; // @synthesize endLine=_endLine;
@property(copy, nonatomic) NSString *utName; // @synthesize utName=_utName;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) UILabel *arrowLabel; // @synthesize arrowLabel=_arrowLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *preDescLabel; // @synthesize preDescLabel=_preDescLabel;
@property(retain, nonatomic) UILabel *titleInfoLabel; // @synthesize titleInfoLabel=_titleInfoLabel;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

