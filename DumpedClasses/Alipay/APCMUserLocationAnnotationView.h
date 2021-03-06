//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MAAnnotationView.h"

#import "CLLocationManagerDelegate.h"

@class CLLocationManager, NSString, UIImageView;

@interface APCMUserLocationAnnotationView : MAAnnotationView <CLLocationManagerDelegate>
{
    UIImageView *_imageView;
    CLLocationManager *_locationManager;
}

@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

