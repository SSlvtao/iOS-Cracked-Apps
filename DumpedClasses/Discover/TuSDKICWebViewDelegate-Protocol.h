//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWebViewDelegate.h"

@class NSError, NSURLRequest, TuSDKICWebView;

@protocol TuSDKICWebViewDelegate <UIWebViewDelegate>

@optional
- (void)webView:(TuSDKICWebView *)arg1 updateProgress:(double)arg2;
- (void)webView:(TuSDKICWebView *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)webViewDidFinishLoad:(TuSDKICWebView *)arg1;
- (void)webViewDidStartLoad:(TuSDKICWebView *)arg1;
- (_Bool)webView:(TuSDKICWebView *)arg1 shouldStartLoadWithRequest:(NSURLRequest *)arg2 navigationType:(long long)arg3;
@end

