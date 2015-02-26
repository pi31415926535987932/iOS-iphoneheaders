/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:38 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKCommand.h>

@class TSKReplaceAllCommand, NSString;

@interface TSKReplaceAllChildCommand : TSKCommand {

	TSKReplaceAllCommand* _parent;
	unsigned _countOfItemsReplaced;

}

@property (assign,nonatomic) TSKReplaceAllCommand * parent;                //@synthesize parent=_parent - In the implementation block
@property (nonatomic,readonly) NSString * findString; 
@property (nonatomic,readonly) NSString * replaceString; 
@property (nonatomic,readonly) unsigned long long options; 
@property (nonatomic,readonly) unsigned countOfItemsReplaced;              //@synthesize countOfItemsReplaced=_countOfItemsReplaced - In the implementation block
-(void)saveToArchive:(ReplaceAllChildCommandArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const ReplaceAllChildCommandArchive*)arg1 unarchiver:(id)arg2 ;
-(unsigned)countOfItemsReplaced;
-(NSString *)findString;
-(NSString *)replaceString;
-(id)initWithParentCommand:(id)arg1 ;
-(unsigned long long)options;
-(void)setParent:(TSKReplaceAllCommand *)arg1 ;
-(TSKReplaceAllCommand *)parent;
@end
