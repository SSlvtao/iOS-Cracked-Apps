//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface TBServicePluginPopupView : UIView
{
    struct CGRect appearFrame;
    struct CGRect disappearFrame;
    struct CGPoint centerPoint;
}

- (void)disappearView;
- (void)appearView;
- (void)createArrowUI;
- (struct CGRect)getFrame:(id)arg1 withParentMenuFrame:(struct CGRect)arg2;
- (id)initWithParentMenuFrame:(struct CGRect)arg1 withConfigData:(id)arg2 withDelegate:(id)arg3;

@end

