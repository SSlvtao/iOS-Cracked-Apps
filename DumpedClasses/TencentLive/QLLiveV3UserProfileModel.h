//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QLASIHTTPDelegate.h"

@class NSString, QLASIHTTPRequest;

@interface QLLiveV3UserProfileModel : NSObject <QLASIHTTPDelegate>
{
    long long _userProfile;
    QLASIHTTPRequest *_dataRequest;
    CDUnknownBlockType _completion;
    NSString *_currentPID;
}

@property(copy, nonatomic) NSString *currentPID; // @synthesize currentPID=_currentPID;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) QLASIHTTPRequest *dataRequest; // @synthesize dataRequest=_dataRequest;
@property(nonatomic) long long userProfile; // @synthesize userProfile=_userProfile;
- (void).cxx_destruct;
- (void)request:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)requestDidFinishLoad:(id)arg1;
- (void)load:(CDUnknownBlockType)arg1;
- (void)cancelDataRequest;
- (_Bool)isGuest;
- (void)resetWithPID:(id)arg1;
- (id)initWithPID:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

