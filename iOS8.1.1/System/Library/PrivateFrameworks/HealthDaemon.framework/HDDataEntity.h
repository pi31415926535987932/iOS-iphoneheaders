/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:00 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HDHealthEntity.h>
#import <HealthDaemon/HDDataEntity.h>

@protocol HDDataEntity <HDSQLiteEntity>
@required
+(id)columnNameForSortIdentifier:(id)arg1;
+(BOOL)deleteDataEntityWithPersistentID:(long long)arg1 inDatabase:(id)arg2 error:(id*)arg3;
+(long long)preferredEntityType;
+(void)enumerateObjectsOfType:(long long)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 sourceIdentifier:(id)arg4 authorizationFilter:(/*^block*/id)arg5 limit:(unsigned long long)arg6 anchor:(id*)arg7 handler:(/*^block*/id)arg8;
+(void)enumerateObjectsWithHealthDaemon:(id)arg1 predicate:(id)arg2 sourceIdentifier:(id)arg3 authorizationFilter:(/*^block*/id)arg4 orderBy:(id)arg5 directions:(id)arg6 limit:(unsigned long long)arg7 handler:(/*^block*/id)arg8;
+(id)sourceIDsForObjectsOfType:(long long)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 error:(id*)arg4;
+(long long)countOfObjectsOfType:(long long)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 withError:(id*)arg4;
+(id)UUIDsForObectsOfType:(long long)arg1 predicate:(id)arg2 healthDaemon:(id)arg3 error:(id*)arg4;
+(void)insertDataObjects:(id)arg1 withProvenance:(unsigned long long)arg2 sourceEntity:(id)arg3 healthDaemon:(id)arg4 completionHandler:(/*^block*/id)arg5;
+(void)enumerateObjectsOfType:(long long)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 sourceIdentifier:(id)arg4 authorizationFilter:(/*^block*/id)arg5 orderBy:(id)arg6 directions:(id)arg7 limit:(unsigned long long)arg8 handler:(/*^block*/id)arg9;
+(BOOL)isBackedByTable;
+(id)insertDataObject:(id)arg1 withProvenance:(unsigned long long)arg2 sourceEntity:(id)arg3 healthDaemon:(id)arg4 error:(id*)arg5;
+(void)applyRelatedPropertiesToObject:(id)arg1 entity:(id)arg2 properties:(id)arg3 values:(id*)arg4 authorizationFilter:(/*^block*/id)arg5 healthDaemon:(id)arg6;
+(BOOL)acceptsObject:(id)arg1;
+(BOOL)deleteDataObjects:(id)arg1 sourceEntity:(id)arg2 healthDaemon:(id)arg3 error:(id*)arg4;
+(id)dataEntityForObject:(id)arg1 healthDaemon:(id)arg2 error:(id*)arg3;
-(BOOL)deleteAssociatedEntitiesInDatabase:(id)arg1 error:(id*)arg2;
-(id)dataAnchor;

@end

#import <HealthDaemon/HDSyncEntity.h>

@class NSString;

