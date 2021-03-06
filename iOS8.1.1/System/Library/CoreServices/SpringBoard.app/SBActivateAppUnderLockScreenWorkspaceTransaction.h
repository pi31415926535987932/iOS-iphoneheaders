/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:07 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SBToAppWorkspaceTransaction.h>

@class SBLockScreenViewControllerBase, SBDisableActiveInterfaceOrientationChangeAssertion;

@interface SBActivateAppUnderLockScreenWorkspaceTransaction : SBToAppWorkspaceTransaction {

	SBLockScreenViewControllerBase* _lockScreenController;
	SBDisableActiveInterfaceOrientationChangeAssertion* _disableActiveOrientationChangeAssertion;
	BOOL _waitingForSceneDestruction;

}
-(id)initWithAlertManager:(id)arg1 application:(id)arg2 lockScreenController:(id)arg3 forRelaunch:(BOOL)arg4 withResult:(/*^block*/id)arg5 ;
-(void)_alertDidActivate;
-(BOOL)shouldToggleSpringBoardStatusBarOnCleanup;
-(BOOL)shouldPerformToAppStateCleanupOnCompletion;
-(void)_kickoffAlertActivation;
-(void)_setupAndActivate;
-(id)initWithAlertManager:(id)arg1 application:(id)arg2 lockScreenController:(id)arg3 ;
-(BOOL)shouldPlaceOutgoingScenesUnderLockOnCompletion;
-(void)dealloc;
-(void)_childTransactionDidComplete:(id)arg1 ;
-(void)_didComplete;
-(void)_begin;
@end

