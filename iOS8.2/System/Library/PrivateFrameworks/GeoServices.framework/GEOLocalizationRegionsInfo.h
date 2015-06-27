/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:10 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSDictionary, NSLock;

@interface GEOLocalizationRegionsInfo : NSObject {

	NSDictionary* _regions;
	NSLock* _regionsLock;

}
-(void)dealloc;
-(id)init;
-(void)reset;
-(char)needsLocalizationForKey:(const GEOTileKey*)arg1 language:(id)arg2 ;
@end
