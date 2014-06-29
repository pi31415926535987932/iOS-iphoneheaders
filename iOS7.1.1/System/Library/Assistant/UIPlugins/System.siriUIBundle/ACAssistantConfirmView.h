/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/System.siriUIBundle/System
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <System/System-Structs.h>
#import <UIKit/UIView.h>

@class SiriUIKeyline, UIButton;

@interface ACAssistantConfirmView : UIView {

	SiriUIKeyline* _verticalKeyline;
	UIButton* _cancelButton;
	UIButton* _confirmButton;

}

@property (nonatomic,readonly) UIButton * cancelButton;               //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,readonly) UIButton * confirmButton;              //@synthesize confirmButton=_confirmButton - In the implementation block
-(void)setCancelText:(id)arg1 ;
-(bool)_showsConfirmButton;
-(void)_showConfirmButton;
-(void)_hideConfirmButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)cancelButton;
-(void).cxx_destruct;
-(id)confirmButton;
-(void)setConfirmText:(id)arg1 ;
@end
