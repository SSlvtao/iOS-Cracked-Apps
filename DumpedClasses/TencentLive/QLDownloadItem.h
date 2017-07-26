//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QLDownloadItem : NSObject
{
    NSString *_columnId;
    NSString *_coverId;
    NSString *_videoId;
    long long _downloadRight;
    long long _fileSize;
    NSString *_videoName;
    long long _isCharge;
    NSString *_expansion;
    NSString *_imageUrl;
    NSString *_videoMainName;
}

+ (id)downloadItemWithCacheItem:(id)arg1 withMainName:(id)arg2;
+ (id)downloadItemWithCacheItem:(id)arg1;
@property(copy, nonatomic) NSString *videoMainName; // @synthesize videoMainName=_videoMainName;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) NSString *expansion; // @synthesize expansion=_expansion;
@property(nonatomic) long long isCharge; // @synthesize isCharge=_isCharge;
@property(retain, nonatomic) NSString *videoName; // @synthesize videoName=_videoName;
@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) long long downloadRight; // @synthesize downloadRight=_downloadRight;
@property(retain, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(retain, nonatomic) NSString *coverId; // @synthesize coverId=_coverId;
@property(retain, nonatomic) NSString *columnId; // @synthesize columnId=_columnId;
- (void).cxx_destruct;

@end

