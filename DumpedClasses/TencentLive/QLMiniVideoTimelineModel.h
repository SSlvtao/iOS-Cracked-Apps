//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLPageDataBaseModel.h"

@class MoabCache, NSString;

@interface QLMiniVideoTimelineModel : QLPageDataBaseModel
{
    MoabCache *_cahce;
    long long _timelineType;
    NSString *_vid;
    NSString *_cid;
    NSString *_lid;
    NSString *_fantuanId;
}

@property(retain, nonatomic) NSString *fantuanId; // @synthesize fantuanId=_fantuanId;
@property(retain, nonatomic) NSString *lid; // @synthesize lid=_lid;
@property(retain, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(nonatomic) long long timelineType; // @synthesize timelineType=_timelineType;
- (void).cxx_destruct;
- (void)requestDidFinishLoad:(id)arg1;
- (void)processResponce:(id)arg1 isCache:(_Bool)arg2;
- (void)load:(int)arg1 more:(_Bool)arg2;
- (long long)checkMinitemExist:(id)arg1 miniItem:(id)arg2;
- (id)initWithDataKey:(id)arg1;

@end

