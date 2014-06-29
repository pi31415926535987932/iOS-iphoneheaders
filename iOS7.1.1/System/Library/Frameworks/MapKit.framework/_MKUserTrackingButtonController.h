/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:23 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MKUserTrackingButtonTarget, MKUserTrackingView;
@class UIImageView, UIButton, UIActivityIndicatorView;

@interface _MKUserTrackingButtonController : NSObject {

	<MKUserTrackingButtonTarget>* _target;
	<MKUserTrackingView>* _userTrackingView;
	long long _state;
	UIImageView* _imageView;
	UIButton* _button;
	UIActivityIndicatorView* _activityIndicatorView;

}

@property (nonatomic,retain) <MKUserTrackingView> * userTrackingView;              //@synthesize userTrackingView=_userTrackingView - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                            //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) long long state;                                      //@synthesize state=_state - In the implementation block
-(void)_goToNextMode:(id)arg1 ;
-(id)initWithTarget:(id)arg1 userTrackingView:(id)arg2 imageView:(id)arg3 button:(id)arg4 ;
-(id)_imageForState:(long long)arg1 controlState:(unsigned long long)arg2 ;
-(id)userTrackingView;
-(void)setUserTrackingView:(id)arg1 ;
-(void)_authorizationStatusChanged:(id)arg1 ;
-(bool)_shouldAnimateFromState:(long long)arg1 toState:(long long)arg2 ;
-(id)_shrinkAnimation;
-(id)_contentAnimation;
-(void)_reloadState;
-(id)_expandAnimation;
-(id)_activityIndicatorView;
-(void)dealloc;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(bool)arg2 ;
-(id)imageView;
-(void)_updateState;
-(void).cxx_destruct;
@end
