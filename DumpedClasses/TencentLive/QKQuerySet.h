//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSFastEnumeration.h"

@class NSArray, NSEntityDescription, NSManagedObjectContext, NSPredicate;

@interface QKQuerySet : NSObject <NSFastEnumeration, NSCopying>
{
    NSManagedObjectContext *_managedObjectContext;
    NSEntityDescription *_entityDescription;
    NSPredicate *_predicate;
    NSArray *_sortDescriptors;
    NSArray *_resultsCache;
    struct _NSRange _range;
}

@property(retain, nonatomic) NSArray *resultsCache; // @synthesize resultsCache=_resultsCache;
@property(readonly, nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(readonly, copy, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(readonly, copy, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(readonly, nonatomic) NSEntityDescription *entityDescription; // @synthesize entityDescription=_entityDescription;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
- (void).cxx_destruct;
- (unsigned long long)deleteObjects:(id *)arg1;
- (_Bool)each:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (_Bool)enumerateObjects:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (id)orderedSet:(id *)arg1;
- (id)set:(id *)arg1;
- (id)array:(id *)arg1;
- (unsigned long long)count:(id *)arg1;
- (id)fetchRequest;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToQuerySet:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithManagedObjectContext:(id)arg1 entityDescription:(id)arg2 predicate:(id)arg3 sortDescriptors:(id)arg4 range:(struct _NSRange)arg5;
- (id)initWithManagedObjectContext:(id)arg1 fetchRequest:(id)arg2;
- (id)initWithManagedObjectContext:(id)arg1 entityDescription:(id)arg2;
- (id)reverse;
- (id)orderBy:(id)arg1;
- (id)filter:(id)arg1;
- (id)exclude:(id)arg1;
- (id)lastObject:(id *)arg1;
- (id)firstObject:(id *)arg1;
- (id)object:(id *)arg1;

@end

