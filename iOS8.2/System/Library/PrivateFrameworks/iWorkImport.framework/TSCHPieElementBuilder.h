/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:10 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHElementBuilder.h>

@interface TSCHPieElementBuilder : TSCHElementBuilder
-(unsigned)countOfLabelsForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewTransforms:(CGAffineTransform*)arg4 outNewElementSizes:(CGSize*)arg5 outNewClipRect:(CGRect*)arg6 outNewStrings:(id*)arg7 ;
-(CGPathRef)newElementPathInBody:(id)arg1 forSeries:(id)arg2 outTransform:(CGAffineTransform*)arg3 outElementSize:(CGSize*)arg4 outClipRect:(CGRect*)arg5 outWedgeCenterPoint:(CGPoint*)arg6 outSelectionKnobLocations:(id*)arg7 ;
-(unsigned)countOfElementsInSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewElementBounds:(CGRect*)arg4 outNewClipRects:(CGRect*)arg5 outNewElementPaths:(const CGPath*)arg6 outSelectionKnobLocations:(id*)arg7 ;
-(unsigned)countOfGridLinesInBody:(id)arg1 forAxis:(id)arg2 minor:(char)arg3 outNewLineDescriptors:(/*function pointer*/void**)arg4 ;
-(char)hasAxisLineInBody:(id)arg1 forAxis:(id)arg2 outTransform:(CGAffineTransform*)arg3 outLine:(SCD_Struct_TS450*)arg4 ;
@end

