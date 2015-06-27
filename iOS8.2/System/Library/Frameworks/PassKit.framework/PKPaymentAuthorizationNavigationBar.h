/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:46 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UINavigationBar.h>

@class PKPaymentAuthorizationNavigationBarBackgroundView, UIImageView, UIButton, UIView;

@interface PKPaymentAuthorizationNavigationBar : UINavigationBar {

	PKPaymentAuthorizationNavigationBarBackgroundView* _bgView;
	UIImageView* _logoView;
	UIButton* _customButton;
	id _customButtonTarget;
	SEL _customButtonAction;
	UIView* _separatorView;

}
-(void)setLogoHidden:(char)arg1 animated:(char)arg2 ;
-(void)setCustomButtonTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(void)setCustomButtonHidden:(char)arg1 animated:(char)arg2 ;
-(void)_createSubviewsWithFrame:(CGRect)arg1 ;
-(id)_buttonAttributedStringWithString:(id)arg1 ;
-(id)_titleAttributedStringWithString:(id)arg1 color:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_prepareConstraints;
@end
