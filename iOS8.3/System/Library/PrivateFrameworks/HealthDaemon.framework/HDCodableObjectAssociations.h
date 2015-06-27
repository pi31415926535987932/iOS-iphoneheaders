/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:57:59 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <HealthDaemon/NSCopying.h>

@class NSData;

@interface HDCodableObjectAssociations : PBCodable <NSCopying> {

	NSData* _associationUuid;
	NSData* _objectUuids;

}

@property (nonatomic,readonly) char hasAssociationUuid; 
@property (nonatomic,retain) NSData * associationUuid;               //@synthesize associationUuid=_associationUuid - In the implementation block
@property (nonatomic,readonly) char hasObjectUuids; 
@property (nonatomic,retain) NSData * objectUuids;                   //@synthesize objectUuids=_objectUuids - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setAssociationUuid:(NSData *)arg1 ;
-(void)setObjectUuids:(NSData *)arg1 ;
-(char)hasAssociationUuid;
-(char)hasObjectUuids;
-(NSData *)associationUuid;
-(NSData *)objectUuids;
-(id)initWithAssociationUUID:(id)arg1 ;
-(id)decodedAssociationUUID;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
