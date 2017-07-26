//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIActionSheetDelegate.h"
#import "UITextFieldDelegate.h"

@class NSMutableArray, NSString, UIButton, UIColor, UITextField, UITextView;

@interface iConsole : UIViewController <UITextFieldDelegate, UIActionSheetDelegate>
{
    _Bool _enabled;
    _Bool _saveLogToDisk;
    _Bool _simulatorShakeToShow;
    _Bool _deviceShakeToShow;
    _Bool _animating;
    int _logLevel;
    unsigned long long _maxLogItems;
    id <WDKConsoleDelegate> _delegate;
    unsigned long long _simulatorTouchesToShow;
    unsigned long long _deviceTouchesToShow;
    NSString *_infoString;
    NSString *_inputPlaceholderString;
    NSString *_logSubmissionEmail;
    UIColor *_backgroundColor;
    UIColor *_textColor;
    long long _indicatorStyle;
    UITextView *_consoleView;
    UITextField *_inputField;
    UIButton *_actionButton;
    NSMutableArray *_log;
}

+ (void)hide;
+ (void)show;
+ (void)clear;
+ (void)crash:(id)arg1;
+ (void)error:(id)arg1;
+ (void)warn:(id)arg1;
+ (void)info:(id)arg1;
+ (void)log:(id)arg1;
+ (void)log:(id)arg1 arguments:(char *)arg2;
+ (id)sharedConsole;
+ (void)load;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(retain, nonatomic) NSMutableArray *log; // @synthesize log=_log;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UITextField *inputField; // @synthesize inputField=_inputField;
@property(retain, nonatomic) UITextView *consoleView; // @synthesize consoleView=_consoleView;
@property(nonatomic) long long indicatorStyle; // @synthesize indicatorStyle=_indicatorStyle;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) NSString *logSubmissionEmail; // @synthesize logSubmissionEmail=_logSubmissionEmail;
@property(copy, nonatomic) NSString *inputPlaceholderString; // @synthesize inputPlaceholderString=_inputPlaceholderString;
@property(copy, nonatomic) NSString *infoString; // @synthesize infoString=_infoString;
@property(nonatomic) _Bool deviceShakeToShow; // @synthesize deviceShakeToShow=_deviceShakeToShow;
@property(nonatomic) _Bool simulatorShakeToShow; // @synthesize simulatorShakeToShow=_simulatorShakeToShow;
@property(nonatomic) unsigned long long deviceTouchesToShow; // @synthesize deviceTouchesToShow=_deviceTouchesToShow;
@property(nonatomic) unsigned long long simulatorTouchesToShow; // @synthesize simulatorTouchesToShow=_simulatorTouchesToShow;
@property(nonatomic) id <WDKConsoleDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int logLevel; // @synthesize logLevel=_logLevel;
@property(nonatomic) unsigned long long maxLogItems; // @synthesize maxLogItems=_maxLogItems;
@property(nonatomic) _Bool saveLogToDisk; // @synthesize saveLogToDisk=_saveLogToDisk;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)dealloc;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (id)URLEncodedString:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)logOnMainThread:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)resizeView:(id)arg1;
- (void)rotateView:(id)arg1;
- (void)consoleHidden;
- (void)hideConsole;
- (void)consoleShown;
- (void)showConsole;
- (struct CGRect)offscreenFrame;
- (struct CGRect)onscreenFrame;
- (struct CGAffineTransform)viewTransform;
- (void)infoAction;
- (_Bool)findAndResignFirstResponder:(id)arg1;
- (void)saveSettings;
- (void)resetLog;
- (void)setConsoleText;
- (id)mainWindow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

