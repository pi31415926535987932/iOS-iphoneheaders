/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLPhotoBakedThumbnailsDelegate.h>

@class NSMutableArray, NSCountedSet, NSRecursiveLock, PLXPCTransaction, NSMutableDictionary;

@interface PLImageWriter : NSObject <PLPhotoBakedThumbnailsDelegate> {

	NSMutableArray* _highPriorityJobs;
	NSCountedSet* _unfinishedHighPriorityJobs;
	unsigned long long _highPrioritySequentialJobCount;
	NSMutableArray* _lowPriorityJobs;
	NSCountedSet* _unfinishedLowPriorityJobs;
	NSRecursiveLock* _jobsLock;
	int _unfinishedJobCount;
	int _jobQueueAvailabilityToken;
	bool _writerThreadRunning;
	bool _databaseIsCorrupt;
	PLXPCTransaction* _transaction;
	NSMutableDictionary* _inProgressAvalancheFds;

}
+(id)sharedWriter;
+(void)decorateThumbnailInRect:(CGRect)arg1 size:(CGSize)arg2 duration:(id)arg3 inContext:(CGContextRef)arg4 format:(int)arg5 ;
+(void)writeableDataForImage:(id)arg1 previewImage:(id)arg2 imageData:(id)arg3 imageUTIType:(CFStringRef)arg4 exifProperties:(id)arg5 imageRefOut:(CGImage*)arg6 lowResImageRefOut:(CGImage*)arg7 thumbnailDataOut:(id*)arg8 imageUTITypeOut:(const _CFString*)arg9 exifPropertiesOut:(id*)arg10 isJPEGOut:(bool*)arg11 imageDataOut:(id*)arg12 imageOrientation:(long long)arg13 ;
+(void)decorateThumbnail:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)dealloc;
-(id)init;
-(id)incomingDirectoryPath;
-(bool)enqueueJob:(id)arg1 ;
-(id)incomingDirectoryPathForPhotoStream;
-(void)_postJobQueueNotificationIsAvailable:(bool)arg1 ;
-(bool)_isHighPriorityJob:(id)arg1 ;
-(void)_incrementJobCount:(id)arg1 ;
-(void)_writerThread;
-(id)cameraAssetExtensionForType:(long long)arg1 ;
-(id)uniqueIncomingPathForAssetWithUUID:(id)arg1 andExtension:(id)arg2 isPhotoStream:(bool)arg3 ;
-(void)_writeJPEGFromIOSurface:(IOSurfaceRef)arg1 toPath:(id)arg2 orientation:(int)arg3 ;
-(bool)saveImageJobToDisk:(id)arg1 ;
-(id)cameraAssetPathForNewAssetWithExtension:(id)arg1 ;
-(void)_removeTransientKeys:(id)arg1 ;
-(void)_decrementJobCount:(id)arg1 ;
-(void)_processImageJob:(id)arg1 ;
-(void)_processDeletePhotoStreamDataJob:(id)arg1 ;
-(id)pathForNewAssetPathAtAlbumDirectoryPath:(id)arg1 assetType:(unsigned)arg2 extension:(id)arg3 ;
-(void)_handleAvalancheCrashRecovery:(id)arg1 ;
-(void)decorateThumbnail:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)_decorateThumbnail:(id)arg1 ;
-(bool)_sufficientDiskSpaceToCopyVideoAtPath:(id)arg1 ;
-(void)_processVideoJob:(id)arg1 ;
-(void)_processVideoSaveJob:(id)arg1 ;
-(void)_processBatchImageJob:(id)arg1 ;
-(void)_processAvalancheJob:(id)arg1 ;
-(void)_processImportImageJob:(id)arg1 ;
-(void)_processSyncedVideoSaveJob:(id)arg1 ;
-(void)_processDeletePhotoStreamAssetsWithUUIDs:(id)arg1 ;
-(void)_enablePhotoStreamJob:(id)arg1 ;
-(void)_processReenqueueAssetUUIDsToPhotoStreamJob:(id)arg1 ;
-(void)_processSavePhotoStreamImageToCameraRollJob:(id)arg1 ;
-(void)_processIngestedSyncedAssetJob:(id)arg1 ;
-(void)_processAutodeleteEmptyAlbumJob:(id)arg1 ;
-(void)_processCrashRecoveryJob:(id)arg1 ;
-(void)_processDaemonJob:(id)arg1 ;
-(void)_processJob:(id)arg1 ;
-(bool)canEnqueueJob:(id)arg1 ;
-(id)uuidFromIncomingFilename:(id)arg1 ;
-(bool)saveToDiskSlalomRegions:(id)arg1 forJob:(id)arg2 ;
-(void)setAvalancheInProgress:(bool)arg1 uuid:(id)arg2 ;
@end
