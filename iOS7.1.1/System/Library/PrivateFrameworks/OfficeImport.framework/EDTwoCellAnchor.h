/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDAnchor.h>

@interface EDTwoCellAnchor : EDAnchor {

	EDCellAnchorMarker mFrom;
	EDCellAnchorMarker mTo;
	bool mIsRelative;
	int mEditAs;

}
-(id)init;
-(id).cxx_construct;
-(EDCellAnchorMarker)from;
-(bool)isRelative;
-(EDCellAnchorMarker)to;
-(void)setFrom:(EDCellAnchorMarker)arg1 ;
-(void)setTo:(EDCellAnchorMarker)arg1 ;
-(void)setRelative:(bool)arg1 ;
-(void)setEditAs:(int)arg1 ;
-(int)editAs;
@end
