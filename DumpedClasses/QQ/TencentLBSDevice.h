//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TencentLBSDevice : NSObject
{
    NSString *_model;
    NSString *_systemVersion;
    NSString *_identifierForVendor;
    NSString *_identifierForIdentifier;
    NSString *_sdkVersion;
}

+ (id)currentDevice;
@property(copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(copy, nonatomic) NSString *identifierForIdentifier; // @synthesize identifierForIdentifier=_identifierForIdentifier;
@property(copy, nonatomic) NSString *identifierForVendor; // @synthesize identifierForVendor=_identifierForVendor;
@property(copy, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)getStoredId;

@end
