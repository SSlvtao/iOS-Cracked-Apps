//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QLDataModelProtocol.h"

@class NSString;

@interface NSObject (_Object_Parser) <QLDataModelProtocol>
+ (id)_modelsWithInfos:(id)arg1;
+ (id)_parsedArrayFromInfos:(id)arg1;
+ (_Bool)_isValidValue:(id)arg1 settingToProperty:(id)arg2;
+ (void)_initQSModelCachedPropertyiesInfoKey;
+ (id)_propertyInfoWithName:(id)arg1;
+ (id)_allPropertiesInfo;
- (void)_resetWithInfo:(id)arg1;
- (void)_automaticParseFromInfo:(id)arg1;
- (void)_parseFromInfo:(id)arg1;
- (void)_securedSetValue:(id)arg1 forKey:(id)arg2;
- (id)_initWithInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

