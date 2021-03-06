/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSUIntegerKeyDictionary;

@interface TSTCellDictionary : NSObject {

	TSUIntegerKeyDictionary* mDict;
	opaque_pthread_rwlock_t mDictRWLock;

}
-(void)setCell:(id)arg1 atCellID:(SCD_Struct_TS267)arg2 ;
-(id)cellAtCellID:(SCD_Struct_TS267)arg1 ;
-(void)removeAllCells;
-(id)allCells;
-(void)applyBlockToAllCells:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(id)init;
@end

