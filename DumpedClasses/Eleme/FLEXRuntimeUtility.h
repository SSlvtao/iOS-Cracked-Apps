//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FLEXRuntimeUtility : NSObject
{
}

+ (id)valueForPrimitivePointer:(void *)arg1 objCType:(const char *)arg2;
+ (id)readableTypeForEncoding:(id)arg1;
+ (id)appendName:(id)arg1 toType:(id)arg2;
+ (id)attributesDictionaryForProperty:(struct objc_property *)arg1;
+ (void)enumerateTypesInStructEncoding:(const char *)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)valueForNumberWithObjCType:(const char *)arg1 fromInputString:(id)arg2;
+ (id)objectValueFromEditableJSONString:(id)arg1;
+ (id)editableJSONStringForObject:(id)arg1;
+ (_Bool)isTollFreeBridgedValue:(id)arg1 forCFType:(const char *)arg2;
+ (id)performSelector:(SEL)arg1 onObject:(id)arg2 withArguments:(id)arg3 error:(id *)arg4;
+ (id)prettyArgumentComponentsForMethod:(struct objc_method *)arg1;
+ (id)prettyNameForMethod:(struct objc_method *)arg1 isClassMethod:(_Bool)arg2;
+ (void)setValue:(id)arg1 forIvar:(struct objc_ivar *)arg2 onObject:(id)arg3;
+ (id)valueForIvar:(struct objc_ivar *)arg1 onObject:(id)arg2;
+ (id)prettyNameForIvar:(struct objc_ivar *)arg1;
+ (void)tryAddPropertyWithName:(const char *)arg1 attributes:(id)arg2 toClass:(Class)arg3;
+ (id)descriptionForIvarOrPropertyValue:(id)arg1;
+ (id)valueForProperty:(struct objc_property *)arg1 onObject:(id)arg2;
+ (id)fullDescriptionForProperty:(struct objc_property *)arg1;
+ (SEL)setterSelectorForProperty:(struct objc_property *)arg1;
+ (_Bool)isReadonlyProperty:(struct objc_property *)arg1;
+ (id)typeEncodingForProperty:(struct objc_property *)arg1;
+ (id)prettyNameForProperty:(struct objc_property *)arg1;

@end

