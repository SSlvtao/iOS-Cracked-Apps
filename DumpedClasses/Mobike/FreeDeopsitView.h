//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UIButton, UIImageView, UILabel;

@interface FreeDeopsitView : UIView <UIGestureRecognizerDelegate>
{
    CDUnknownBlockType _freeDeposit;
    UIImageView *_iconImage;
    UIView *_topBackGround;
    UIView *_backView;
    UILabel *_content;
    UIButton *_cancel;
    UIButton *_sure;
}

@property(retain) UIButton *sure; // @synthesize sure=_sure;
@property(retain) UIButton *cancel; // @synthesize cancel=_cancel;
@property(retain) UILabel *content; // @synthesize content=_content;
@property(retain) UIView *backView; // @synthesize backView=_backView;
@property(retain) UIView *topBackGround; // @synthesize topBackGround=_topBackGround;
@property(retain) UIImageView *iconImage; // @synthesize iconImage=_iconImage;
@property(copy, nonatomic) CDUnknownBlockType freeDeposit; // @synthesize freeDeposit=_freeDeposit;
- (void).cxx_destruct;
- (void)dealloc;
- (void)dismiss;
- (void)show;
- (void)cancelButtonClicked:(id)arg1;
- (void)sureButtonClicked:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

