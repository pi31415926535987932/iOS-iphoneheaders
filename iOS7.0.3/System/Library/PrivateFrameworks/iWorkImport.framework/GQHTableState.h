/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class GQDTTable;

@interface GQHTableState : NSObject {

	int mPrevRowIndex;
	int mPrevColumnIndex;
	GQDTTable* mTable;
	vector<unsigned short, std::__1::allocator<unsigned short> >* mCellCountInColumns;
	int mGroupLevel;
	bool mSplitTable;
	double mCurrentTablePosition;
	double mLastAttachmentPosition;
	long mSplitTableIndex;
	double mOriginalTableHeight;

}
-(bool)splitTable;
-(double)currentTablePosition;
-(void)addRowHeight:(float)arg1 ;
-(vector<unsigned short, std::__1::allocator<unsigned short> >*)cellCountInColumns;
-(int)prevRowIndex;
-(int)prevColumnIndex;
-(void)setSplitTable:(bool)arg1 ;
-(void)setSplitTableIndex:(long)arg1 ;
-(void)setOriginalTableHeight:(double)arg1 ;
-(void)setTable:(id)arg1 ;
-(void)setLastAttachmentPosition:(double)arg1 ;
-(void)setPrevRowIndex:(int)arg1 columnIndex:(int)arg2 ;
-(void)setGroupLevel:(int)arg1 ;
-(int)groupLevel;
-(double)lastAttachmentPosition;
-(long)nextSplitTableIndex;
-(double)originalTableHeight;
-(void)dealloc;
-(id)init;
-(id)table;
@end

