/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface GEOResourceManager : NSObject
+(id)sharedManager;
-(id)pathForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 ;
-(id)dataForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 ;
-(id)allResourceNames;
-(id)dataForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(/*^block*/ id)arg3 ;
-(id)pathForResourceWithName:(id)arg1 fallbackBundle:(id)arg2 fallbackNameHandler:(/*^block*/ id)arg3 ;
@end
