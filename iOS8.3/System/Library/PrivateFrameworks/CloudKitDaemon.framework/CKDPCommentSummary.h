/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:05:32 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class CKDPCommentedOnId, CKDPLikeInfo;

@interface CKDPCommentSummary : PBCodable <NSCopying> {

	CKDPCommentedOnId* _identifier;
	CKDPLikeInfo* _likeInfo;

}

@property (nonatomic,readonly) char hasIdentifier; 
@property (nonatomic,retain) CKDPCommentedOnId * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) char hasLikeInfo; 
@property (nonatomic,retain) CKDPLikeInfo * likeInfo;                     //@synthesize likeInfo=_likeInfo - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(CKDPCommentedOnId *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(CKDPCommentedOnId *)arg1 ;
-(id)dictionaryRepresentation;
-(char)hasIdentifier;
-(void)setLikeInfo:(CKDPLikeInfo *)arg1 ;
-(char)hasLikeInfo;
-(CKDPLikeInfo *)likeInfo;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
