/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:13 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIColor.h>

@interface UIDeviceWhiteColor : UIColor {

	double whiteComponent;
	double alphaComponent;
	CGColorRef cachedColor;
	long long cachedColorOnceToken;

}
-(void)dealloc;
-(CGColorRef)CGColor;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)colorWithAlphaComponent:(double)arg1 ;
-(BOOL)getWhite:(double*)arg1 alpha:(double*)arg2 ;
-(void)set;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4 ;
-(void)setFill;
-(id)initWithWhite:(double)arg1 alpha:(double)arg2 ;
-(double)alphaComponent;
-(void)setStroke;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(id)colorSpaceName;
-(CGColorRef)_createCGColorWithAlpha:(double)arg1 ;
-(BOOL)getHue:(double*)arg1 saturation:(double*)arg2 brightness:(double*)arg3 alpha:(double*)arg4 ;
@end
