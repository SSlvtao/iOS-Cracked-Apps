//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AREBaseAnnotation.h"

@class GiftUserViewInfoPB, NSString;

@interface ARENormalAnnotation : AREBaseAnnotation
{
    _Bool _avaliable;
    unsigned long long _type;
    NSString *_crowdNo;
    GiftUserViewInfoPB *_usrInfo;
    NSString *_remark;
    NSString *_limiter;
    NSString *_crowdSign;
    NSString *_picFeatures;
    NSString *_previewPicUrl;
    double _distance;
    NSString *_poiString;
    NSString *_unAvailableReason;
}

+ (id)annotationReuseIdentifier;
@property(retain, nonatomic) NSString *unAvailableReason; // @synthesize unAvailableReason=_unAvailableReason;
@property(retain, nonatomic) NSString *poiString; // @synthesize poiString=_poiString;
@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(retain, nonatomic) NSString *previewPicUrl; // @synthesize previewPicUrl=_previewPicUrl;
@property(retain, nonatomic) NSString *picFeatures; // @synthesize picFeatures=_picFeatures;
@property(retain, nonatomic) NSString *crowdSign; // @synthesize crowdSign=_crowdSign;
@property(retain, nonatomic) NSString *limiter; // @synthesize limiter=_limiter;
@property(retain, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(retain, nonatomic) GiftUserViewInfoPB *usrInfo; // @synthesize usrInfo=_usrInfo;
@property(nonatomic) _Bool avaliable; // @synthesize avaliable=_avaliable;
@property(copy, nonatomic) NSString *crowdNo; // @synthesize crowdNo=_crowdNo;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;

@end

