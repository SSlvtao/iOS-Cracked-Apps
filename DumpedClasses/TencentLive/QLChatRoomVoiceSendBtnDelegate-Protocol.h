//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, UIEvent;

@protocol QLChatRoomVoiceSendBtnDelegate <NSObject>
- (void)btnTouchesMoved:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)btnTouchesEnded:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)btnTouchesCancelled:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)btnTouchesBegan:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
@end

