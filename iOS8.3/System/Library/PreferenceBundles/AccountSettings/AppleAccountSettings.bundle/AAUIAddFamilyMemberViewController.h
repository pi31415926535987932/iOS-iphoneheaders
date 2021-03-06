/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:40:53 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <AppleAccountSettings/RemoteUIControllerDelegate.h>
#import <AppleAccountSettings/AAUIPickInviteeDelegate.h>

@class ACAccount, ACAccountStore, SSAccount, AAGrandSlamSigner, NSOperationQueue, RemoteUIController, NSMutableURLRequest, UIActivityIndicatorView, UIBarButtonItem, UINavigationItem, NSData, AAUIPickInviteeViewController, NSString;

@interface AAUIAddFamilyMemberViewController : UINavigationController <RemoteUIControllerDelegate, AAUIPickInviteeDelegate> {

	ACAccount* _appleAccount;
	ACAccountStore* _accountStore;
	SSAccount* _iTunesAccount;
	AAGrandSlamSigner* _grandSlamSigner;
	NSOperationQueue* _networkingQueue;
	RemoteUIController* _remoteUIController;
	NSMutableURLRequest* _startRemoteUIRequest;
	char _isShowingSpinner;
	UIActivityIndicatorView* _spinnerView;
	UIBarButtonItem* _originalRightBarButtonItem;
	UINavigationItem* _navigationItemShowingSpinner;
	NSData* _pushToken;
	AAUIPickInviteeViewController* _pickInviteeVC;

}

@property (assign,nonatomic,__weak) id<AAUIAddFamilyMemberDelegate><UINavigationControllerDelegate> delegate; 
@property (nonatomic,copy) NSString * createChildAccountButtonTitle; 
@property (nonatomic,copy) NSString * createChildAccountInstructions; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showActivitySpinnerInNavigationBar;
-(void)hideActivitySpinnerInNavigationBar;
-(id)_itunesAccount;
-(void)dealloc;
-(char)shouldAutorotate;
-(id)initWithGrandSlamSigner:(id)arg1 ;
-(void)remoteUIController:(id)arg1 willLoadRequest:(id)arg2 ;
-(void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2 ;
-(void)remoteUIControllerDidDismiss:(id)arg1 ;
-(void)pickInviteeViewControllerWantsChildAccountFlow:(id)arg1 ;
-(void)pickInviteeViewController:(id)arg1 didCompleteWithSuccess:(char)arg2 ;
-(NSString *)createChildAccountButtonTitle;
-(void)setCreateChildAccountButtonTitle:(NSString *)arg1 ;
-(NSString *)createChildAccountInstructions;
-(void)setCreateChildAccountInstructions:(NSString *)arg1 ;
-(id)_pushToken;
@end

