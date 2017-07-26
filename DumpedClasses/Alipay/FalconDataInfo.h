//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FalconDataInfo : NSObject
{
    int _falconModalDataStatus;
    NSString *_type;
    NSString *_url;
    NSString *_md5String;
    NSString *_unZipFilePath;
    NSString *_downloadFile;
    NSString *_tmpUrl;
    NSString *_tmpDownloadFile;
    NSString *_tmpUnZipFilePath;
    NSString *_tmpMd5String;
}

@property(retain, nonatomic) NSString *tmpMd5String; // @synthesize tmpMd5String=_tmpMd5String;
@property(retain, nonatomic) NSString *tmpUnZipFilePath; // @synthesize tmpUnZipFilePath=_tmpUnZipFilePath;
@property(retain, nonatomic) NSString *tmpDownloadFile; // @synthesize tmpDownloadFile=_tmpDownloadFile;
@property(retain, nonatomic) NSString *tmpUrl; // @synthesize tmpUrl=_tmpUrl;
@property(nonatomic) int falconModalDataStatus; // @synthesize falconModalDataStatus=_falconModalDataStatus;
@property(retain, nonatomic) NSString *downloadFile; // @synthesize downloadFile=_downloadFile;
@property(retain, nonatomic) NSString *unZipFilePath; // @synthesize unZipFilePath=_unZipFilePath;
@property(retain, nonatomic) NSString *md5String; // @synthesize md5String=_md5String;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end
