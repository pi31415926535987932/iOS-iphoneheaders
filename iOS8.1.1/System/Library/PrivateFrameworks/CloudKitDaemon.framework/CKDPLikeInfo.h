/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:00 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@interface CKDPLikeInfo : PBCodable <NSCopying> {

	int _likeCount;
	BOOL _likedByCurrentUser;
	SCD_Struct_CK5 _has;

}

@property (assign,nonatomic) BOOL hasLikeCount; 
@property (assign,nonatomic) int likeCount;                           //@synthesize likeCount=_likeCount - In the implementation block
@property (assign,nonatomic) BOOL hasLikedByCurrentUser; 
@property (assign,nonatomic) BOOL likedByCurrentUser;                 //@synthesize likedByCurrentUser=_likedByCurrentUser - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setLikeCount:(int)arg1 ;
-(void)setHasLikeCount:(BOOL)arg1 ;
-(BOOL)hasLikeCount;
-(void)setLikedByCurrentUser:(BOOL)arg1 ;
-(void)setHasLikedByCurrentUser:(BOOL)arg1 ;
-(BOOL)hasLikedByCurrentUser;
-(int)likeCount;
-(BOOL)likedByCurrentUser;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
