/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:31:12 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iLifeSlideshow/iLifeSlideshow-Structs.h>
@class MPDocument, NSRecursiveLock, NSMutableDictionary, NSLock, MPWeighter;

@interface MPAuthoringController : NSObject {

	char _isAuthoring;
	MPDocument* _authoredDocument;
	unsigned _seed;
	NSRecursiveLock* _beatLock;
	NSMutableDictionary* _cachedROIInformation;
	NSLock* _cachedROILock;
	MPWeighter* _weighter;
	MPWeighter* _transitionWeighter;
	MPWeighter* _shuffleWeighter;
	NSMutableDictionary* _stats;
	id _delegate;
	int _logLevel;
	double _logTiming;
	float _placesDistanceSeperation;
	char _placesDebug;
	char _cancelAuthoring;
	char _skipApplyingSettings;

}
+(id)sharedController;
+(void)releaseSharedController;
+(id)transitionAnimatedSetsBetween:(id)arg1 and:(id)arg2 ;
-(void)cleanup:(char)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)cleanup;
-(unsigned)authorLayerGroup:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3 ;
-(void)startLogging;
-(void)setAuthoredDocument:(id)arg1 ;
-(id)shuffleImagesByRating:(id)arg1 withOptions:(id)arg2 ;
-(void)clearROICache;
-(void)cacheROIInformationForImages:(id)arg1 withOptions:(id)arg2 ;
-(id)createAudioPlayListFromAudioPaths:(id)arg1 andOptions:(id)arg2 ;
-(void)createBeatsThreaded:(id)arg1 ;
-(void)authorPlacesWithImages:(id)arg1 forLayerGroup:(id)arg2 inDocument:(id)arg3 withOptions:(id)arg4 ;
-(void)setupClustersWithPaths:(id)arg1 withOptions:(id)arg2 ;
-(id)orderImages:(id)arg1 withOptions:(id)arg2 ;
-(id)slidesWithImages:(id)arg1 andOptions:(id)arg2 ;
-(id)dynamicLayerWithImages:(id)arg1 withOptions:(id)arg2 ;
-(id)effectsForImages:(id)arg1 withOptions:(id)arg2 ;
-(id)createLayerWithImages:(id)arg1 effects:(id)arg2 andOptions:(id)arg3 ;
-(void)checkForOffsetsForLayers:(id)arg1 withOptions:(id)arg2 ;
-(void)scaleDurationsInLayer:(id)arg1 withOptions:(id)arg2 ;
-(id)beatsForAudioPlaylist:(id)arg1 withOptions:(id)arg2 ;
-(void)beatAlignLayer:(id)arg1 toBeats:(id)arg2 withOptions:(id)arg3 ;
-(void)performInitialFaceDetectionInGroup:(id)arg1 withOptions:(id)arg2 ;
-(void)configureBreakInformationToEffect:(id)arg1 inDocument:(id)arg2 startingIndex:(int)arg3 count:(int)arg4 removeOldIndex:(int)arg5 ;
-(void)createAnimatedSetsInLayer:(id)arg1 withOptions:(id)arg2 ;
-(void)addStyledCaptionToSlide:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3 ;
-(void)configureFiltersInDocument:(id)arg1 withOptions:(id)arg2 ;
-(void)configureTransitionsInDocument:(id)arg1 withOptions:(id)arg2 ;
-(void)scaleDurationsInDocument:(id)arg1 withOptions:(id)arg2 ;
-(void)matchDurationsForLayers:(id)arg1 withOptions:(id)arg2 ;
-(void)fillDurationsForLayers:(id)arg1 withOptions:(id)arg2 ;
-(void)reconfigureColorSchemeForLayerGroup:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3 ;
-(void)configureIntroInDocument:(id)arg1 withOptions:(id)arg2 ;
-(void)configureOutroInDocument:(id)arg1 withOptions:(id)arg2 ;
-(id)_collectVersionInformationFromStyle:(id)arg1 ;
-(void)finishLogging;
-(void)upgradeLayerGroup:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3 ;
-(id)effectContainersWithImages:(id)arg1 effects:(id)arg2 andOptions:(id)arg3 ;
-(void)scaleDurationsInEffectContainers:(id)arg1 withOptions:(id)arg2 ;
-(id)transitionFromOptions:(id)arg1 firstEffectContainer:(id)arg2 nextEffectContainer:(id)arg3 ;
-(void)scaleDurationsForLayerGroup:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3 ;
-(void)scaleDurationsInPlacesForDocument:(id)arg1 withOptions:(id)arg2 ;
-(unsigned)authorDocument:(id)arg1 withOptions:(id)arg2 ;
-(void)_reorderImagesInDocument:(id)arg1 withOptions:(id)arg2 ;
-(void)reconfigureTitleEffectForLayerGroup:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3 ;
-(void)setTitleTextToColor:(CGColorRef)arg1 forLayerGroup:(id)arg2 inDocument:(id)arg3 withOptions:(id)arg4 ;
-(id)exportTransitionFromOptions:(id)arg1 ;
-(id)loopTransitionFromOptions:(id)arg1 ;
-(char)canLayerGroupFitToAudio:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3 requiredAudioDuration:(double*)arg4 ;
-(char)canDocumentFitToAudio:(id)arg1 withOptions:(id)arg2 requiredAudioDuration:(double*)arg3 ;
-(void)upgradeDocument:(id)arg1 withOptions:(id)arg2 ;
-(id)effectContainersWithPaths:(id)arg1 forDocument:(id)arg2 withOptions:(id)arg3 ;
-(id)transitionFromOptions:(id)arg1 ;
-(void)beatAlignLayers:(id)arg1 toAudioPlaylist:(id)arg2 forDocument:(id)arg3 withOptions:(id)arg4 ;
-(void)reconfigureImagesInDocument:(id)arg1 withOptions:(id)arg2 ;
-(void)reconfigureTitleEffectInDocument:(id)arg1 withOptions:(id)arg2 ;
-(void)reconfigureColorSchemeInDocument:(id)arg1 withOptions:(id)arg2 ;
-(char)prepareDocumentForExport:(id)arg1 withOptions:(id)arg2 ;
-(void)prepareDocumentForPlayback:(id)arg1 withOptions:(id)arg2 ;
-(char)canScaleToAudioInDocument:(id)arg1 withOptions:(id)arg2 ;
-(void)cleanupClusters;
-(id)createLayersForPlacesForImages:(id)arg1 forDocument:(id)arg2 withOptions:(id)arg3 ;
-(void)findUsableClustersForUserDefinedSlideOrderPresentation:(id)arg1 inClusters:(id)arg2 ;
-(id)findEffectIDInPresetArray:(id)arg1 forImages:(id)arg2 withOptions:(id)arg3 ;
-(void)populateWeighter:(id)arg1 withEffects:(id)arg2 andOptions:(id)arg3 ;
-(id)findEffectIDInWeighter:(id)arg1 images:(id)arg2 startingIndex:(int)arg3 count:(int)arg4 triesToFind:(int*)arg5 constraints:(id)arg6 previousTags:(id)arg7 ;
-(int)bestCountFromClusterForEffectWithImages:(id)arg1 atStartIndex:(int)arg2 withWeighter:(id)arg3 usedIndex:(int*)arg4 ;
-(char)imagesHaveMovie:(id)arg1 start:(int)arg2 count:(int)arg3 ;
-(char)determineIfSlideDisplayesForTheWholeDurationForEffect:(id)arg1 presetID:(id)arg2 atIndex:(int)arg3 inStyleID:(id)arg4 ;
-(void)scaleLayerToMatchAudio:(id)arg1 withOptions:(id)arg2 ;
-(void)beatAlignEffectContainers:(id)arg1 toBeats:(id)arg2 withOptions:(id)arg3 ;
-(void)scaleLayerToMatchAudio:(id)arg1 withBeats:(id)arg2 withOptions:(id)arg3 ;
-(double)findClosestBeatForTime:(double)arg1 inBeats:(id)arg2 atIndex:(int*)arg3 ;
-(id)filtersForSlideFromOptions:(id)arg1 ;
-(id)filtersForLayerFromOptions:(id)arg1 ;
-(id)frameFromOptions:(id)arg1 ;
-(id)filtersForEffectFromOptions:(id)arg1 ;
-(id)createEffectToTransitionMapWithOptions:(id)arg1 ;
-(void)populateWeighter:(id)arg1 withTransitions:(id)arg2 andOptions:(id)arg3 ;
-(id)sortImagePaths:(id)arg1 toAspectRatiosInEffectPresetID:(id)arg2 withOptions:(id)arg3 ;
-(id)pickRandomPathsInArray:(id)arg1 excludingPaths:(id)arg2 count:(int)arg3 ;
-(void)setTitleTextToColor:(CGColorRef)arg1 inDocument:(id)arg2 withOptions:(id)arg3 ;
-(char)isAuthoring;
-(id)authoredDocument;
-(void)createAnimatedSetsInLayer2:(id)arg1 withOptions:(id)arg2 ;
-(int)indexOfBeatWithTimestamp:(double)arg1 inBeats:(id)arg2 inRange:(NSRange)arg3 ;
-(id)_grabAndRemoveTitleEffectFromDocument:(id)arg1 withOptions:(id)arg2 ;
-(int)_numberOfSlidesForOutroInLayer:(id)arg1 withOptions:(id)arg2 ;
-(void)_readdTitleEffect:(id)arg1 toDocument:(id)arg2 withOptions:(id)arg3 ;
-(void)removeSlidesAtIndicies:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3 ;
-(void)insertVideoPaths:(id)arg1 atIndex:(int)arg2 inDocument:(id)arg3 withOptions:(id)arg4 ;
-(void)removeStyledCaptionFromSlide:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3 ;
-(id)_addVideoPaths:(id)arg1 toEndOfLayer:(id)arg2 inDocument:(id)arg3 withOptions:(id)arg4 ;
-(void)_checkForEmptyLayersInDocument:(id)arg1 ;
-(void)combineEffectsNearSlide:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3 ;
-(void)moveSlidesFromIndicies:(id)arg1 toIndex:(int)arg2 inDocument:(id)arg3 withOptions:(id)arg4 ;
-(void)combineSlides:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3 ;
-(int)_countOfEmptyContainersInIntroOfLayer:(id)arg1 withOptions:(id)arg2 ;
-(id)_mapsSortedByCity:(id)arg1 hasCities:(char*)arg2 ;
-(id)_mapsSortedByState:(id)arg1 ;
-(void)_gatherLocationInfoForMaps:(id)arg1 ;
-(char)_tryAndCollapseMaps:(id)arg1 ;
-(void)_renameMapsAndPins:(id)arg1 withOptions:(id)arg2 ;
-(id)_createMapsWithImages:(id)arg1 withOptions:(id)arg2 ;
-(id)_placeEffectContainersForPhotos:(id)arg1 options:(id)arg2 ;
-(int)mapTypeForPoint0:(CGPoint)arg1 point1:(CGPoint)arg2 point2:(CGPoint)arg3 map:(id)arg4 flight:(id)arg5 ;
-(int)tileSetForMap1:(int)arg1 map2:(int)arg2 needsWater:(char)arg3 ;
-(char)rect:(CGRect)arg1 intersectsRects:(id)arg2 index:(int*)arg3 ;
-(void)removeAllMapsInDocument:(id)arg1 ;
-(void)recreateMapsInDocument:(id)arg1 ;
@end

