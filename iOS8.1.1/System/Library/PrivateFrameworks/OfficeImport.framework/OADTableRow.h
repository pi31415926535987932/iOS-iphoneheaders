/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:57 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface OADTableRow : NSObject {

	NSMutableArray* mCells;
	float mHeight;

}
-(void)dealloc;
-(id)init;
-(float)height;
-(void)setHeight:(float)arg1 ;
-(unsigned long long)cellCount;
-(id)cellAtIndex:(unsigned long long)arg1 ;
-(id)addCell;
@end

