//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QLPanelColorTemplateAdaptProtocol.h"

@class NSString, QLEditInputView;

@interface QLBaseEditInputFuncView : UIView <QLPanelColorTemplateAdaptProtocol>
{
    id <QLPanelColorTemplateProtocol> _colorTemplate;
    QLEditInputView *_bindingEditInputView;
}

@property(nonatomic) __weak QLEditInputView *bindingEditInputView; // @synthesize bindingEditInputView=_bindingEditInputView;
@property(retain, nonatomic) id <QLPanelColorTemplateProtocol> colorTemplate; // @synthesize colorTemplate=_colorTemplate;
- (void).cxx_destruct;
- (void)switchKeyboardType:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

