/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:34 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/HealthPrivacyService.app/HealthPrivacyService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <HealthPrivacyService/HKHealthPrivacyServiceRemoteViewController.h>
#import <HealthPrivacyService/HKAuthorizationSettingsViewControllerDelegate.h>

@class HKHealthStore, UINavigationController, HKAuthorizationSettingsViewController, NSError, NSString;

@interface WDHealthPrivacyServiceViewController : UIViewController <HKHealthPrivacyServiceRemoteViewController, HKAuthorizationSettingsViewControllerDelegate> {

	char _inAuthorizationDelegateTransaction;
	HKHealthStore* _healthStore;
	UINavigationController* _navigationController;
	HKAuthorizationSettingsViewController* _authorizationSettingsController;
	NSError* _transactionError;

}

@property (nonatomic,retain) HKHealthStore * healthStore;                                                          //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) UINavigationController * navigationController;                                        //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) HKAuthorizationSettingsViewController * authorizationSettingsController;              //@synthesize authorizationSettingsController=_authorizationSettingsController - In the implementation block
@property (nonatomic,retain) NSError * transactionError;                                                           //@synthesize transactionError=_transactionError - In the implementation block
@property (assign,nonatomic) char inAuthorizationDelegateTransaction;                                              //@synthesize inAuthorizationDelegateTransaction=_inAuthorizationDelegateTransaction - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(void)_beginAuthorizationSessionWithIdentifier:(id)arg1 ;
-(id)_healthPrivacyHostViewController;
-(HKAuthorizationSettingsViewController *)authorizationSettingsController;
-(void)setAuthorizationSettingsController:(HKAuthorizationSettingsViewController *)arg1 ;
-(NSError *)transactionError;
-(void)setTransactionError:(NSError *)arg1 ;
-(char)inAuthorizationDelegateTransaction;
-(void)setInAuthorizationDelegateTransaction:(char)arg1 ;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(void)_finishWithError:(id)arg1 ;
-(void)dealloc;
-(UINavigationController *)navigationController;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(char)arg1 ;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(void)setSessionIdentifier:(id)arg1 updateDescription:(id)arg2 shareDescription:(id)arg3 ;
-(void)authorizationSettingsViewControllerDidFinish:(id)arg1 error:(id)arg2 ;
@end
