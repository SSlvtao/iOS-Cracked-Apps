//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLEngineNotificationInfoBase.h"

@class NSString;

@interface QLCommentNotification : QLEngineNotificationInfoBase
{
    NSString *_superID;
    NSString *_commentID;
    NSString *_content;
}

+ (id)formatObjectModelByJCE:(id)arg1;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *commentID; // @synthesize commentID=_commentID;
@property(retain, nonatomic) NSString *superID; // @synthesize superID=_superID;
- (void).cxx_destruct;

@end

