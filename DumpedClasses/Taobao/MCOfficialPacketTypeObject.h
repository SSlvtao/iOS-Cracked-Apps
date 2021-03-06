//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface MCOfficialPacketTypeObject : NSObject
{
    _Bool _isRead;
    NSString *_code;
    NSString *_messageTypeId;
    NSString *_messageIdInServerDB;
    NSString *_messageId;
    NSDate *_time;
    NSString *_summary;
    NSString *_sourceId;
    NSString *_senderUserNick;
    NSString *_templateid;
}

@property(copy, nonatomic) NSString *templateid; // @synthesize templateid=_templateid;
@property(copy, nonatomic) NSString *senderUserNick; // @synthesize senderUserNick=_senderUserNick;
@property(copy, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSDate *time; // @synthesize time=_time;
@property(copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(nonatomic) _Bool isRead; // @synthesize isRead=_isRead;
@property(copy, nonatomic) NSString *messageIdInServerDB; // @synthesize messageIdInServerDB=_messageIdInServerDB;
@property(copy, nonatomic) NSString *messageTypeId; // @synthesize messageTypeId=_messageTypeId;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)dateFromString:(id)arg1;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1;

@end

