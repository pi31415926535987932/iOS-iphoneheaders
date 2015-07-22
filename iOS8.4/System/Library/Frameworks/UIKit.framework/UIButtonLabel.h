/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:02 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UILabel.h>

@class UIButton;

@interface UIButtonLabel : UILabel {

	BOOL _reverseShadow;
	UIButton* _button;

}
+(id)_defaultAttributes;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setLineBreakMode:(long long)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(CGSize)intrinsicContentSize;
-(void)_setWantsAutolayout;
-(CGSize)shadowOffset;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(void)setMinimumScaleFactor:(double)arg1 ;
-(void)_setMinimumFontSize:(double)arg1 ;
-(id)_defaultAttributes;
-(id)_initWithFrame:(CGRect)arg1 button:(id)arg2 ;
-(void)setReverseShadow:(BOOL)arg1 ;
@end
