/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:01:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Stocks.app/Stocks
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKit/UIView.h>

@class LabelSequenceView, Stock;

@interface ChartTitleLabel : UIView {

	LabelSequenceView* _leftView;
	LabelSequenceView* _rightView;
	float _width;
	Stock* _stock;
	Stock* _deferredStock;

}
-(void)prepareStringsWithStock:(id)arg1 width:(float)arg2 ;
-(void)setLabelsHidden:(BOOL)arg1 ;
-(void)_stockWillBeRemoved:(id)arg1 ;
-(void)refreshStrings;
-(void)prepareStringsForDeferredStockIfNeeded;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void).cxx_destruct;
@end

