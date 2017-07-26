//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TADShareServer : NSObject
{
    id <TADShareDelegate> _delegate;
    unsigned long long _shareType;
}

+ (id)sharedInstance;
@property(nonatomic) unsigned long long shareType; // @synthesize shareType=_shareType;
@property(nonatomic) id <TADShareDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isWXAppInstalled;
- (_Bool)parseRequest:(id)arg1 withWebView:(id)arg2 inContentController:(id)arg3;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)shareTo:(unsigned long long)arg1 with:(id)arg2 inContentController:(id)arg3;
- (void)downloadShareImage:(id)arg1 withCallBack:(CDUnknownBlockType)arg2 inContentController:(id)arg3 shareType:(unsigned long long)arg4;
- (void)shareToShowSharePannel:(id)arg1 withCallBack:(CDUnknownBlockType)arg2 inContentController:(id)arg3;
- (void)shareToWXTimeLine:(id)arg1 withCallBack:(CDUnknownBlockType)arg2 inContentController:(id)arg3;
- (void)shareToWXFriend:(id)arg1 withCallBack:(CDUnknownBlockType)arg2 inContentController:(id)arg3;

@end

