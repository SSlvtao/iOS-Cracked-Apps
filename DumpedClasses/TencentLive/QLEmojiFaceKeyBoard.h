//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLFaceKeyboard.h"

@interface QLEmojiFaceKeyBoard : QLFaceKeyboard
{
    id <QLEmotionFaceViewDelegate> _emoboardViewDelegate;
}

+ (id)getInstance;
@property(nonatomic) id <QLEmotionFaceViewDelegate> emoboardViewDelegate; // @synthesize emoboardViewDelegate=_emoboardViewDelegate;
- (void)dealloc;
- (void)scrollViewDidScroll:(id)arg1;
- (id)GMGridView:(id)arg1 cellForItemAtIndex:(long long)arg2;
- (struct CGSize)GMGridView:(id)arg1 sizeForItemsInInterfaceOrientation:(long long)arg2;
- (long long)numberOfItemsInGMGridView:(id)arg1;
- (void)sendStr:(id)arg1;
- (void)setEditViewValue:(_Bool)arg1 horizontal:(_Bool)arg2;
- (void)setGridViewDelegate;
- (void)setBoardViewDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

