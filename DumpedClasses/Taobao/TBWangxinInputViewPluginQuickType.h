//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YWInputViewPluginProtocol.h"

@class NSString, UIButton, UIImage, UIView, UIView<IYWMessageInputView>, UIViewController;

@interface TBWangxinInputViewPluginQuickType : NSObject <YWInputViewPluginProtocol>
{
    UIViewController *_responseVC;
    UIButton *_customPluginButton;
    NSString *_iconFontName;
    NSString *_pageName;
}

@property(copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(copy, nonatomic) NSString *iconFontName; // @synthesize iconFontName=_iconFontName;
@property(retain, nonatomic) UIButton *customPluginButton; // @synthesize customPluginButton=_customPluginButton;
@property(nonatomic) __weak UIViewController *responseVC; // @synthesize responseVC=_responseVC;
- (void).cxx_destruct;
- (void)pluginDidClicked;
@property(copy, nonatomic) NSString *pluginName;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <YWInputViewPluginDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool disabled;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak UIView<IYWMessageInputView> *inputViewRef;
@property(readonly, nonatomic) UIView *pluginContentView;
@property(retain, nonatomic) UIImage *pluginIconImage;
@property(retain, nonatomic) NSString *pluginIconImageURL;
@property(nonatomic) unsigned long long pluginPosition;
@property(readonly, nonatomic) unsigned long long pluginType;
@property(readonly) Class superclass;

@end

