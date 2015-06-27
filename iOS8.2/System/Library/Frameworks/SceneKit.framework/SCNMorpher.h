/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:50 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNAnimatable.h>
#import <SceneKit/NSSecureCoding.h>

@class SCNOrderedDictionary, NSArray, NSMutableArray, NSString;

@interface SCNMorpher : NSObject <SCNAnimatable, NSSecureCoding> {

	id _reserved;
	_C3DMorph* _morpher;
	unsigned _isPresentationInstance : 1;
	int _calculationMode;
	SCNOrderedDictionary* _animations;
	NSArray* _targets;
	NSMutableArray* _weights;
	NSString* _name;
	char _shouldMorphNormals;

}

@property (nonatomic,copy) NSArray * targets; 
@property (assign,nonatomic) int calculationMode; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)SCNJSExportProtocol;
+(id)morpher;
+(id)morpherWithMorphRef:(_C3DMorph*)arg1 ;
+(char)supportsSecureCoding;
-(id)scene;
-(C3DSceneRef)sceneRef;
-(void*)__CFObject;
-(void)_syncObjCAnimations;
-(_C3DAnimationManager*)animationManager;
-(void)_pauseAnimation:(char)arg1 forKey:(id)arg2 ;
-(void)pauseAnimationForKey:(id)arg1 ;
-(void)resumeAnimationForKey:(id)arg1 ;
-(char)isAnimationForKeyPaused:(id)arg1 ;
-(void)removeAnimationForKey:(id)arg1 fadeOutDuration:(float)arg2 ;
-(void)__removeAnimation:(id)arg1 forKey:(id)arg2 ;
-(_C3DAnimationChannel*)copyAnimationChannelForKeyPath:(id)arg1 ;
-(char)isPausedOrPausedByInheritance;
-(id)presentationInstance;
-(void)_syncObjCModel;
-(void)_syncEntityObjCModel;
-(_C3DMorph*)morphRef;
-(int)calculationMode;
-(id)initWithMorphRef:(_C3DMorph*)arg1 ;
-(id)initPresentationMorpherWithMorphRef:(_C3DMorph*)arg1 ;
-(id)presentationMorpher;
-(void)setWeight:(float)arg1 forTargetAtIndex:(unsigned)arg2 ;
-(float)weightForTargetAtIndex:(unsigned)arg1 ;
-(NSArray *)targets;
-(void)setTargets:(NSArray *)arg1 ;
-(void)_customEncodingOfSCNMorpher:(id)arg1 ;
-(void)_customDecodingOfSCNMorpher:(id)arg1 ;
-(void)setWeights:(id)arg1 ;
-(void)setShouldMorphNormals:(char)arg1 ;
-(void)_didDecodeSCNMorpher:(id)arg1 ;
-(char)shouldMorphNormals;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copy;
-(NSString *)description;
-(id)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)animationKeys;
-(id)animationForKey:(id)arg1 ;
-(void)removeAnimationForKey:(id)arg1 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)setCalculationMode:(int)arg1 ;
-(void)removeAllAnimations;
-(void)setIdentifier:(id)arg1 ;
-(void)addAnimation:(id)arg1 ;
@end
