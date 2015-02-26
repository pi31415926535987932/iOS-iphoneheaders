/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:03 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class EDTable, EDReference;

@interface EFTableData : NSObject {

	EFRefTok mRefTok;
	EDTable* mTable;
	EDReference* mReference;
	int mMakeups;

}
-(void)dealloc;
-(id)table;
-(unsigned short*)ptgData;
-(id)initWith:(EFStrTok*)arg1 ;
-(const EFRefTok*)refTok;
-(id)reference;
-(void)makeup:(id)arg1 with:(int)arg2 ;
@end
