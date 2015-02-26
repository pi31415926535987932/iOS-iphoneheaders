/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:50 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class TPPageMaster;

@interface TPHeaderFooterFragmentEnumerator : NSEnumerator {

	int _fragmentIndex;
	int _headerFooterType;
	TPPageMaster* _pageMaster;

}

@property (nonatomic,retain) TPPageMaster * pageMaster;              //@synthesize pageMaster=_pageMaster - In the implementation block
@property (assign,nonatomic) int fragmentIndex;                      //@synthesize fragmentIndex=_fragmentIndex - In the implementation block
@property (assign,nonatomic) int headerFooterType;                   //@synthesize headerFooterType=_headerFooterType - In the implementation block
-(void)p_incrementFragmentIndex;
-(int)fragmentIndex;
-(void)p_incrementHeaderFooterType;
-(int)headerFooterType;
-(TPPageMaster *)pageMaster;
-(void)setFragmentIndex:(int)arg1 ;
-(void)setHeaderFooterType:(int)arg1 ;
-(id)initWithPageMaster:(id)arg1 ;
-(void)setPageMaster:(TPPageMaster *)arg1 ;
-(void)dealloc;
-(id)nextObject;
@end
