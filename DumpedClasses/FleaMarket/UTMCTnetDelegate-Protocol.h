//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, UTMCTnetObject;

@protocol UTMCTnetDelegate <NSObject>
- (void)close:(UTMCTnetObject *)arg1 error:(int)arg2;
- (void)onConnFail:(UTMCTnetObject *)arg1 error:(int)arg2;
- (void)onConnect:(UTMCTnetObject *)arg1;

@optional
- (void)recvCustomFrameType:(unsigned int)arg1 recData:(NSDictionary *)arg2;
@end

