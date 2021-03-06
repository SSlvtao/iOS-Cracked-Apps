//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@interface NSManagedObject (MagicalRecord)
+ (_Bool)MR_truncateAll;
+ (_Bool)MR_truncateAllInContext:(id)arg1;
+ (_Bool)MR_deleteAllMatchingPredicate:(id)arg1;
+ (_Bool)MR_deleteAllMatchingPredicate:(id)arg1 inContext:(id)arg2;
+ (id)MR_createEntity;
+ (id)MR_createEntityInContext:(id)arg1;
+ (id)MR_descendingSortDescriptors:(id)arg1;
+ (id)MR_ascendingSortDescriptors:(id)arg1;
+ (id)MR_sortAscending:(_Bool)arg1 attributes:(id)arg2;
+ (id)MR_propertiesNamed:(id)arg1 inContext:(id)arg2;
+ (id)MR_propertiesNamed:(id)arg1;
+ (id)MR_entityDescriptionInContext:(id)arg1;
+ (id)MR_entityDescription;
+ (_Bool)MR_performFetch:(id)arg1;
+ (id)MR_executeFetchRequestAndReturnFirstObject:(id)arg1;
+ (id)MR_executeFetchRequestAndReturnFirstObject:(id)arg1 inContext:(id)arg2;
+ (id)MR_executeFetchRequest:(id)arg1;
+ (id)MR_executeFetchRequest:(id)arg1 inContext:(id)arg2;
+ (unsigned long long)MR_defaultBatchSize;
+ (void)MR_setDefaultBatchSize:(unsigned long long)arg1;
+ (id)MR_entityName;
- (id)MR_inThreadContext;
- (id)MR_inContext:(id)arg1;
- (_Bool)MR_deleteEntity;
- (_Bool)MR_deleteEntityInContext:(id)arg1;
@end

