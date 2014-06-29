/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:31 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLAlbumProtocol.h>
#import <PhotoLibraryServices/PLIndexMappingCache.h>
#import <PhotoLibraryServices/PLDerivedAlbumOrigin.h>

@protocol PLIndexMappingCache;
@class NSFetchRequest, NSMutableOrderedSet, NSCache, PLManagedAlbum, NSObject, NSString, NSOrderedSet, PLManagedAsset, NSArray, NSDate, NSNumber, UIImage, NSDictionary, NSURL;

@interface PLInFlightAssetsAlbum : NSObject <PLAlbumProtocol, PLIndexMappingCache, PLDerivedAlbumOrigin> {

	NSFetchRequest* _fetchRequest;
	NSMutableOrderedSet* _albumOIDs;
	NSMutableOrderedSet* _inflightAssets;
	unsigned long long _photosCount;
	unsigned long long _videosCount;
	NSCache* __assetCache;
	PLManagedAlbum* _backingAlbum;
	bool _sessionLimited;
	id _weak_assets;
	NSObject<PLIndexMappingCache>* _derivedAlbums[5];
	bool __notificationsEnabled;

}

@property (nonatomic,readonly) PLManagedAlbum * backingAlbum;                            //@synthesize backingAlbum=_backingAlbum - In the implementation block
@property (assign,nonatomic) bool sessionLimited; 
@property (assign,nonatomic) NSMutableOrderedSet * _assets; 
@property (assign,nonatomic) bool _notificationsEnabled;                                 //@synthesize _notificationsEnabled=__notificationsEnabled - In the implementation block
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSOrderedSet * assets; 
@property (nonatomic,readonly) unsigned long long approximateCount; 
@property (nonatomic,readonly) unsigned long long assetsCount; 
@property (nonatomic,readonly) unsigned long long photosCount; 
@property (nonatomic,readonly) unsigned long long videosCount; 
@property (nonatomic,readonly) bool isEmpty; 
@property (nonatomic,retain) PLManagedAsset * keyAsset; 
@property (nonatomic,retain) PLManagedAsset * secondaryKeyAsset; 
@property (nonatomic,retain) PLManagedAsset * tertiaryKeyAsset; 
@property (nonatomic,readonly) bool canShowComments; 
@property (nonatomic,readonly) bool canShowAvalancheStacks; 
@property (nonatomic,readonly) NSArray * localizedLocationNames; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) NSNumber * kind; 
@property (nonatomic,readonly) int kindValue; 
@property (nonatomic,readonly) NSMutableOrderedSet * mutableAssets; 
@property (assign,nonatomic) bool hasUnseenContentBoolValue; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) UIImage * posterImage; 
@property (nonatomic,readonly) bool isLibrary; 
@property (nonatomic,readonly) bool isCameraAlbum; 
@property (nonatomic,readonly) bool isPanoramasAlbum; 
@property (nonatomic,readonly) bool isWallpaperAlbum; 
@property (nonatomic,readonly) bool isPhotoStreamAlbum; 
@property (nonatomic,readonly) bool isCloudSharedAlbum; 
@property (nonatomic,readonly) bool isPendingPhotoStreamAlbum; 
@property (nonatomic,readonly) bool isStandInAlbum; 
@property (nonatomic,readonly) bool isOwnedCloudSharedAlbum; 
@property (nonatomic,readonly) bool isMultipleContributorCloudSharedAlbum; 
@property (nonatomic,readonly) bool canContributeToCloudSharedAlbum; 
@property (nonatomic,readonly) bool shouldDeleteWhenEmpty; 
@property (nonatomic,retain) NSDictionary * slideshowSettings; 
@property (nonatomic,retain) NSString * importSessionID; 
@property (nonatomic,readonly) NSURL * groupURL; 
@property (nonatomic,readonly) id sortingComparator; 
@property (nonatomic,readonly) id sectioningComparator; 
@property (assign,nonatomic) int pendingItemsCount; 
@property (assign,nonatomic) int pendingItemsType; 
@property (nonatomic,readonly) <NSObject><NSCopying> * cachedIndexMapState; 
+(NSObject*)inFlightAssetsAlbumWithBackingAlbum:(NSObject*)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)description;
-(bool)isEmpty;
-(id)title;
-(id)kind;
-(id)localizedTitle;
-(void)addInFlightAsset:(id)arg1 ;
-(void)removeInflightAssets:(id)arg1 ;
-(bool)isCameraAlbum;
-(int)kindValue;
-(bool)isCloudSharedAlbum;
-(id)titleForSectionStartingAtIndex:(unsigned long long)arg1 ;
-(id)displayableIndexesForCount:(unsigned long long)arg1 ;
-(void)reducePendingItemsCountBy:(unsigned long long)arg1 ;
-(void)batchFetchAssets:(id)arg1 ;
-(id)filteredIndexesForPredicate:(id)arg1 ;
-(void)setUINotificationsEnabled:(bool)arg1 ;
-(id)mutableAssets;
-(bool)hasUnseenContentBoolValue;
-(void)setHasUnseenContentBoolValue:(bool)arg1 ;
-(id)posterImage;
-(bool)isLibrary;
-(bool)isPanoramasAlbum;
-(bool)isWallpaperAlbum;
-(bool)isPhotoStreamAlbum;
-(bool)isPendingPhotoStreamAlbum;
-(bool)isStandInAlbum;
-(bool)isOwnedCloudSharedAlbum;
-(bool)isMultipleContributorCloudSharedAlbum;
-(bool)canContributeToCloudSharedAlbum;
-(bool)shouldDeleteWhenEmpty;
-(id)slideshowSettings;
-(void)setSlideshowSettings:(id)arg1 ;
-(id)importSessionID;
-(void)setImportSessionID:(id)arg1 ;
-(id)groupURL;
-(/*^block*/ id)sortingComparator;
-(/*^block*/ id)sectioningComparator;
-(int)pendingItemsCount;
-(void)setPendingItemsCount:(int)arg1 ;
-(int)pendingItemsType;
-(void)setPendingItemsType:(int)arg1 ;
-(bool)canPerformEditOperation:(int)arg1 ;
-(id)uuid;
-(id)assets;
-(unsigned long long)approximateCount;
-(unsigned long long)assetsCount;
-(unsigned long long)photosCount;
-(unsigned long long)videosCount;
-(id)keyAsset;
-(void)setKeyAsset:(id)arg1 ;
-(id)secondaryKeyAsset;
-(void)setSecondaryKeyAsset:(id)arg1 ;
-(id)tertiaryKeyAsset;
-(void)setTertiaryKeyAsset:(id)arg1 ;
-(bool)canShowComments;
-(bool)canShowAvalancheStacks;
-(id)localizedLocationNames;
-(unsigned long long)batchSize;
-(id)fetchRequest;
-(unsigned long long)_fetchedCountForAssetsOfKind:(short)arg1 ;
-(unsigned long long)countForAssetsOfKind:(short)arg1 ;
-(void)unregisterAllDerivedAlbums;
-(void)enumerateDerivedAlbums:(/*^block*/ id)arg1 ;
-(void)registerDerivedAlbum:(NSObject*)arg1 ;
-(bool)hasDerivedIndexMappers;
-(id)assetsByObjectIDAtIndexes:(id)arg1 ;
-(id)backingAlbum;
-(void)set_assets:(id)arg1 ;
-(id)_assets;
-(bool)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2 ;
-(Class)derivedChangeNotificationClass;
-(id)currentStateForChange;
-(id)cachedIndexMapState;
-(id)initWithBackingAlbum:(NSObject*)arg1 ;
-(bool)sessionLimited;
-(id)_albumOIDs;
-(void)_resetAlbumOIDs;
-(id)managedObjectForOID:(id)arg1 ;
-(id)managedObjectsForOIDs:(id)arg1 ;
-(id)managedObjectsAtAlbumIndexes:(id)arg1 ;
-(id)managedObjectAtAlbumIndex:(unsigned long long)arg1 ;
-(void)setSessionLimited:(bool)arg1 ;
-(void)clearAssetCaches;
-(unsigned long long)countOfMergedAssets;
-(unsigned long long)indexInMergedAssetsOfObject:(id)arg1 ;
-(id)objectInMergedAssetsAtIndex:(unsigned long long)arg1 ;
-(void)getMergedAssets:(id*)arg1 range:(NSRange)arg2 ;
-(void)insertObject:(id)arg1 inMergedAssetsAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromMergedAssetsAtIndex:(unsigned long long)arg1 ;
-(void)startNewSession;
-(bool)_notificationsEnabled;
-(void)set_notificationsEnabled:(bool)arg1 ;
@end
