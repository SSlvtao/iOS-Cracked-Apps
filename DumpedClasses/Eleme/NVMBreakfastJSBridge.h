//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NVMJSInterface.h"

@class NSString, NVMWebViewController;

@interface NVMBreakfastJSBridge : NSObject <NVMJSInterface>
{
    NVMWebViewController *_webViewController;
}

+ (id)__elm_export__isBreakfastEnable250;
@property(nonatomic) __weak NVMWebViewController *webViewController; // @synthesize webViewController=_webViewController;
- (void).cxx_destruct;
- (_Bool)isBreakfastEnable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
