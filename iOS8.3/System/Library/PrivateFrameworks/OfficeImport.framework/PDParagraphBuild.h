/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:53:25 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/PDBuild.h>

@class NSMutableArray;

@interface PDParagraphBuild : PDBuild {

	NSMutableArray* mTimeNodeDataList;
	double mAutoAdvanceTime;
	char mIsReversedParagraphOrder;
	int mBuildLevel;
	int mType;

}
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(double)autoAdvanceTime;
-(char)isReversedParagraphOrder;
-(int)buildLevel;
-(id)timeNodeDataList;
-(unsigned)timeNodeDataListCount;
-(id)timeNodeDataAtIndex:(unsigned)arg1 ;
-(id)addTimeNodeData;
-(void)setAutoAdvanceTime:(double)arg1 ;
-(void)setIsReversedParagraphOrder:(char)arg1 ;
-(void)setBuildLevel:(int)arg1 ;
@end
