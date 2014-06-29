/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:51 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPTextBaseCommand.h>

@class TSWPStorage, TSWPSelection, TSKAnnotationAuthor;

@interface TSWPApplyHighlightTextCommand : TSWPTextBaseCommand {

	TSWPStorage* _storage;
	TSWPSelection* _selection;
	TSKAnnotationAuthor* _author;
	TSWPStorageTransaction* _undoRedoTransaction;
	bool _remove;
	bool _showComment;

}
+(id)highlightByHighlightingRange:(NSRange)arg1 storage:(id)arg2 context:(id)arg3 author:(id)arg4 outRange:(NSRange*)arg5 outMergedHighlights:(id)arg6 ;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(ApplyHighlightTextCommandArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const ApplyHighlightTextCommandArchive*)arg1 unarchiver:(id)arg2 ;
-(bool)shouldRunSynchronously;
-(void)p_invalidateSelection:(id)arg1 ;
-(void)undoRedo:(bool)arg1 ;
-(id)p_commonInit:(id)arg1 selection:(id)arg2 author:(id)arg3 remove:(bool)arg4 showComment:(bool)arg5 ;
-(id)initWithStorage:(id)arg1 addTextCommentSelection:(id)arg2 showComment:(bool)arg3 author:(id)arg4 ;
-(id)initWithStorage:(id)arg1 removeHighlightSelection:(id)arg2 ;
-(void)dealloc;
-(void)undo;
-(void)redo;
-(void)commit;
-(bool)process;
-(id)actionString;
@end
