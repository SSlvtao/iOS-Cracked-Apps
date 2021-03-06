//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GrowingImageCacheImage, NSArray, NSMutableArray, NSMutableString, NSString;

@interface GrowingEventListItem : NSObject
{
    NSMutableArray *_childItems;
    double _timeInterval;
    NSString *_title;
    NSMutableString *_message;
    GrowingImageCacheImage *_cacheImage;
    long long _eventType;
}

@property(nonatomic) long long eventType; // @synthesize eventType=_eventType;
@property(retain, nonatomic) GrowingImageCacheImage *cacheImage; // @synthesize cacheImage=_cacheImage;
@property(readonly, nonatomic) NSMutableString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
- (void).cxx_destruct;
- (id)debugDescription;
@property(readonly, nonatomic) NSArray *childItems;
- (void)addChildItem:(id)arg1;
- (void)addMessageWord:(id)arg1;
- (id)init;

@end

