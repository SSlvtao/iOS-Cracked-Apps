//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "aluBaseViewController.h"

@class aluBindTaobaoBizModelV2;

@interface aluBindTaobaoInfoViewController : aluBaseViewController
{
    aluBindTaobaoBizModelV2 *_bizModel;
}

@property(retain, nonatomic) aluBindTaobaoBizModelV2 *bizModel; // @synthesize bizModel=_bizModel;
- (void).cxx_destruct;
- (void)onBack;
- (id)defaultTxtMemo:(id)arg1;
- (id)defaultMemo:(id)arg1;
- (id)defaultBtnTitle:(id)arg1;
- (id)createInfoPad:(struct CGRect)arg1 showSeporeateLine:(_Bool)arg2;
- (void)createSubViews;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

