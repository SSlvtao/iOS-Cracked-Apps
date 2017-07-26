//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QLMovieThumbModelDelegate.h"

@class NSString, QLMovieThumbConnectInfo, QLMovieThumbInfo, QLMovieThumbModel;

@interface KKMediaThumbImageLoader : NSObject <QLMovieThumbModelDelegate>
{
    CDUnknownBlockType _completedHandler;
    QLMovieThumbConnectInfo *_connectionInfo;
    QLMovieThumbInfo *_thumbInfo;
    QLMovieThumbModel *_model;
    long long _startTime;
    long long _imageCount;
    double _imageInterval;
}

@property(retain, nonatomic) QLMovieThumbModel *model; // @synthesize model=_model;
@property(retain, nonatomic) QLMovieThumbInfo *thumbInfo; // @synthesize thumbInfo=_thumbInfo;
@property(retain, nonatomic) QLMovieThumbConnectInfo *connectionInfo; // @synthesize connectionInfo=_connectionInfo;
@property(copy, nonatomic) CDUnknownBlockType completedHandler; // @synthesize completedHandler=_completedHandler;
- (void).cxx_destruct;
- (void)imgLoadFailed:(id)arg1;
- (void)imgLoaded:(id)arg1 path:(id)arg2;
- (id)getPartOfImg:(id)arg1 withRect:(struct CGRect)arg2;
- (void)loadThumbImages:(id)arg1;
- (void)loadThumbImagesWithStartTime:(double)arg1 count:(long long)arg2 interval:(double)arg3 completedHandler:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithThumbInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

