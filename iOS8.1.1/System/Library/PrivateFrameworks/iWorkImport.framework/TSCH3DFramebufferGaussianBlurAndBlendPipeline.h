/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:32 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DFramebufferGaussianBlurPipeline.h>

@class TSCH3DGLFramebuffer;

@interface TSCH3DFramebufferGaussianBlurAndBlendPipeline : TSCH3DFramebufferGaussianBlurPipeline {

	float mBlendFactor;
	TSCH3DGLFramebuffer* mBlendTexture;

}

@property (nonatomic,retain) TSCH3DGLFramebuffer * blendTexture; 
@property (assign,nonatomic) float blendFactor; 
+(id)effectsArray;
-(void)updateShaderEffectsStates;
-(TSCH3DGLFramebuffer *)blendTexture;
-(void)setBlendFactor:(float)arg1 ;
-(void)setBlendTexture:(TSCH3DGLFramebuffer *)arg1 ;
-(void)dealloc;
-(float)blendFactor;
@end
