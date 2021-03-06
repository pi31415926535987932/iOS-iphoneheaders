/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:08:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <itunesstored/RestoreDownloadItemsOperationDelegate.h>
#import <itunesstored/RestorePodcastItemsOperationDelegate.h>

@class NSMutableDictionary, NSOrderedSet, NSMutableArray, NSString, NSArray;

@interface RestoreDownloadsOperation : ISOperation <RestoreDownloadItemsOperationDelegate, RestorePodcastItemsOperationDelegate> {

	NSMutableDictionary* _accountIDsByAppleID;
	int _cancelRetryAlertState;
	NSOrderedSet* _downloadIDs;
	NSMutableArray* _errors;
	BOOL _hadAutoRetrySoftFailure;
	BOOL _hadCancelFailure;
	BOOL _hadHardFailure;
	NSString* _restoreReason;

}

@property (readonly) NSOrderedSet * downloadIdentifiers; 
@property (readonly) NSString * restoreReason; 
@property (readonly) NSArray * errors; 
+(void)resetShouldSuppressTermsAndConditionsDialogs;
+(BOOL)shouldSuppressTermsAndConditionsDialogs;
+(void)setShouldSuppressTermsAndConditionsDialogs:(BOOL)arg1 ;
-(id)restoreReason;
-(id)initWithDownloadIdentifiers:(id)arg1 restoreReason:(id)arg2 ;
-(BOOL)_shouldAuthenticateForCancelRetry;
-(id)_newRestoreItemsWithDownloadIDs:(id)arg1 ;
-(id)_accountIDForAccountName:(id)arg1 error:(id*)arg2 ;
-(void)_establishPrimaryAccount;
-(BOOL)_isErrorCancelFailure:(id)arg1 ;
-(BOOL)_isErrorSoftFail:(id)arg1 ;
-(BOOL)_shouldAutomaticallyRetryAfterSoftFailError:(id)arg1 ;
-(void)_applyResponses:(id)arg1 withTransaction:(id)arg2 ;
-(BOOL)_preflightAccountWithID:(id)arg1 error:(id*)arg2 ;
-(void)restoreDownloadItemsOperation:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)_scheduleAutomaticRetry;
-(void)_scheduleCancelRetry;
-(int)_downloadRestoreStateForError:(id)arg1 ;
-(BOOL)_updateDownloadEntity:(id)arg1 withTransaction:(id)arg2 storeDownload:(id)arg3 accountID:(id)arg4 ;
-(id)_copyDownloadSessionPropertiesForItem:(id)arg1 download:(id)arg2 ;
-(id)_softFailRestoreItem:(id)arg1 download:(id)arg2 withRestoreState:(int)arg3 error:(id)arg4 ;
-(void)_hardFailRestoreItem:(id)arg1 download:(id)arg2 transaction:(id)arg3 error:(id)arg4 ;
-(id)_newDownloadWithStoreDownload:(id)arg1 ;
-(void)restorePodcastItemsOperation:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)dealloc;
-(void)run;
-(id)downloadIdentifiers;
-(BOOL)copyAccountID:(id*)arg1 byAuthenticatingWithContext:(id)arg2 returningError:(id*)arg3 ;
-(id)errors;
@end

