//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface OtherPushMessageItemModel : CTBusinessBean
{
    _Bool _isRead;
    int _messageKey;
    int _businessType;
    NSString *_messageContent;
    NSString *_pushDate;
    NSString *_focusDate;
}

@property(nonatomic) _Bool isRead; // @synthesize isRead=_isRead;
@property(copy, nonatomic) NSString *focusDate; // @synthesize focusDate=_focusDate;
@property(copy, nonatomic) NSString *pushDate; // @synthesize pushDate=_pushDate;
@property(copy, nonatomic) NSString *messageContent; // @synthesize messageContent=_messageContent;
@property(nonatomic) int businessType; // @synthesize businessType=_businessType;
@property(nonatomic) int messageKey; // @synthesize messageKey=_messageKey;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

