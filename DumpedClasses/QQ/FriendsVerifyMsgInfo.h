//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface FriendsVerifyMsgInfo : NSObject <NSCoding>
{
    unsigned int _unread_count;
    unsigned long long _latest_friend_seq;
    unsigned long long _following_friend_seq;
    unsigned long long _latest_friend_seq_cleen;
    unsigned int _cleanStep;
    NSString *_msg_display;
    unsigned int _frimsg_over;
    int _xo;
}

@property(nonatomic) unsigned int frimsg_over; // @synthesize frimsg_over=_frimsg_over;
@property(retain, nonatomic) NSString *msg_display; // @synthesize msg_display=_msg_display;
@property(nonatomic) unsigned int cleanStep; // @synthesize cleanStep=_cleanStep;
@property(nonatomic) unsigned long long latest_friend_seq_cleen; // @synthesize latest_friend_seq_cleen=_latest_friend_seq_cleen;
@property(nonatomic) unsigned long long following_friend_seq; // @synthesize following_friend_seq=_following_friend_seq;
@property(nonatomic) unsigned long long latest_friend_seq; // @synthesize latest_friend_seq=_latest_friend_seq;
@property(nonatomic) unsigned int unread_count; // @synthesize unread_count=_unread_count;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

