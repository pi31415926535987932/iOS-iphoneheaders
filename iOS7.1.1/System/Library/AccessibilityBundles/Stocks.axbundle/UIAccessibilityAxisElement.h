/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:19:44 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/AccessibilityBundles/Stocks.axbundle/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@class NSArray;

@interface UIAccessibilityAxisElement : UIAccessibilityElement {

	NSArray* _axisLabels;
	long long _chartInterval;
	bool _isAxisX;
	bool _isDetailMode;

}

@property (nonatomic,retain) NSArray * axisLabels;                 //@synthesize axisLabels=_axisLabels - In the implementation block
@property (assign,nonatomic) long long chartInterval;              //@synthesize chartInterval=_chartInterval - In the implementation block
@property (assign,nonatomic) bool isAxisX;                         //@synthesize isAxisX=_isAxisX - In the implementation block
@property (assign,nonatomic) bool isDetailMode;                    //@synthesize isDetailMode=_isDetailMode - In the implementation block
-(void)setIsDetailMode:(bool)arg1 ;
-(void)setIsAxisX:(bool)arg1 ;
-(void)setAxisLabels:(id)arg1 ;
-(id)axisLabels;
-(bool)isAxisX;
-(bool)isDetailMode;
-(void)dealloc;
-(id)accessibilityLabel;
-(CGRect)accessibilityFrame;
-(long long)chartInterval;
-(void)setChartInterval:(long long)arg1 ;
@end

