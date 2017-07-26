//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSURLAuthenticationChallenge, TTURLRequest;

@protocol TTURLRequestDelegate <NSObject>

@optional
- (void)requestDidCancelLoad:(TTURLRequest *)arg1;
- (void)request:(TTURLRequest *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)request:(TTURLRequest *)arg1 didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (void)requestDidFinishLoad:(TTURLRequest *)arg1;
- (void)requestDidUploadData:(TTURLRequest *)arg1;
- (void)requestDidStartLoad:(TTURLRequest *)arg1;
@end

