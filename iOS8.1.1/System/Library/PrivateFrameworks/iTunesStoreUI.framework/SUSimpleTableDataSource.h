/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:08 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUTableDataSource.h>

@class NSArray;

@interface SUSimpleTableDataSource : SUTableDataSource {

	Class _cellConfigurationClass;
	NSArray* _objects;

}

@property (nonatomic,retain) Class cellConfigurationClass;              //@synthesize cellConfigurationClass=_cellConfigurationClass - In the implementation block
@property (nonatomic,retain) NSArray * objects;                         //@synthesize objects=_objects - In the implementation block
-(NSArray *)objects;
-(void)dealloc;
-(long long)numberOfRowsInSection:(long long)arg1 ;
-(long long)numberOfSections;
-(id)cellForIndexPath:(id)arg1 ;
-(void)configureCell:(id)arg1 forIndexPath:(id)arg2 ;
-(double)cellHeightForIndexPath:(id)arg1 ;
-(void)reloadCellContexts;
-(id)objectForIndexPath:(id)arg1 ;
-(Class)cellConfigurationClass;
-(void)setCellConfigurationClass:(Class)arg1 ;
-(void)setObjects:(NSArray *)arg1 ;
@end

