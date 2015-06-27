/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:35:28 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SBUIFullscreenAlertController.h>

@class UIView;

@interface SBUISlidingFullscreenAlertController : SBUIFullscreenAlertController {

	UIView* _topBar;
	UIView* _bottomBar;
	char _animatingIn;
	char _animatingOut;

}

@property (nonatomic,readonly) UIView * topBar;                 //@synthesize topBar=_topBar - In the implementation block
@property (nonatomic,readonly) UIView * bottomBar;              //@synthesize bottomBar=_bottomBar - In the implementation block
-(void)dealloc;
-(id)backgroundView;
-(void)_updateLayoutForStatusBarAndInterfaceOrientation;
-(void)viewDidLoad;
-(UIView *)topBar;
-(UIView *)bottomBar;
-(char)isSlidingViewController;
-(char)viewIsReadyToBeRemoved;
-(char)hasTranslucentBackground;
-(char)shouldShowBottomBar;
-(void)_performAnimateDisplayIn;
-(float)_slideOutAnimationDelay;
-(float)_slideOutAnimationDuration;
-(void)_viewAnimatedOut;
-(char)_animatingToHomescreenWallpaper;
-(float)_animationDelayForOthersActivation;
-(void)updateSpringBoardInPreparationForTransparentDismiss;
-(char)isShowingWallpaper;
-(void)finishedAnimatingIn;
-(void)viewWillAnimateIn;
-(void)animateViewIn;
-(void)viewWillAnimateOut;
-(void)animateViewOut;
-(id)newTopBar;
-(id)newBottomBar;
@end
