/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHRenderer.h>

@interface TSCHChartTitleRenderer : TSCHRenderer
-(bool)canRenderSelectionPath:(id)arg1 ;
-(void)renderIntoContext:(CGContextRef)arg1 selection:(id)arg2 ;
-(void)addSelection:(id)arg1 toCGPath:(CGPathRef)arg2 ;
-(bool)canEditTextForSelectionPath:(id)arg1 ;
-(CGRect)frameForEditingTextForSelectionPath:(id)arg1 ;
-(void)p_renderIntoContext:(CGContextRef)arg1 visible:(CGRect)arg2 ;
-(void)p_drawTitle:(CGContextRef)arg1 rangePtr:(NSRange*)arg2 ;
-(void)useEditedString:(id)arg1 ;
@end
