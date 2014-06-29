/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:31 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DSceneRenderSetup.h>

@interface TSCH3DChartSceneRenderSetup : TSCH3DSceneRenderSetup {

	float mScale;
	ChartProjectedBoundsSpaces mSpaces;

}

@property (assign,nonatomic) float scale; 
@property (assign,nonatomic) ChartProjectedBoundsSpaces spaces; 
+(id)setup;
-(id)renderingCameraFromOriginalCamera:(id)arg1 pipeline:(id)arg2 ;
-(void)setupPipeline:(id)arg1 fromCamera:(id)arg2 ;
-(void)copyFromChartRenderSetup:(id)arg1 ;
-(void)setPixelAlignmentLayer:(id)arg1 ;
-(bool)setupLayerFromLayerProvider:(id)arg1 canvas:(id)arg2 visible:(CGRect)arg3 pixelAlignmentLayer:(id)arg4 ;
-(void)setLayerVisibleBounds:(CGRect)arg1 ;
-(ChartProjectedBoundsSpaces)spaces;
-(ChartProjectedBoundsConverter*)converter;
-(id)realignCamera:(id)arg1 toGlobalPixelAlignedBodyCanvasBounds:(const box<glm::detail::tvec2<float> >*)arg2 renderingBodyCanvasBounds:(const box<glm::detail::tvec2<float> >*)arg3 scale:(float)arg4 samples:(float)arg5 correspondingNoramlizedBounds:(const box<glm::detail::tvec2<float> >*)arg6 ;
-(void)setSpaces:(ChartProjectedBoundsSpaces)arg1 ;
-(id)init;
-(float)scale;
-(void)setScale:(float)arg1 ;
-(id).cxx_construct;
@end
