//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QQHttpClientSession, UIImage;

@interface AddFriendSendMsgHeaderUpload : NSObject
{
    QQHttpClientSession *_session;
    unsigned int _uploadError;
    id <AddFriendSendMsgHeaderUploadDelegate> _theDelegate;
    UIImage *_image;
    UIImage *_thumbImage;
    double _process;
    NSString *_url;
    NSString *_fileName;
    unsigned long long _groupCode;
    NSString *_httpMethod;
}

@property(copy, nonatomic) NSString *httpMethod; // @synthesize httpMethod=_httpMethod;
@property(nonatomic) unsigned long long groupCode; // @synthesize groupCode=_groupCode;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) unsigned int uploadError; // @synthesize uploadError=_uploadError;
@property(nonatomic) double process; // @synthesize process=_process;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) id <AddFriendSendMsgHeaderUploadDelegate> theDelegate; // @synthesize theDelegate=_theDelegate;
- (void)cancelUpLoadWithError:(unsigned int)arg1;
- (void)cancelUpLoad;
- (void)qqHttpClientSessionFailWithError:(id)arg1 error:(id)arg2;
- (void)qqHttpClientSessionRequestDidLoad:(id)arg1 respObj:(id)arg2;
- (void)uploadbytes:(long long)arg1 expected:(long long)arg2;
- (_Bool)startUpLoad;
- (id)getUrlRequest:(id)arg1 Cookie:(id)arg2;
- (id)getParams;
- (_Bool)judgeParamsFit;
- (int)getBkn;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;

@end
