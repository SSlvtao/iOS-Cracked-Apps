//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JSONObjectCoding.h"
#import "NSCopying.h"

@class NSArray, NSDictionary, NSString, NSURL;

@interface ServiceDescription : NSObject <JSONObjectCoding, NSCopying>
{
    NSString *_address;
    NSString *_serviceId;
    unsigned long long _port;
    NSString *_UUID;
    NSString *_type;
    NSString *_version;
    NSString *_friendlyName;
    NSString *_manufacturer;
    NSString *_modelName;
    NSString *_modelDescription;
    NSString *_modelNumber;
    NSURL *_commandURL;
    NSString *_locationXML;
    NSArray *_serviceList;
    NSDictionary *_locationResponseHeaders;
    double _lastDetection;
    id _device;
}

+ (id)descriptionWithAddress:(id)arg1 UUID:(id)arg2;
@property(retain, nonatomic) id device; // @synthesize device=_device;
@property(nonatomic) double lastDetection; // @synthesize lastDetection=_lastDetection;
@property(retain, nonatomic) NSDictionary *locationResponseHeaders; // @synthesize locationResponseHeaders=_locationResponseHeaders;
@property(retain, nonatomic) NSArray *serviceList; // @synthesize serviceList=_serviceList;
@property(retain, nonatomic) NSString *locationXML; // @synthesize locationXML=_locationXML;
@property(retain, nonatomic) NSURL *commandURL; // @synthesize commandURL=_commandURL;
@property(retain, nonatomic) NSString *modelNumber; // @synthesize modelNumber=_modelNumber;
@property(retain, nonatomic) NSString *modelDescription; // @synthesize modelDescription=_modelDescription;
@property(retain, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(retain, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(retain, nonatomic) NSString *friendlyName; // @synthesize friendlyName=_friendlyName;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(nonatomic) unsigned long long port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *serviceId; // @synthesize serviceId=_serviceId;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToServiceDescription:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)toJSONObject;
- (id)initWithJSONObject:(id)arg1;
- (id)initWithAddress:(id)arg1 UUID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

