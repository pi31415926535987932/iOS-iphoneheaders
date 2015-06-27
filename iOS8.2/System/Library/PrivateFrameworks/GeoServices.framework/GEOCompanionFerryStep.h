/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:10 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@interface GEOCompanionFerryStep : PBCodable <NSCopying> {

	int _maneuverType;
	SCD_Struct_GE4 _has;

}

@property (assign,nonatomic) char hasManeuverType; 
@property (assign,nonatomic) int maneuverType;                  //@synthesize maneuverType=_maneuverType - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setManeuverType:(int)arg1 ;
-(void)setHasManeuverType:(char)arg1 ;
-(char)hasManeuverType;
-(int)maneuverType;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
