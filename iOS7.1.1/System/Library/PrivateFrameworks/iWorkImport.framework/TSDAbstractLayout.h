/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableArray, TSDLayoutGeometry, TPPageLayout, NSArray;

@interface TSDAbstractLayout : NSObject {

	TSDAbstractLayout* mParent;
	NSMutableArray* mChildren;
	TSDLayoutGeometry* mGeometry;
	CGPoint mInterimPosition;
	bool mInterimPositionXSet;
	bool mInterimPositionYSet;
	CGPoint mLastInterimPosition;
	bool mLastInterimPositionXSet;
	bool mLastInterimPositionYSet;

}

@property (nonatomic,readonly) unsigned pageIndex; 
@property (nonatomic,readonly) TPPageLayout * pageLayout; 
@property (nonatomic,copy) TSDLayoutGeometry * geometry; 
@property (assign,nonatomic) TSDAbstractLayout * parent; 
@property (nonatomic,readonly) TSDAbstractLayout * root; 
@property (nonatomic,copy) NSArray * children; 
@property (assign,nonatomic) double interimPositionX; 
@property (assign,nonatomic) double interimPositionY; 
-(id)pageLayout;
-(unsigned)pageIndex;
-(CGAffineTransform)transformInRoot;
-(CGRect)alignmentFrameForProvidingGuidesInRoot;
-(void)offsetGeometryBy:(CGPoint)arg1 ;
-(CGRect)alignmentFrame;
-(CGRect)rectInRoot:(CGRect)arg1 ;
-(bool)canRotateChildLayout:(id)arg1 ;
-(bool)supportsParentRotation;
-(CGPoint)positionInRootForAttachmentPositioner;
-(id)geometryInRoot;
-(CGRect)frameInRoot;
-(bool)supportsRotation;
-(CGRect)alignmentFrameInRoot;
-(CGPoint)alignmentFrameOriginForFixingInterimPosition;
-(id)geometryInRoot:(id)arg1 ;
-(bool)isRootLayoutForInspectorGeometry;
-(void)fixTransformFromLastInterimPosition;
-(id)additionalDependenciesForChildLayout:(id)arg1 ;
-(CGRect)frameForCulling;
-(CGRect)rectInParent:(CGRect)arg1 ;
-(CGAffineTransform)transformInParent;
-(bool)providesGuidesForChildLayouts;
-(id)parentLayoutForProvidingGuides;
-(void)addLayoutsInRect:(CGRect)arg1 toArray:(id)arg2 deep:(bool)arg3 ;
-(void)p_fixTransformFromInterimPosition:(CGPoint)arg1 interimPositionXSet:(bool)arg2 interimPositionYSet:(bool)arg3 ;
-(id)geometryInParent;
-(id)geometryForTransforming;
-(id)visibleGeometries;
-(CGRect)frameInParent;
-(bool)isAxisAlignedUnflippedInRoot;
-(id)layoutsForProvidingGuidesForChildLayouts;
-(void)insertChild:(id)arg1 below:(id)arg2 ;
-(void)insertChild:(id)arg1 above:(id)arg2 ;
-(void)exchangeChildAtIndex:(unsigned long long)arg1 withChildAtIndex:(unsigned long long)arg2 ;
-(bool)shouldSnapWhileResizing;
-(double)interimPositionX;
-(void)setInterimPositionX:(double)arg1 ;
-(double)interimPositionY;
-(void)setInterimPositionY:(double)arg1 ;
-(void)fixTransformFromInterimPosition;
-(bool)supportsResize;
-(bool)supportsInspectorPositioning;
-(bool)supportsFlipping;
-(void)removeFromParent;
-(void)dealloc;
-(id)init;
-(CGRect)frame;
-(CGAffineTransform)transform;
-(id)geometry;
-(void)setGeometry:(id)arg1 ;
-(void)setChildren:(id)arg1 ;
-(void)addChild:(id)arg1 ;
-(void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)replaceChild:(id)arg1 with:(id)arg2 ;
-(id)children;
-(id)root;
-(void)setParent:(id)arg1 ;
-(id)parent;
@end
