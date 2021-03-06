/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:50 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableArray, NSArray;

@interface TPSectionHint : NSObject {

	NSMutableArray* _pageHints;
	unsigned long long _documentStartPageIndex;

}

@property (nonatomic,readonly) NSArray * pageHints;                                        //@synthesize pageHints=_pageHints - In the implementation block
@property (assign,nonatomic) unsigned long long documentStartPageIndex;                    //@synthesize documentStartPageIndex=_documentStartPageIndex - In the implementation block
@property (nonatomic,readonly) NSRange documentPageRange; 
@property (nonatomic,readonly) unsigned long long pageCount; 
@property (nonatomic,readonly) unsigned long long pageCountWithoutFillerPage; 
@property (nonatomic,readonly) unsigned long long lastPageIndex; 
-(id)initWithArchive:(const SectionHintArchive*)arg1 unarchiver:(id)arg2 ;
-(id)copyForArchiving;
-(NSRange)documentPageRange;
-(NSArray *)pageHints;
-(void)setDocumentStartPageIndex:(unsigned long long)arg1 ;
-(id)pageHintForPageIndex:(unsigned long long)arg1 ;
-(void)trimPageHintsFromPageIndex:(unsigned long long)arg1 ;
-(void)setPageHints:(NSArray *)arg1 ;
-(unsigned long long)documentStartPageIndex;
-(void)saveToArchive:(SectionHintArchive*)arg1 archiver:(id)arg2 context:(id)arg3 shouldArchiveHintBlock:(/*^block*/id)arg4 ;
-(BOOL)hasPageHintOfKind:(int)arg1 atPageIndex:(unsigned long long)arg2 ;
-(unsigned long long)pageCountWithoutFillerPage;
-(unsigned long long)lastPageIndex;
-(BOOL)hasPageHintOfKind:(int)arg1 beforePageIndex:(unsigned long long)arg2 ;
-(BOOL)containsDocumentPageIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned long long)pageCount;
@end

