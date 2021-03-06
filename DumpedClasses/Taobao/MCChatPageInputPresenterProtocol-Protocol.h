//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCBasePresenterProtocol.h"

@class MCChatPageConfig, NSArray, NSString, UIView<MCChatPageInputViewProtocol>, UIViewController;

@protocol MCChatPageInputPresenterProtocol <MCBasePresenterProtocol>
@property(retain, nonatomic) MCChatPageConfig *config;
@property(retain, nonatomic) id <TBIMSessionAdapter> session;
@property(retain, nonatomic) UIView<MCChatPageInputViewProtocol> *inputView;
@property(retain, nonatomic) NSArray *aiTaList;
@property(retain, nonatomic) NSString *defaultText;
- (void)addDelegate:(id <MCChatPageInputPresenterDelegate>)arg1;
- (id)initWithView:(UIView<MCChatPageInputViewProtocol> *)arg1 session:(id <TBIMSessionAdapter>)arg2 baseVC:(UIViewController *)arg3 bizKey:(NSString *)arg4 config:(MCChatPageConfig *)arg5 inputFunctionItems:(NSArray *)arg6;
@end

