//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPercentDrivenInteractiveTransition.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, ONEGestureTransitionBackContext, UINavigationController;

@interface ONESwipeBackInteractionController : UIPercentDrivenInteractiveTransition <UIGestureRecognizerDelegate>
{
    _Bool _shouldCompleteTransition;
    _Bool _gestureChanged;
    id <ONEGestureBackInteractionDelegate> _gestureBackInteractionDelegate;
    UINavigationController *_currentNavigationController;
    _Bool _interactionInProgress;
    ONEGestureTransitionBackContext *_context;
}

@property(nonatomic) _Bool interactionInProgress; // @synthesize interactionInProgress=_interactionInProgress;
@property(retain, nonatomic) ONEGestureTransitionBackContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)handleGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)getProperDelegate:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)prepareGestureRecognizerInView:(id)arg1;
- (void)wireToViewController:(id)arg1;
- (void)setGestureBackInteractionDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

