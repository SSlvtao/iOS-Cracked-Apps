//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MAShape.h"

@interface MAMultiPoint : MAShape
{
    struct MAMapRect _internalBoundingMapRect;
    struct MAMapPoint *_points;
    unsigned long long _pointCount;
}

@property(readonly, nonatomic) unsigned long long pointCount; // @synthesize pointCount=_pointCount;
@property(readonly, nonatomic) struct MAMapPoint *points; // @synthesize points=_points;
- (void)dealloc;
- (id)initWithCoordinates:(struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;
- (id)initWithPoints:(struct MAMapPoint *)arg1 count:(unsigned long long)arg2;
- (void)getCoordinates:(struct CLLocationCoordinate2D *)arg1 range:(struct _NSRange)arg2;
- (struct MAMapRect)calculateMapRectForMapPoints:(struct MAMapPoint *)arg1 count:(unsigned long long)arg2;
- (void)calculateBoundingMapRect;
@property(readonly, nonatomic) struct MAMapRect internalBoundingMapRect;

@end

