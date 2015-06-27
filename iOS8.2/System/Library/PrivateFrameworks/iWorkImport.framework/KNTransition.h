/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:21 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPContainedObject.h>
#import <iWorkImport/KNInspectableAnimation.h>

@class KNTransitionAttributes, NSString, KNAnimationInfo, NSArray, KNAnimationPluginMenu, TSUColor, NSSet;

@interface KNTransition : TSPContainedObject <KNInspectableAnimation> {

	KNTransitionAttributes* mAttributes;

}

@property (nonatomic,readonly) NSString * effect; 
@property (nonatomic,readonly) char isMagicMove; 
@property (nonatomic,copy) KNTransitionAttributes * attributes; 
@property (nonatomic,readonly) KNAnimationInfo * animationInfo; 
@property (nonatomic,readonly) NSArray * localizedEventTriggerNames; 
@property (nonatomic,readonly) KNAnimationPluginMenu * directionMenu; 
@property (nonatomic,readonly) unsigned directionType; 
@property (nonatomic,readonly) char supportsDirection; 
@property (nonatomic,readonly) char supportsDuration; 
@property (nonatomic,readonly) char supportsBounce; 
@property (nonatomic,readonly) char hasAutomaticTrigger; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double delay; 
@property (nonatomic,readonly) unsigned direction; 
@property (nonatomic,readonly) TSUColor * color; 
@property (nonatomic,readonly) float customTwist; 
@property (nonatomic,readonly) int customMosaicSize; 
@property (nonatomic,readonly) int customMosaicType; 
@property (nonatomic,readonly) char customBounce; 
@property (nonatomic,readonly) char customMotionBlur; 
@property (nonatomic,readonly) int customTimingCurve; 
@property (nonatomic,readonly) char customMagicMoveFadeUnmatchedObjects; 
@property (nonatomic,readonly) int customTextDelivery; 
@property (nonatomic,readonly) NSSet * inspectableAttributes; 
@property (nonatomic,readonly) char canEditAnimations; 
+(unsigned)directionTypeForEffect:(id)arg1 ;
+(char)hasDirectionOptionForEffect:(id)arg1 ;
-(void)saveToArchive:(TransitionArchive*)arg1 archiver:(id)arg2 ;
-(char)isMagicMove;
-(id)initWithArchive:(const TransitionArchive*)arg1 unarchiver:(id)arg2 owner:(id)arg3 ;
-(unsigned)directionType;
-(char)canEditAnimations;
-(NSSet *)inspectableAttributes;
-(id)initWithOwner:(id)arg1 attributes:(id)arg2 ;
-(unsigned long long)p_keynoteVersionFromUnarchiver:(id)arg1 ;
-(char)supportsDirection;
-(char)supportsDuration;
-(int)customTextDelivery;
-(KNAnimationPluginMenu *)directionMenu;
-(char)supportsBounce;
-(char)customBounce;
-(char)customMotionBlur;
-(char)hasAutomaticTrigger;
-(NSArray *)localizedEventTriggerNames;
-(float)customTwist;
-(int)customMosaicSize;
-(int)customMosaicType;
-(int)customTimingCurve;
-(char)customMagicMoveFadeUnmatchedObjects;
-(id)initWithOwner:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(double)duration;
-(double)delay;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)direction;
-(TSUColor *)color;
-(NSString *)effect;
-(KNTransitionAttributes *)attributes;
-(void)setAttributes:(KNTransitionAttributes *)arg1 ;
-(KNAnimationInfo *)animationInfo;
@end
