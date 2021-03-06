/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSMutableArray;

@interface VKPGenericShieldStylePack : PBCodable <NSCopying> {

	NSMutableArray* _genericShields;
	NSMutableArray* _textureAtlas;

}

@property (nonatomic,retain) NSMutableArray * textureAtlas;                //@synthesize textureAtlas=_textureAtlas - In the implementation block
@property (nonatomic,retain) NSMutableArray * genericShields;              //@synthesize genericShields=_genericShields - In the implementation block
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(bool)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)genericShields;
-(id)textureAtlas;
-(void)setTextureAtlas:(id)arg1 ;
-(void)setGenericShields:(id)arg1 ;
-(void)addTextureAtlas:(id)arg1 ;
-(void)addGenericShield:(id)arg1 ;
-(unsigned long long)textureAtlasCount;
-(void)clearTextureAtlas;
-(id)textureAtlasAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)genericShieldsCount;
-(void)clearGenericShields;
-(id)genericShieldAtIndex:(unsigned long long)arg1 ;
@end

