//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QLVideoDownloadOperation;

@protocol QLVideoDownloadOperationDelegate <NSObject>

@optional
- (void)downloadOperationDidFinish:(QLVideoDownloadOperation *)arg1;
- (void)downloadOperationDidFail:(QLVideoDownloadOperation *)arg1;
- (void)downloadOperationDidUpdateProgress:(QLVideoDownloadOperation *)arg1;
- (void)downloadOperationDidCancel:(QLVideoDownloadOperation *)arg1;
- (void)downloadOperationDidStart:(QLVideoDownloadOperation *)arg1;
@end

