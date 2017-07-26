//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIDevice.h"

#import "UIAccelerometerDelegate.h"

@class NSString;

@interface UIDevice (Orientation) <UIAccelerometerDelegate>
+ (id)orientationString:(long long)arg1;
@property(readonly, nonatomic) NSString *orientationString;
@property(readonly, nonatomic) _Bool isPortrait;
@property(readonly, nonatomic) _Bool isLandscape;
- (double)orientationAngleRelativeToOrientation:(long long)arg1;
@property(readonly, nonatomic) long long acceleratorBasedOrientation;
@property(readonly, nonatomic) double orientationAngle;
- (void)parseAccelerometerData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

