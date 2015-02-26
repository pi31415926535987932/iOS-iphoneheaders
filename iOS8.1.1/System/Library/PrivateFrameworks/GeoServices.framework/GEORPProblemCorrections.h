/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:50 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSString, GEORPCorrectedCoordinate, NSMutableArray, GEORPCorrectedLabel, GEORPMapLocation, GEORPCorrectedSearch, GEORPDirectionsProblem, GEORPPlaceProblem;

@interface GEORPProblemCorrections : PBCodable <NSCopying> {

	NSString* _comments;
	GEORPCorrectedCoordinate* _correctedCoordinate;
	NSMutableArray* _correctedFields;
	GEORPCorrectedLabel* _correctedLabel;
	GEORPMapLocation* _correctedMapLocation;
	GEORPCorrectedSearch* _correctedSearch;
	GEORPDirectionsProblem* _directionsProblem;
	NSMutableArray* _photos;
	GEORPPlaceProblem* _placeProblem;

}

@property (nonatomic,retain) NSMutableArray * correctedFields;                            //@synthesize correctedFields=_correctedFields - In the implementation block
@property (nonatomic,readonly) BOOL hasCorrectedLabel; 
@property (nonatomic,retain) GEORPCorrectedLabel * correctedLabel;                        //@synthesize correctedLabel=_correctedLabel - In the implementation block
@property (nonatomic,readonly) BOOL hasCorrectedCoordinate; 
@property (nonatomic,retain) GEORPCorrectedCoordinate * correctedCoordinate;              //@synthesize correctedCoordinate=_correctedCoordinate - In the implementation block
@property (nonatomic,readonly) BOOL hasCorrectedSearch; 
@property (nonatomic,retain) GEORPCorrectedSearch * correctedSearch;                      //@synthesize correctedSearch=_correctedSearch - In the implementation block
@property (nonatomic,readonly) BOOL hasCorrectedMapLocation; 
@property (nonatomic,retain) GEORPMapLocation * correctedMapLocation;                     //@synthesize correctedMapLocation=_correctedMapLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasComments; 
@property (nonatomic,retain) NSString * comments;                                         //@synthesize comments=_comments - In the implementation block
@property (nonatomic,retain) NSMutableArray * photos;                                     //@synthesize photos=_photos - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceProblem; 
@property (nonatomic,retain) GEORPPlaceProblem * placeProblem;                            //@synthesize placeProblem=_placeProblem - In the implementation block
@property (nonatomic,readonly) BOOL hasDirectionsProblem; 
@property (nonatomic,retain) GEORPDirectionsProblem * directionsProblem;                  //@synthesize directionsProblem=_directionsProblem - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)comments;
-(void)setComments:(NSString *)arg1 ;
-(void)setPhotos:(NSMutableArray *)arg1 ;
-(void)addPhoto:(id)arg1 ;
-(void)clearPhotos;
-(id)photoAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)photos;
-(void)setCorrectedFields:(NSMutableArray *)arg1 ;
-(void)setCorrectedLabel:(GEORPCorrectedLabel *)arg1 ;
-(void)setCorrectedCoordinate:(GEORPCorrectedCoordinate *)arg1 ;
-(void)setCorrectedSearch:(GEORPCorrectedSearch *)arg1 ;
-(void)setCorrectedMapLocation:(GEORPMapLocation *)arg1 ;
-(void)setPlaceProblem:(GEORPPlaceProblem *)arg1 ;
-(void)setDirectionsProblem:(GEORPDirectionsProblem *)arg1 ;
-(void)addCorrectedField:(id)arg1 ;
-(unsigned long long)correctedFieldsCount;
-(void)clearCorrectedFields;
-(id)correctedFieldAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasCorrectedLabel;
-(BOOL)hasCorrectedCoordinate;
-(BOOL)hasCorrectedSearch;
-(BOOL)hasCorrectedMapLocation;
-(BOOL)hasComments;
-(BOOL)hasPlaceProblem;
-(BOOL)hasDirectionsProblem;
-(NSMutableArray *)correctedFields;
-(GEORPCorrectedLabel *)correctedLabel;
-(GEORPCorrectedCoordinate *)correctedCoordinate;
-(GEORPCorrectedSearch *)correctedSearch;
-(GEORPMapLocation *)correctedMapLocation;
-(GEORPPlaceProblem *)placeProblem;
-(GEORPDirectionsProblem *)directionsProblem;
-(unsigned long long)photosCount;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
