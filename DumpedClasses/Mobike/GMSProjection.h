//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GMSProjection : NSObject
{
    reffed_ptr_329922e5 _camera;
    struct UIEdgeInsets _padding;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (CDStruct_7738a2f8)visibleRegion;
- (_Bool)containsCoordinate:(CDStruct_c3b9c2ee)arg1;
- (double)pointsForMeters:(double)arg1 atCoordinate:(CDStruct_c3b9c2ee)arg2;
- (CDStruct_c3b9c2ee)coordinateForPoint:(struct CGPoint)arg1;
- (struct CGPoint)pointForCoordinate:(CDStruct_c3b9c2ee)arg1;
- (id)initWithCamera:(const reffed_ptr_329922e5 *)arg1 padding:(const struct UIEdgeInsets *)arg2;

@end

