/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 9:47:00 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/AccessibilityBundles/Stocks.axbundle/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface AXStocksGlue : NSObject
+(id)sharedStocksController;
+(id)formattedStringForString:(id)arg1 fractionDigits:(unsigned)arg2 percentStyle:(char)arg3 ;
+(void)accessibilityInitializeBundle;
-(id)selectedStock;
-(double)timeQuoteLastUpdated;
@end

