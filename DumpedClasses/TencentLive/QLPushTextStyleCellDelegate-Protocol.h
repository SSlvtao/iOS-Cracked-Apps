//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QLPushTextStyleCell, UISwitch;

@protocol QLPushTextStyleCellDelegate <NSObject>

@optional
- (_Bool)textStyleCell:(QLPushTextStyleCell *)arg1 shouldChangeSwithValue:(_Bool)arg2;
- (void)textStyleCell:(QLPushTextStyleCell *)arg1 didSwitchValueChanged:(UISwitch *)arg2;
@end

