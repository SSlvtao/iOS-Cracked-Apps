//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface QLQQLoginShowPopView : UIView
{
    id <UILoginViewButtonDelegate> delegate;
}

@property(nonatomic) __weak id <UILoginViewButtonDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)ShowLoginHUD;
- (void)setTipText:(id)arg1 btnText:(id)arg2;
- (_Bool)isShowPopView;
- (void)ClickLogin:(id)arg1;
- (_Bool)isLoginSign;
- (void)removeLoginSign;
- (void)setLoginSign;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

