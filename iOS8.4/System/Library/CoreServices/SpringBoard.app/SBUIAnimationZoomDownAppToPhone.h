/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:31 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SBUIAnimationZoomDownApp.h>

@interface SBUIAnimationZoomDownAppToPhone : SBUIAnimationZoomDownApp {

	BOOL _usingSuperZoomImplementation;
	BOOL _fromPhoneAppToFaceTimeAppDuringCall;

}
-(void)animateZoomWithCompletion:(/*^block*/id)arg1 ;
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(id)_animationProgressDependency;
-(void)_applicationDependencyStateChanged;
-(BOOL)_waitsForApplicationActivationIfNecessary;
-(id)appStatusBarTransitionInfoWithStartEffectivelyHidden:(BOOL)arg1 endStyleRequest:(id)arg2 endOrientation:(long long)arg3 ;
-(void)_cleanupPhonesContextHostView;
-(BOOL)_shouldZoomUsingSuperImplementation;
-(void)_startAnimation;
-(void)dealloc;
@end
