//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, QLAppLiveCommentBaseInfo;

@protocol QLLiveChatTreeCellDelegate <NSObject>

@optional
- (void)didUnhighlight:(QLAppLiveCommentBaseInfo *)arg1;
- (void)shouldHighlight:(QLAppLiveCommentBaseInfo *)arg1;
- (void)didTipCellInside:(QLAppLiveCommentBaseInfo *)arg1;
- (void)didPressCellInside:(QLAppLiveCommentBaseInfo *)arg1 withIndexPath:(NSIndexPath *)arg2;
@end

