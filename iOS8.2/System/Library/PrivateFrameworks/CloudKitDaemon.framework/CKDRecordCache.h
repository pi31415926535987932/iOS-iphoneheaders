/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:42 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKSQLite.h>

@protocol OS_dispatch_queue;
@class CKDClientContext, NSObject;

@interface CKDRecordCache : CKSQLite {

	CKDClientContext* _context;
	int _scope;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) CKDClientContext * context;                      //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) int scope;                                       //@synthesize scope=_scope - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(CKDClientContext *)context;
-(void)setContext:(CKDClientContext *)arg1 ;
-(void)setScope:(int)arg1 ;
-(int)scope;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(char)_cachedRecordKnownUserKeyData:(id)arg1 satisfiesRequiredKeys:(id)arg2 ;
-(id)_recordWithID:(id)arg1 requiredKeys:(id)arg2 ;
-(char)_cachedRecordHasValidAssets:(id)arg1 forRequiredKeys:(id)arg2 ;
-(id)_trimRecord:(id)arg1 toRequiredKeys:(id)arg2 ;
-(void)addRecord:(id)arg1 knownUserKeys:(id)arg2 ;
-(id)initWithPath:(id)arg1 queue:(id)arg2 ;
-(id)recordWithID:(id)arg1 requiredKeys:(id)arg2 ;
-(id)recordsWithIDs:(id)arg1 requiredKeys:(id)arg2 ;
-(id)etagForRecordID:(id)arg1 requiredKeys:(id)arg2 ;
-(void)deleteRecordWithID:(id)arg1 ;
-(void)clearAllRecords;
-(void)clearAllRecordsForZoneWithID:(id)arg1 ;
-(void)clearAssetAuthTokensForRecordWithID:(id)arg1 ;
-(void)expireRecordsWithExpiryDate:(id)arg1 ;
@end