@interface HDDataEntity : HDHealthEntity <HDDataEntity, HDSyncEntity>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)load;
+(id)createTableSQL;
+(long long)protectionClass;
+(id)associationPropertyForEntityClass:(Class)arg1 ;
+(id)columnNameForSortIdentifier:(id)arg1 ;
+(BOOL)deleteDataEntityWithPersistentID:(long long)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
+(long long)preferredEntityType;
+(void)enumerateObjectsOfType:(long long)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 sourceIdentifier:(id)arg4 authorizationFilter:(/*^block*/id)arg5 limit:(unsigned long long)arg6 anchor:(id*)arg7 handler:(/*^block*/id)arg8 ;
+(void)enumerateObjectsWithHealthDaemon:(id)arg1 predicate:(id)arg2 sourceIdentifier:(id)arg3 authorizationFilter:(/*^block*/id)arg4 orderBy:(id)arg5 directions:(id)arg6 limit:(unsigned long long)arg7 handler:(/*^block*/id)arg8 ;
+(id)sourceIDsForObjectsOfType:(long long)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 error:(id*)arg4 ;
+(long long)countOfObjectsOfType:(long long)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 withError:(id*)arg4 ;
+(id)UUIDsForObectsOfType:(long long)arg1 predicate:(id)arg2 healthDaemon:(id)arg3 error:(id*)arg4 ;
+(id)_databaseTable;
+(id)_columnsSQL;
+(Class)_associatedDataObjectClass;
+(id)_propertySettersForDataObject;
+(id)_tableValuesFromDataObject:(id)arg1 ;
+(void)insertDataObjects:(id)arg1 withProvenance:(unsigned long long)arg2 sourceEntity:(id)arg3 healthDaemon:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
+(id)_insertDataObject:(id)arg1 withProvenance:(unsigned long long)arg2 sourceEntity:(id)arg3 inDatabase:(id)arg4 ;
+(BOOL)_deleteDataObjectWithUUID:(id)arg1 sourceEntity:(id)arg2 inDatabase:(id)arg3 error:(id*)arg4 ;
+(void)enumerateObjectsOfType:(long long)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 sourceIdentifier:(id)arg4 authorizationFilter:(/*^block*/id)arg5 orderBy:(id)arg6 directions:(id)arg7 limit:(unsigned long long)arg8 handler:(/*^block*/id)arg9 ;
+(id)_aggregatedPropertySettersForDataObjectWithOrderedProperties:(id*)arg1 ;
+(id)_propertiesForFetchingDataObjectsWithAssociations:(id)arg1 ;
+(id)_dataObjectWithPersistentID:(long long)arg1 type:(long long)arg2 authorizationFilter:(/*^block*/id)arg3 properties:(id)arg4 values:(id*)arg5 propertySetters:(id)arg6 healthDaemon:(id)arg7 ;
+(id)_UUIDsForObjectsOfType:(long long)arg1 predicate:(id)arg2 healthDaemon:(id)arg3 database:(id)arg4 ;
+(Class)_ancestorWithProperty:(id)arg1 ;
+(BOOL)isBackedByTable;
+(id)insertDataObject:(id)arg1 withProvenance:(unsigned long long)arg2 sourceEntity:(id)arg3 healthDaemon:(id)arg4 error:(id*)arg5 ;
+(BOOL)_deleteDataEntityWithPredicate:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
+(void)applyRelatedPropertiesToObject:(id)arg1 entity:(id)arg2 properties:(id)arg3 values:(id*)arg4 authorizationFilter:(/*^block*/id)arg5 healthDaemon:(id)arg6 ;
+(BOOL)acceptsObject:(id)arg1 ;
+(id)_insertDataObject:(id)arg1 withProvenance:(unsigned long long)arg2 sourceBundleIdentifier:(id)arg3 healthDaemon:(id)arg4 error:(id*)arg5 ;
+(BOOL)deleteDataObjects:(id)arg1 sourceEntity:(id)arg2 healthDaemon:(id)arg3 error:(id*)arg4 ;
+(id)dataEntityForObject:(id)arg1 healthDaemon:(id)arg2 error:(id*)arg3 ;
+(id)syncEntityIdentifier;
+(id)syncEntitiesWithStartAnchor:(id)arg1 endAnchor:(id)arg2 healthDaemon:(id)arg3 actionHandler:(/*^block*/id)arg4 ;
+(BOOL)addObject:(id)arg1 syncStore:(id)arg2 healthDaemon:(id)arg3 error:(id*)arg4 ;
+(BOOL)deleteObject:(id)arg1 syncStore:(id)arg2 healthDaemon:(id)arg3 error:(id*)arg4 ;
+(id)databaseTable;
+(id)disambiguatedSQLForProperty:(id)arg1 ;
+(id)joinClauseForProperty:(id)arg1 ;
-(id)_dataID;
-(BOOL)deleteAssociatedEntitiesInDatabase:(id)arg1 error:(id*)arg2 ;
-(BOOL)_deleteRelatedEntitiesInDatabase:(id)arg1 error:(id*)arg2 ;
-(id)dataAnchor;
@end
