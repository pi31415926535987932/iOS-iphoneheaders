/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIAlertView;

@interface UITwoSidedAlertController : NSObject {

	UIAlertView* _front;
	UIAlertView* _back;
	UIAlertView* _currentAlert;
	id _delegate;

}
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)show;
-(void)alertViewCancel:(id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(bool)arg2 ;
-(void)dismiss;
-(void)alertSheet:(id)arg1 buttonClicked:(int)arg2 ;
-(void)didPresentAlertView:(id)arg1 ;
-(id)createFrontAlert;
-(id)createBackAlert;
-(id)frontAlert;
-(id)backAlert;
-(void)flip;
-(void)frontAlertClickedButtonAtIndex:(long long)arg1 ;
-(void)backAlertClickedButtonAtIndex:(long long)arg1 ;
@end
