/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:05 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIButton.h>

@class UIImageView, NSString;

@interface TPLegacyButton : UIButton {

	UIImageView* _plusSeparator;
	int _color;
	NSString* _plusSeparatedTitle;
	BOOL _forceReLayout;
	BOOL _currentlyLayingOut;
	BOOL _useStandardSizing;

}

@property (assign) BOOL useStandardSizing;              //@synthesize useStandardSizing=_useStandardSizing - In the implementation block
+(double)defaultHeight;
+(double)defaultHeightForColor:(int)arg1 ;
+(id)declineButtonImage;
+(id)declineVideoButtonImage;
+(id)answerButtonImage;
+(id)acceptVideoButtonImage;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(int)buttonColor;
-(id)initWithTitle:(id)arg1 icon:(id)arg2 color:(int)arg3 frame:(CGRect)arg4 ;
-(void)setPlusSeparatedTitle:(id)arg1 ;
-(void)setButtonColor:(int)arg1 ;
-(void)setMinimumTitleFontSize:(double)arg1 ;
-(void)setMinimumTitleFontSize:(double)arg1 maximumTitleFontSize:(double)arg2 ;
-(void)setTitleImagePadding:(double)arg1 ;
-(void)setIconVerticalOffset:(double)arg1 ;
-(void)setTitleVerticalOffset:(double)arg1 ;
-(void)setDisabledButtonColor:(int)arg1 ;
-(void)_setButtonColor:(int)arg1 ;
-(void)_adjustIconColor;
-(void)_setDisabledButtonColor:(int)arg1 ;
-(BOOL)useStandardSizing;
-(void)setUseStandardSizing:(BOOL)arg1 ;
@end
