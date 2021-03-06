/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:04:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MapsDataClassMigrator/MapsDataClassMigrator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, GEOPlaceSearchRequest, GEOPlaceSearchResponse;

@interface PersistentSearchRequestHistoryItem : PBCodable <NSCopying> {

	double _latitude;
	double _latitudeSpan;
	double _longitude;
	double _longitudeSpan;
	double _position;
	NSString* _displayQuery;
	NSString* _location;
	GEOPlaceSearchRequest* _repeatRequest;
	GEOPlaceSearchRequest* _request;
	GEOPlaceSearchResponse* _response;
	NSString* _syncIdentifier;
	BOOL _withMultipleLocations;
	SCD_Struct_Pe8 _has;

}

@property (nonatomic,readonly) BOOL hasRequest; 
@property (nonatomic,retain) GEOPlaceSearchRequest * request;                    //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayQuery; 
@property (nonatomic,retain) NSString * displayQuery;                            //@synthesize displayQuery=_displayQuery - In the implementation block
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) NSString * location;                                //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasWithMultipleLocations; 
@property (assign,nonatomic) BOOL withMultipleLocations;                         //@synthesize withMultipleLocations=_withMultipleLocations - In the implementation block
@property (assign,nonatomic) BOOL hasLatitude; 
@property (assign,nonatomic) double latitude;                                    //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) BOOL hasLongitude; 
@property (assign,nonatomic) double longitude;                                   //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) BOOL hasLatitudeSpan; 
@property (assign,nonatomic) double latitudeSpan;                                //@synthesize latitudeSpan=_latitudeSpan - In the implementation block
@property (assign,nonatomic) BOOL hasLongitudeSpan; 
@property (assign,nonatomic) double longitudeSpan;                               //@synthesize longitudeSpan=_longitudeSpan - In the implementation block
@property (nonatomic,readonly) BOOL hasResponse; 
@property (nonatomic,retain) GEOPlaceSearchResponse * response;                  //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) BOOL hasRepeatRequest; 
@property (nonatomic,retain) GEOPlaceSearchRequest * repeatRequest;              //@synthesize repeatRequest=_repeatRequest - In the implementation block
@property (nonatomic,readonly) BOOL hasSyncIdentifier; 
@property (nonatomic,retain) NSString * syncIdentifier;                          //@synthesize syncIdentifier=_syncIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasPosition; 
@property (assign,nonatomic) double position;                                    //@synthesize position=_position - In the implementation block
-(id)syncIdentifier;
-(void)setSyncIdentifier:(id)arg1 ;
-(void)setDisplayQuery:(id)arg1 ;
-(void)setWithMultipleLocations:(BOOL)arg1 ;
-(BOOL)hasSyncIdentifier;
-(id)repeatRequest;
-(id)displayQuery;
-(BOOL)hasWithMultipleLocations;
-(BOOL)withMultipleLocations;
-(BOOL)hasLatitude;
-(BOOL)hasLongitude;
-(BOOL)hasLatitudeSpan;
-(double)latitudeSpan;
-(BOOL)hasLongitudeSpan;
-(double)longitudeSpan;
-(void)setRepeatRequest:(id)arg1 ;
-(BOOL)hasDisplayQuery;
-(void)setHasPosition:(BOOL)arg1 ;
-(BOOL)hasRequest;
-(void)setLatitudeSpan:(double)arg1 ;
-(void)setLongitudeSpan:(double)arg1 ;
-(BOOL)hasResponse;
-(BOOL)hasRepeatRequest;
-(void)setHasWithMultipleLocations:(BOOL)arg1 ;
-(void)setHasLatitude:(BOOL)arg1 ;
-(void)setHasLongitude:(BOOL)arg1 ;
-(void)setHasLatitudeSpan:(BOOL)arg1 ;
-(void)setHasLongitudeSpan:(BOOL)arg1 ;
-(void)setResponse:(id)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(void)setRequest:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setPosition:(double)arg1 ;
-(double)position;
-(id)response;
-(id)request;
-(id)location;
-(id)dictionaryRepresentation;
-(BOOL)hasPosition;
-(BOOL)readFrom:(id)arg1 ;
-(double)latitude;
-(double)longitude;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasLocation;
-(void)setLocation:(id)arg1 ;
@end

