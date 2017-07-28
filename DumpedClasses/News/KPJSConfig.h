//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIView, UIWebView;

@interface KPJSConfig : NSObject
{
    NSString *_firstJSArg;
    NSString *_secondJSArg;
    UIWebView *_webView;
    UIView *_kpNavigationView;
    NSString *_jsArgs;
    NSString *_secondAppKey;
    NSString *_startUrlForUNPL;
    long long _stopUNPLjs;
}

+ (id)sharedJSConfig;
@property(nonatomic) long long stopUNPLjs; // @synthesize stopUNPLjs=_stopUNPLjs;
@property(copy, nonatomic) NSString *startUrlForUNPL; // @synthesize startUrlForUNPL=_startUrlForUNPL;
@property(copy, nonatomic) NSString *secondAppKey; // @synthesize secondAppKey=_secondAppKey;
@property(copy, nonatomic) NSString *jsArgs; // @synthesize jsArgs=_jsArgs;
@property(nonatomic) __weak UIView *kpNavigationView; // @synthesize kpNavigationView=_kpNavigationView;
@property(nonatomic) __weak UIWebView *webView; // @synthesize webView=_webView;
@property(copy, nonatomic) NSString *secondJSArg; // @synthesize secondJSArg=_secondJSArg;
@property(copy, nonatomic) NSString *firstJSArg; // @synthesize firstJSArg=_firstJSArg;
- (void).cxx_destruct;
- (id)encryptWithTime:(id)arg1;

@end
