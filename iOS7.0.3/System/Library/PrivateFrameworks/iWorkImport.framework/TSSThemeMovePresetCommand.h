/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSKCommand.h>

@protocol TSSPreset;
@class TSSTheme, TSPObject;

@interface TSSThemeMovePresetCommand : TSKCommand {

	TSSTheme* mTheme;
	TSPObject<TSSPreset>* mPreset;
	unsigned mOldIndex;
	unsigned mNewIndex;

}
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)initWithTheme:(id)arg1 preset:(id)arg2 index:(unsigned)arg3 ;
-(void)p_movePresetToFinalIndex:(unsigned)arg1 ;
-(void)dealloc;
-(void)undo;
-(void)redo;
-(void)commit;
-(BOOL)process;
@end
