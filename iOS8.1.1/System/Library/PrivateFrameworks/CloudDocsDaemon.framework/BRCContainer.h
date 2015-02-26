/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:58 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSDictionary, NSArray;


@protocol BRCContainer <PQLResultSetInitializer>
@property (nonatomic,readonly) BOOL needsSave; 
@property (nonatomic,readonly) NSString * containerID; 
@property (nonatomic,readonly) NSString * zoneName; 
@property (nonatomic,readonly) NSDictionary * plist; 
@property (nonatomic,readonly) NSArray * tableNames; 
@required
+(id)containerByID:(id)arg1 withDB:(id)arg2;
+(PQLResultSet*)containersEnumerator:(id)arg1;
+(BOOL)_sql_upgrade_to_version1:(id)arg1;
-(NSString *)containerID;
-(BOOL)needsSave;
-(BOOL)saveToDB;
-(BOOL)dumpTablesToContext:(id)arg1 error:(id*)arg2;
-(BOOL)validateItemsLoggingToFile:(_sFILE*)arg1 withDB:(id)arg2;
-(BOOL)validateStructureLoggingToFile:(_sFILE*)arg1 withDB:(id)arg2;
-(BOOL)upgradeTables;
-(NSString *)zoneName;
-(NSDictionary *)plist;
-(PQLResultSet*)itemsEnumeratorWithDB:(id)arg1;
-(NSArray *)tableNames;

@end
