/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:31 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartRenderCycle.h>

@class NSArray;

@interface TSCH3DChartCGContextRenderCycle : TSCH3DChartRenderCycle {

	NSArray* mImages;

}
-(BOOL)shouldRenderLegendIntoSeparateLayer;
-(void)presentRenderingWithPresenterInfo:(const PresenterInfo*)arg1 ;
-(id)initWithRenderCycleInfo:(const RenderCycleInfo*)arg1 ;
-(BOOL)allocateFramebufferWithAllocationInfo:(const FramebufferAllocationInfo*)arg1 ;
-(BOOL)runPipeline:(id)arg1 ;
-(void)switchToRenderPresenter:(id)arg1 ;
-(void)restoreDefaultRenderPresenter;
-(void)setupTextureSizeHintForAllocationInfo:(const FramebufferAllocationInfo*)arg1 ;
-(void)p_setupPipelineWithProcessor:(id)arg1 session:(id)arg2 scene:(id)arg3 antialiasing:(BOOL)arg4 ;
-(id)tileFBOResource;
-(void)allocateTileFramebufferWithTileAllocationInfo:(const TileFramebufferAllocationInfo*)arg1 ;
-(void)dealloc;
-(Class)layerClass;
@end
