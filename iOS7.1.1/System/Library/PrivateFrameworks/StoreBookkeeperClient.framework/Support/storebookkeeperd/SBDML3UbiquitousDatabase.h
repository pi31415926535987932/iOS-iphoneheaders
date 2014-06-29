/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:10:32 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/Support/storebookkeeperd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/ML3DatabaseConnectionDelegate.h>
#import <MusicLibrary/ML3DatabaseConnectionPoolDelegate.h>

@class ML3MusicLibrary, NSString, ML3DatabaseConnectionPool, NSDate;

@interface SBDML3UbiquitousDatabase : NSObject <ML3DatabaseConnectionDelegate, ML3DatabaseConnectionPoolDelegate> {

	BOOL _needsToPurgeOldEntries;
	ML3MusicLibrary* _musicLibrary;
	NSString* _databasePath;
	ML3DatabaseConnectionPool* _connectionPool;

}

@property (readonly) ML3MusicLibrary * musicLibrary;                                   //@synthesize musicLibrary=_musicLibrary - In the implementation block
@property (nonatomic,retain) NSString * databasePath;                                  //@synthesize databasePath=_databasePath - In the implementation block
@property (assign,nonatomic) unsigned long long lastSyncedEntityRevision; 
@property (nonatomic,copy) NSString * lastSyncedDomainVersion; 
@property (nonatomic,retain) NSDate * dateLastSynced; 
@property (nonatomic,copy) NSString * lastNotificationDomainVersion; 
@property (nonatomic,retain) NSDate * dateToSyncWithUbiquitousStore; 
@property (nonatomic,readonly) BOOL hasSyncedAtleastOnce; 
@property (nonatomic,readonly) BOOL hasRemoteChangesToPull; 
@property (nonatomic,readonly) BOOL hasLocalChangesToPush; 
@property (retain) ML3DatabaseConnectionPool * connectionPool;                         //@synthesize connectionPool=_connectionPool - In the implementation block
+(id)allSchemaSQL;
+(int)currentUserVersion;
-(id)dateLastSynced;
-(BOOL)hasRemoteChangesToPull;
-(BOOL)hasLocalChangesToPush;
-(BOOL)hasSyncedAtleastOnce;
-(id)lastNotificationDomainVersion;
-(void)setLastNotificationDomainVersion:(id)arg1 ;
-(void)updateUbiquitousDatabaseByPerformingWriteTransactionWithBlock:(/*^block*/ id)arg1 ;
-(void)setLastSyncedEntityRevision:(unsigned long long)arg1 ;
-(void)setLastSyncedDomainVersion:(id)arg1 ;
-(void)setDateToSyncWithUbiquitousStore:(id)arg1 ;
-(BOOL)updateUbiquitousDatabaseByUpdatingUbiquitousMetadataValuesForChangedTrackWithPersistentID:(long long)arg1 ;
-(id)dateToSyncWithUbiquitousStore;
-(BOOL)_setupDatabaseConnection;
-(BOOL)requiresSchemaOnlyUpdates;
-(BOOL)_userVersionMatchesSystemVersion;
-(int)_fetchDatabaseUserVersion;
-(BOOL)_buildDatabaseTablesUsingTransaction:(BOOL)arg1 ;
-(BOOL)_migrateToCurrentUserVersion;
-(void)purgeOldEntriesIfNecessary;
-(BOOL)_deleteAndRecreateDatabase;
-(BOOL)_setValue:(id)arg1 forDatabaseProperty:(id)arg2 ;
-(id)_valueForDatabaseProperty:(id)arg1 ;
-(void)_updateUbiquitousDatabase_setBookmarkMetadataWithValuesFromTrackWithMetadataIdentifier:(id)arg1 propertyValues:(id)arg2 timestamp:(double)arg3 ;
-(void)updateUbiquitousDatabaseByInsertingUbiquitousMetadataForTrackWithMetadataIdentifier:(id)arg1 propertyValues:(id)arg2 timestamp:(double)arg3 ;
-(unsigned long long)lastSyncedEntityRevision;
-(BOOL)migrateFromVersion:(int)arg1 outUserVersion:(int*)arg2 ;
-(BOOL)connectionDetectedDatabaseCorruption:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 path:(id)arg2 enableWrites:(BOOL)arg3 ;
-(void)setDateLastSynced:(id)arg1 ;
-(void)dumpUbiquitousMetadata;
-(id)init;
-(void).cxx_destruct;
-(id)musicLibrary;
-(id)connectionPool;
-(void)updateUbiquitousDatabaseByRemovingUbiquitousMetadataFromTrackWithPersistentID:(long long)arg1 ;
-(void)updateMusicLibraryByApplyingUbiquitousBookmarkMetadataToTrackWithPersistentID:(long long)arg1 ;
-(void)connectionPool:(id)arg1 createdNewConnection:(id)arg2 ;
-(void)setConnectionPool:(id)arg1 ;
-(void)setDatabasePath:(id)arg1 ;
-(BOOL)coerceValidDatabase;
-(id)initWithMusicLibrary:(id)arg1 ;
-(int)userVersion;
-(id)databasePath;
-(id)lastSyncedDomainVersion;
@end
