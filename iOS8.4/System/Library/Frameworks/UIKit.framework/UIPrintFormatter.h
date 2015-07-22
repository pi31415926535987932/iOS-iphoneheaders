/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:10 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/NSCopying.h>

@class UIPrintPageRenderer;

@interface UIPrintFormatter : NSObject <NSCopying> {

	UIPrintPageRenderer* _printPageRenderer;
	double _maximumContentHeight;
	double _maximumContentWidth;
	UIEdgeInsets _contentInsets;
	UIEdgeInsets _perPageContentInsets;
	long long _startPage;
	long long _pageCount;
	BOOL _needsRecalc;

}

@property (assign,nonatomic) UIPrintPageRenderer * printPageRenderer;              //@synthesize printPageRenderer=_printPageRenderer - In the implementation block
@property (assign,nonatomic) double maximumContentHeight;                          //@synthesize maximumContentHeight=_maximumContentHeight - In the implementation block
@property (assign,nonatomic) double maximumContentWidth;                           //@synthesize maximumContentWidth=_maximumContentWidth - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                           //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets perPageContentInsets;                    //@synthesize perPageContentInsets=_perPageContentInsets - In the implementation block
@property (assign,nonatomic) long long startPage;                                  //@synthesize startPage=_startPage - In the implementation block
@property (nonatomic,readonly) long long pageCount;                                //@synthesize pageCount=_pageCount - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)pageCount;
-(void)_setNeedsRecalc;
-(long long)_recalcPageCount;
-(void)_recalcIfNecessary;
-(CGRect)_pageContentRect:(BOOL)arg1 ;
-(void)removeFromPrintPageRenderer;
-(void)setMaximumContentWidth:(double)arg1 ;
-(void)setMaximumContentHeight:(double)arg1 ;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)setPerPageContentInsets:(UIEdgeInsets)arg1 ;
-(void)setPrintPageRenderer:(UIPrintPageRenderer *)arg1 ;
-(CGRect)rectForPageAtIndex:(long long)arg1 ;
-(void)drawInRect:(CGRect)arg1 forPageAtIndex:(long long)arg2 ;
-(UIPrintPageRenderer *)printPageRenderer;
-(double)maximumContentHeight;
-(double)maximumContentWidth;
-(UIEdgeInsets)contentInsets;
-(UIEdgeInsets)perPageContentInsets;
-(long long)startPage;
-(void)setStartPage:(long long)arg1 ;
@end
