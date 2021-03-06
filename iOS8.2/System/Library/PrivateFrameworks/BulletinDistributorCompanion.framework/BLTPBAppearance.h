/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:30 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <BulletinDistributorCompanion/NSCopying.h>

@class BLTPBImage, NSString;

@interface BLTPBAppearance : PBCodable <NSCopying> {

	BLTPBImage* _image;
	NSString* _title;
	char _destructive;
	SCD_Struct_BL1 _has;

}

@property (nonatomic,readonly) char hasTitle; 
@property (nonatomic,retain) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) char hasImage; 
@property (nonatomic,retain) BLTPBImage * image;               //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) char hasDestructive; 
@property (assign,nonatomic) char destructive;                 //@synthesize destructive=_destructive - In the implementation block
-(void)setImage:(BLTPBImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)description;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BLTPBImage *)image;
-(id)dictionaryRepresentation;
-(void)setDestructive:(char)arg1 ;
-(char)hasTitle;
-(void)setHasDestructive:(char)arg1 ;
-(char)hasDestructive;
-(char)destructive;
-(char)hasImage;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

