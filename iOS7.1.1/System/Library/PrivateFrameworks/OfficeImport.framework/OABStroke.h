/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OABStroke : NSObject
+(int)readPresetDashStyle:(int)arg1 ;
+(int)readLineEndType:(int)arg1 ;
+(int)readLineEndWidth:(int)arg1 ;
+(int)readLineEndLength:(int)arg1 ;
+(int)readCapStyle:(int)arg1 ;
+(int)readCompoundType:(int)arg1 ;
+(int)writePresetDashStyle:(int)arg1 ;
+(void)writePresetDashStyleForCustomDash:(id)arg1 toStroke:(EshStroke*)arg2 state:(id)arg3 ;
+(int)writeLineEndType:(int)arg1 ;
+(int)writeLineEndWidth:(int)arg1 ;
+(int)writeLineEndLength:(int)arg1 ;
+(int)writeCapStyle:(int)arg1 ;
+(int)writeCompoundType:(int)arg1 ;
+(void)writeStroke:(id)arg1 toStroke:(EshStroke*)arg2 state:(id)arg3 ;
+(id)readStrokeFromShapeBaseManager:(id)arg1 colorPalette:(id)arg2 ;
+(id)readLineEndWithType:(int)arg1 width:(int)arg2 length:(int)arg3 ;
@end

