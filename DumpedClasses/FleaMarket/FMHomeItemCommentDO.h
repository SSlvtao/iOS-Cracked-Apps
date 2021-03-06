//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FMHomeItemCommentDO.h"

@class NSNumber, NSString;

@interface FMHomeItemCommentDO : NSObject <FMHomeItemCommentDO>
{
    _Bool _topBidComment;
    NSString *_buyerComment;
    NSNumber *_buyerId;
    NSString *_buyerNick;
    NSNumber *_commentId;
    NSNumber *_itemId;
    NSNumber *_replyCommentId;
    NSString *_sellerComment;
    NSNumber *_sellerId;
    NSString *_sellerNick;
}

@property(nonatomic) _Bool topBidComment; // @synthesize topBidComment=_topBidComment;
@property(copy, nonatomic) NSString *sellerNick; // @synthesize sellerNick=_sellerNick;
@property(retain, nonatomic) NSNumber *sellerId; // @synthesize sellerId=_sellerId;
@property(copy, nonatomic) NSString *sellerComment; // @synthesize sellerComment=_sellerComment;
@property(retain, nonatomic) NSNumber *replyCommentId; // @synthesize replyCommentId=_replyCommentId;
@property(retain, nonatomic) NSNumber *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSNumber *commentId; // @synthesize commentId=_commentId;
@property(copy, nonatomic) NSString *buyerNick; // @synthesize buyerNick=_buyerNick;
@property(retain, nonatomic) NSNumber *buyerId; // @synthesize buyerId=_buyerId;
@property(copy, nonatomic) NSString *buyerComment; // @synthesize buyerComment=_buyerComment;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

