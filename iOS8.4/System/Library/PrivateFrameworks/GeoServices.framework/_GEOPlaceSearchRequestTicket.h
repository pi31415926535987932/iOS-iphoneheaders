/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:37 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/_GEOPlaceRequestTicket.h>
#import <GeoServices/GEOMapServiceSearchTicket.h>

@class NSString, GEOMapServiceTraits, GEOMapRegion;

@interface _GEOPlaceSearchRequestTicket : _GEOPlaceRequestTicket <GEOMapServiceSearchTicket>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@property (nonatomic,readonly) GEOMapRegion * resultBoundingRegion; 
@property (nonatomic,readonly) NSString * searchQuery; 
-(NSString *)searchQuery;
@end
