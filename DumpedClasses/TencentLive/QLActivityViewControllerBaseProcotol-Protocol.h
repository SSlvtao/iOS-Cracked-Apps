//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIView;

@protocol QLActivityViewControllerBaseProcotol <NSObject>
@property(copy, nonatomic) NSString *closeIconUrl;
@property(copy, nonatomic) NSString *h5LoadingImageURL;
@property(nonatomic) long long activityType;
- (void)doAction:(long long)arg1;
- (void)changeH5GameStatus:(long long)arg1;
- (UIView *)viewOfActivity;
@end

