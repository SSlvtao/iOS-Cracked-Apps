//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetExportSession;

@interface FileConvertCaseSessionPair : NSObject
{
    AVAssetExportSession *_session;
    id <FileConvertCaseDelegate> _delegate;
    AVAssetExportSession *session;
    id <FileConvertCaseDelegate> delegate;
}

@property(nonatomic) id <FileConvertCaseDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) AVAssetExportSession *session; // @synthesize session;
- (void)dealloc;

@end

