//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQPlugin.h"

@class NSString, WebModelController;

@interface QQWebViewPlugin : QQPlugin
{
    WebModelController *webView;
    NSString *callbackName;
}

+ (id)QQWebviewPluginWithID:(id)arg1 info:(id)arg2 webview:(id)arg3 callbackName:(id)arg4;
@property(copy, nonatomic) NSString *callbackName; // @synthesize callbackName;
@property(retain, nonatomic) WebModelController *webView; // @synthesize webView;
- (void)dealloc;

@end

