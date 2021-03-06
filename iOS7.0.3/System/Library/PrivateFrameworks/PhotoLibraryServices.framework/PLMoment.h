/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLManagedObject.h>
#import <PhotoLibraryServices/PLAssetContainer.h>

@class PLRevGeoCompoundNameInfo, NSString, NSDate, NSOrderedSet, PLMomentList, PLMomentLibrary, NSData, PLManagedAsset, NSArray;

@interface PLMoment : PLManagedObject <PLAssetContainer> {

	PLRevGeoCompoundNameInfo* _cachedPrimaryNameInfo;
	PLRevGeoCompoundNameInfo* _cachedSecondaryNameInfo;
	BOOL _loadedNameInfo;
	BOOL isRegisteredForChanges;
	BOOL didRegisteredWithUserInterfaceContext;

}

@property (nonatomic,@dynamic,retain) NSString * uuid; 
@property (nonatomic,@dynamic,retain) NSDate * endDate; 
@property (nonatomic,@dynamic,retain) NSDate * representativeDate; 
@property (nonatomic,@dynamic,retain) NSDate * startDate; 
@property (nonatomic,@dynamic,retain) NSString * title; 
@property (assign,nonatomic,@dynamic) int cachedCount; 
@property (assign,nonatomic,@dynamic) int cachedPhotosCount; 
@property (assign,nonatomic,@dynamic) int cachedVideosCount; 
@property (nonatomic,@dynamic,retain) NSOrderedSet * assets; 
@property (nonatomic,@dynamic,retain) PLMomentList * yearMomentList; 
@property (nonatomic,@dynamic,retain) PLMomentList * megaMomentList; 
@property (nonatomic,@dynamic,retain) PLMomentLibrary * momentLibrary; 
@property (nonatomic,@dynamic,retain) NSData * approximateLocationData; 
@property (nonatomic,@dynamic,retain) NSData * reverseLocationData; 
@property (assign,nonatomic,@dynamic) BOOL reverseLocationDataIsValid; 
@property (assign,nonatomic,@dynamic) short generationType; 
@property (assign,nonatomic) BOOL isRegisteredForChanges; 
@property (assign,nonatomic) BOOL didRegisteredWithUserInterfaceContext; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned approximateCount; 
@property (nonatomic,readonly) unsigned assetsCount; 
@property (nonatomic,readonly) unsigned photosCount; 
@property (nonatomic,readonly) unsigned videosCount; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,retain) PLManagedAsset * keyAsset; 
@property (nonatomic,retain) PLManagedAsset * secondaryKeyAsset; 
@property (nonatomic,retain) PLManagedAsset * tertiaryKeyAsset; 
@property (nonatomic,readonly) BOOL canShowComments; 
@property (nonatomic,readonly) BOOL canShowAvalancheStacks; 
@property (nonatomic,readonly) NSArray * localizedLocationNames; 
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)entityName;
+(id)allMomentsRequiringAnalysisInManagedObjectContext:(id)arg1 error:(id*)arg2 ;
+(id)allMomentsInManagedObjectContext:(id)arg1 error:(id*)arg2 ;
+(id)allAssetsIncludedInMomentsInManagedObjectContext:(id)arg1 error:(id*)arg2 ;
+(id)allMomentsInLibrary:(id)arg1 ;
+(id)allAssetsIncludedInMomentsInLibrary:(id)arg1 ;
+(id)insertNewMomentFromCluster:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)insertNewMomentInManagedObjectContext:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(BOOL)isEmpty;
-(id)localizedTitle;
-(BOOL)isCloudSharedAlbum;
-(id)mutableAssets;
-(CGImageRef)posterImage;
-(id)groupURL;
-(BOOL)canPerformEditOperation:(int)arg1 ;
-(unsigned)approximateCount;
-(unsigned)assetsCount;
-(unsigned)photosCount;
-(unsigned)videosCount;
-(id)keyAsset;
-(void)setKeyAsset:(id)arg1 ;
-(id)secondaryKeyAsset;
-(void)setSecondaryKeyAsset:(id)arg1 ;
-(id)tertiaryKeyAsset;
-(void)setTertiaryKeyAsset:(id)arg1 ;
-(BOOL)canShowComments;
-(BOOL)canShowAvalancheStacks;
-(id)localizedLocationNames;
-(BOOL)supportsDiagnosticInformation;
-(id)diagnosticInformation;
-(void)delete;
-(void)awakeFromInsert;
-(BOOL)isRegisteredForChanges;
-(void)setDidRegisteredWithUserInterfaceContext:(BOOL)arg1 ;
-(void)registerForChanges;
-(BOOL)didRegisteredWithUserInterfaceContext;
-(void)unregisterForChanges;
-(void)insertAssets:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeAssetsAtIndexes:(id)arg1 ;
-(void)replaceAssetsAtIndexes:(id)arg1 withAssets:(id)arg2 ;
-(void)awakeFromFetch;
-(void)willTurnIntoFault;
-(void)willSave;
-(void)didTurnIntoFault;
-(void)setIsRegisteredForChanges:(BOOL)arg1 ;
-(BOOL)isMeaningful;
-(id)approximateLocation;
-(void)_updateCachedNameInfoIfNeeded;
-(void)updateMomentFromCluster:(id)arg1 ;
-(BOOL)validateForInsert:(id*)arg1 ;
-(BOOL)_validateForInsertOrUpdate:(id*)arg1 ;
-(BOOL)validateForUpdate:(id*)arg1 ;
-(void)insertObject:(id)arg1 inAssetsAtIndex:(unsigned)arg2 ;
-(void)removeObjectFromAssetsAtIndex:(unsigned)arg1 ;
-(void)replaceObjectInAssetsAtIndex:(unsigned)arg1 withObject:(id)arg2 ;
-(void)addAssetsObject:(id)arg1 ;
-(void)removeAssetsObject:(id)arg1 ;
-(void)addAssets:(id)arg1 ;
-(void)removeAssets:(id)arg1 ;
@end

