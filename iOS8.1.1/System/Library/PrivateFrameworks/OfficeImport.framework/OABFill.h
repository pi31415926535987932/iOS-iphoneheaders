/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:54 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OABFill : NSObject
+(void)readGradientFill:(id)arg1 fromFillPropertiesManager:(id)arg2 colorPalette:(id)arg3 ;
+(void)readImageFill:(id)arg1 fromFillPropertiesManager:(id)arg2 colorPalette:(id)arg3 ;
+(void)addStopsFromArray:(const OABGradientStop*)arg1 stopCount:(int)arg2 inverted:(BOOL)arg3 startPos:(float)arg4 endPos:(float)arg5 toGradientFill:(id)arg6 fillPropertiesManager:(id)arg7 ;
+(id)readFillFromFillPropertiesManager:(id)arg1 colorPalette:(id)arg2 ;
@end

