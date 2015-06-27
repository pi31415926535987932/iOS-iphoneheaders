/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:52:11 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSMutableArray;

@interface GEOPDMultiLocalizedString : PBCodable <NSCopying> {

	NSMutableArray* _localizedStrings;

}

@property (nonatomic,retain) NSMutableArray * localizedStrings;              //@synthesize localizedStrings=_localizedStrings - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setLocalizedStrings:(NSMutableArray *)arg1 ;
-(void)addLocalizedString:(id)arg1 ;
-(void)clearLocalizedStrings;
-(NSMutableArray *)localizedStrings;
-(id)bestLocalizedName;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)localizedStringsCount;
-(id)localizedStringAtIndex:(unsigned)arg1 ;
@end
