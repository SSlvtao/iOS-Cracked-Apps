//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QLMovieItem, UIView;

@protocol QLMutilCameraDataSourceProtocol <NSObject>
- (UIView *)cameraListTargetView;

@optional
- (_Bool)throwAwayPayCameraItem;
- (_Bool)throwAwayPcidCameraItem;
- (QLMovieItem *)currentPlayerMovieItem;
- (NSString *)pcidOfMutilCamera;
- (struct CGRect)changeMutilCameraViewRect;
@end

