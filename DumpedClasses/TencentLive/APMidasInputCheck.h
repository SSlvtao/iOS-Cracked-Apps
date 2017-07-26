//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITextFieldDelegate.h"

@class NSString;

@interface APMidasInputCheck : NSObject <UITextFieldDelegate>
{
    NSString *_lastEidtText;
    unsigned long long groupSize;
    unsigned long long minLen;
    unsigned long long maxLen;
}

@property(nonatomic) unsigned long long maxLen; // @synthesize maxLen;
@property(nonatomic) unsigned long long minLen; // @synthesize minLen;
@property(nonatomic) unsigned long long groupSize; // @synthesize groupSize;
- (void).cxx_destruct;
- (id)text:(id)arg1;
- (_Bool)validateText:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)editChanged:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

