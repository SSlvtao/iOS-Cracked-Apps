//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BlockUserManager : NSObject
{
    id <BlockUserManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <BlockUserManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)operation:(id)arg1 finishedResult:(id)arg2 error:(id)arg3 userInfo:(id)arg4;
- (void)getBlockedUsersWithOffset:(long long)arg1 count:(long long)arg2;
- (void)unblockUser:(id)arg1;
- (void)blockUser:(id)arg1;
- (void)blockUnblockUser:(id)arg1 requestType:(unsigned long long)arg2;

@end

