//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel, UISwitch;

@interface SCIPView : UIView
{
    id <SCIPViewDelegate> _delegate;
    UILabel *_cipTipLabel;
    UILabel *_countLabel;
    UISwitch *_cipSwitch;
    UIButton *_helpBtn;
}

@property(retain, nonatomic) UIButton *helpBtn; // @synthesize helpBtn=_helpBtn;
@property(retain, nonatomic) UISwitch *cipSwitch; // @synthesize cipSwitch=_cipSwitch;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *cipTipLabel; // @synthesize cipTipLabel=_cipTipLabel;
@property(nonatomic) __weak id <SCIPViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)init;
- (void)setCipSwitchDefaultValue:(_Bool)arg1;
- (void)setCipAvailableCount:(id)arg1;
- (void)cipOnorOff:(id)arg1;

@end

