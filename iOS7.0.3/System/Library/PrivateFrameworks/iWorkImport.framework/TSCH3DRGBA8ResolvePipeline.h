/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DRGBA8FramebufferAccumulationSubPipeline.h>
#import <iWorkImport/TSCH3DFramebufferResolver.h>

@interface TSCH3DRGBA8ResolvePipeline : TSCH3DRGBA8FramebufferAccumulationSubPipeline <TSCH3DFramebufferResolver>
-(void)updateShaderEffectsStates;
-(BOOL)prepareFramebuffer;
-(void)setupShaderEffects;
@end
