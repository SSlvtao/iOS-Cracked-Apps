//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QLSDownloadSpeedRecord : NSObject
{
    _Bool _downloadBytesListIsValid;
    unsigned long long _smoothDownloadSpeed;
    unsigned long long _downloadBytes;
    unsigned long long *_downloadBytesList;
}

@property(nonatomic) _Bool downloadBytesListIsValid; // @synthesize downloadBytesListIsValid=_downloadBytesListIsValid;
@property(nonatomic) unsigned long long *downloadBytesList; // @synthesize downloadBytesList=_downloadBytesList;
@property(nonatomic) unsigned long long downloadBytes; // @synthesize downloadBytes=_downloadBytes;
@property(nonatomic) unsigned long long smoothDownloadSpeed; // @synthesize smoothDownloadSpeed=_smoothDownloadSpeed;
- (void)calculateSmoothSpeed;
- (void)reset;
- (id)init;
- (void)dealloc;

@end

