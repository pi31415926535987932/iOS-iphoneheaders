/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:20 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPContainedObject.h>

@class KNSlideNode, NSMutableArray, NSMutableDictionary, TSUPointerKeyDictionary, NSArray;

@interface KNSlideTree : TSPContainedObject {

	KNSlideNode* mRootSlideNode;
	NSMutableArray* mSlideNodeCache;
	NSMutableArray* mDisplayedSlideNodeCache;
	NSMutableDictionary* mSlideNodesForUniqueIdentifiersCache;
	NSMutableDictionary* mSlideNodesForFormulaReferenceNamesCache;
	TSUPointerKeyDictionary* mFormulaReferenceNamesForSlideNodesCache;

}

@property (nonatomic,retain) KNSlideNode * rootSlideNode; 
@property (nonatomic,readonly) NSArray * slideNodes; 
@property (nonatomic,readonly) NSArray * visibleSlideNodes; 
@property (nonatomic,retain) NSArray * displayedSlideNodes; 
-(void)saveToArchive:(SlideTreeArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const SlideTreeArchive*)arg1 unarchiver:(id)arg2 owner:(id)arg3 ;
-(NSArray *)slideNodes;
-(NSArray *)visibleSlideNodes;
-(id)formulaReferenceNameForSlideNode:(id)arg1 ;
-(id)slideNodeForFormulaReferenceName:(id)arg1 caseSensitive:(char)arg2 ;
-(id)slideNamesMatchingPrefix:(id)arg1 ;
-(unsigned)slideNumberForSlideNode:(id)arg1 ;
-(KNSlideNode *)rootSlideNode;
-(void)insertSlideNode:(id)arg1 intoSlideNode:(id)arg2 atIndex:(unsigned)arg3 dolcContext:(id)arg4 ;
-(unsigned)indexOfSlideNode:(id)arg1 ;
-(id)slideNodeAtIndex:(unsigned)arg1 ignoreHiddenNodes:(char)arg2 ;
-(void)invalidateSlideNameCache;
-(void)p_clearSlideNodeCache;
-(void)p_cacheSlideNodes;
-(void)setDisplayedSlideNodes:(NSArray *)arg1 ;
-(id)slidesUsingMasterSlide:(id)arg1 ;
-(void)p_addSlideNodeAndDescendantsOfSlideNode:(id)arg1 toArray:(id)arg2 slideNodesForUniqueIdentifiersDictionary:(id)arg3 slideNodesForFormulaReferencesDictionary:(id)arg4 formulaReferenceNamesForSlideNodesDictionary:(id)arg5 visibleSlidesSoFar:(unsigned*)arg6 hiddenSlidesSoFar:(unsigned*)arg7 ;
-(void)p_addSlideNodeAndDescendantsOfSlideNode:(id)arg1 toArray:(id)arg2 slideNodesForUniqueIdentifiersDictionary:(id)arg3 slideNodesForFormulaReferencesDictionary:(id)arg4 formulaReferenceNamesForSlideNodesDictionary:(id)arg5 ;
-(void)setRootSlideNode:(KNSlideNode *)arg1 ;
-(void)moveSlideNode:(id)arg1 inSlideNode:(id)arg2 toIndex:(unsigned)arg3 ;
-(void)removeSlideNode:(id)arg1 fromSlideNode:(id)arg2 ;
-(void)addSlideNode:(id)arg1 atDepth:(int)arg2 dolcContext:(id)arg3 ;
-(NSArray *)displayedSlideNodes;
-(id)orderedSlideNodesInSelection:(id)arg1 ;
-(void)reloadDisplayedNodes;
-(id)unhiddenSlideNodeAtIndex:(unsigned)arg1 ;
-(id)slideNodeWithUniqueIdentifier:(id)arg1 ;
-(unsigned)visiblePageCountIsSeparatedByBuilds:(char)arg1 ;
-(unsigned)byBuildPageIndexForSlideIndex:(unsigned)arg1 andEventIndex:(unsigned)arg2 ;
-(void)slideIndex:(unsigned*)arg1 andEventIndex:(unsigned*)arg2 forByBuildPageIndex:(unsigned)arg3 ;
-(unsigned)numberOfSlidesUsingMasterSlide:(id)arg1 ;
-(id)initWithOwner:(id)arg1 ;
-(void)dealloc;
-(void)removeAll;
@end

