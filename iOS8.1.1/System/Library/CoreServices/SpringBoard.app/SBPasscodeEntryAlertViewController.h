/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:06 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAlert.h>
#import <SpringBoard/SBUIPasscodeLockViewDelegate.h>

@class NSString;

@interface SBPasscodeEntryAlertViewController : SBAlert <SBUIPasscodeLockViewDelegate> {

	BOOL _attemptingUnlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)alertDisplayViewWithSize:(CGSize)arg1 ;
-(void)_passcodeLockViewPasscodeEntered:(id)arg1 viaMesa:(BOOL)arg2 ;
-(void)animatePasscodeViewsToVisible:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)deactivate;
-(void)passcodeLockViewPasscodeDidChange:(id)arg1 ;
-(void)passcodeLockViewPasscodeEntered:(id)arg1 ;
-(void)passcodeLockViewCancelButtonPressed:(id)arg1 ;
-(void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1 ;
-(BOOL)hasTranslucentBackground;
@end

