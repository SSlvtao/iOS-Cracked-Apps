//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QLMomentPhoto, QLMomentVideo, UIViewController;

@protocol URLPhotoBrowserViewControllerDelegate <NSObject>

@optional
- (_Bool)browserViewController:(UIViewController *)arg1 shouldEnablePhotoGraffiti:(unsigned long long)arg2;
- (id)browserViewController:(UIViewController *)arg1 getPhotoAtIndex:(unsigned long long)arg2;
- (_Bool)browserViewController:(UIViewController *)arg1 updateVideo:(QLMomentVideo *)arg2 index:(unsigned long long)arg3;
- (QLMomentPhoto *)browserViewController:(UIViewController *)arg1 getVideoAtIndex:(unsigned long long)arg2;
- (_Bool)browserViewController:(UIViewController *)arg1 didDeselectVideo:(unsigned long long)arg2;
- (_Bool)browserViewController:(UIViewController *)arg1 didSelectVideo:(unsigned long long)arg2;
- (_Bool)browserViewController:(UIViewController *)arg1 didDeleteVideo:(unsigned long long)arg2;
- (_Bool)browserViewController:(UIViewController *)arg1 updatePhoto:(QLMomentPhoto *)arg2 index:(unsigned long long)arg3;
- (_Bool)browserViewController:(UIViewController *)arg1 didDeselectPhoto:(unsigned long long)arg2;
- (_Bool)browserViewController:(UIViewController *)arg1 didSelectPhoto:(unsigned long long)arg2;
- (_Bool)browserViewController:(UIViewController *)arg1 didDeletePhoto:(unsigned long long)arg2;
- (_Bool)browserViewController:(UIViewController *)arg1 isSelected:(unsigned long long)arg2;
@end

