//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class DCRichLabel, NSDictionary;

@interface DCPageTabButton : UIButton
{
    DCRichLabel *_textLable;
    UIButton *_operationButton;
    NSDictionary *_operationDict;
}

@property(retain, nonatomic) NSDictionary *operationDict; // @synthesize operationDict=_operationDict;
@property(retain, nonatomic) UIButton *operationButton; // @synthesize operationButton=_operationButton;
@property(retain, nonatomic) DCRichLabel *textLable; // @synthesize textLable=_textLable;
- (void).cxx_destruct;

@end
