/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:52:28 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <GeoServices/NSCopying.h>

@class GEOClientCapabilities, NSString, NSData;

@interface GEORPProblemNotificationAvailabilityRequest : PBRequest <NSCopying> {

	SCD_Struct_GE66* _businessIds;
	SCD_Struct_GE54* _problemTypes;
	GEOClientCapabilities* _clientCapabilities;
	NSString* _countryCode;
	NSData* _devicePushToken;
	int _pinType;
	int _placeType;
	SCD_Struct_GE6 _has;

}

@property (nonatomic,readonly) unsigned problemTypesCount; 
@property (nonatomic,readonly) int* problemTypes; 
@property (nonatomic,readonly) char hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode;                                  //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) char hasDevicePushToken; 
@property (nonatomic,retain) NSData * devicePushToken;                                //@synthesize devicePushToken=_devicePushToken - In the implementation block
@property (nonatomic,readonly) char hasClientCapabilities; 
@property (nonatomic,retain) GEOClientCapabilities * clientCapabilities;              //@synthesize clientCapabilities=_clientCapabilities - In the implementation block
@property (nonatomic,readonly) unsigned businessIdsCount; 
@property (nonatomic,readonly) unsigned long long* businessIds; 
@property (assign,nonatomic) char hasPlaceType; 
@property (assign,nonatomic) int placeType;                                           //@synthesize placeType=_placeType - In the implementation block
@property (assign,nonatomic) char hasPinType; 
@property (assign,nonatomic) int pinType;                                             //@synthesize pinType=_pinType - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setClientCapabilities:(GEOClientCapabilities *)arg1 ;
-(char)hasClientCapabilities;
-(GEOClientCapabilities *)clientCapabilities;
-(void)setPinType:(int)arg1 ;
-(void)setHasPinType:(char)arg1 ;
-(char)hasPinType;
-(int)pinType;
-(void)setPlaceType:(int)arg1 ;
-(void)setHasPlaceType:(char)arg1 ;
-(char)hasPlaceType;
-(void)setDevicePushToken:(NSData *)arg1 ;
-(char)hasDevicePushToken;
-(NSData *)devicePushToken;
-(unsigned)problemTypesCount;
-(void)clearProblemTypes;
-(int)problemTypeAtIndex:(unsigned)arg1 ;
-(void)addProblemType:(int)arg1 ;
-(unsigned)businessIdsCount;
-(void)clearBusinessIds;
-(unsigned long long)businessIdAtIndex:(unsigned)arg1 ;
-(void)addBusinessId:(unsigned long long)arg1 ;
-(int*)problemTypes;
-(void)setProblemTypes:(int*)arg1 count:(unsigned)arg2 ;
-(unsigned long long*)businessIds;
-(void)setBusinessIds:(unsigned long long*)arg1 count:(unsigned)arg2 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(char)hasCountryCode;
-(int)placeType;
-(NSString *)countryCode;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
