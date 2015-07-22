/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:51 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>

@protocol AAUICloudKitUpgradeViewControllerDelegate;
@class UIScrollView, UIView, UIImageView, UILabel, UIButton, UIActivityIndicatorView, NSArray, NSDictionary;

@interface AAUICloudKitUpgradeViewController : ACUIViewController {

	UIScrollView* _scrollView;
	UIView* _contentView;
	UIImageView* _cloudKitLogo;
	UILabel* _titleLabel;
	UILabel* _warningLabel;
	UIButton* _upgradeButton;
	UIActivityIndicatorView* _spinner;
	NSArray* _devicesThatNeedUpgrade;
	NSArray* _devicesThatCannotUpgrade;
	NSDictionary* _plainTextAttributes;
	NSDictionary* _boldTextAttributes;
	NSDictionary* _compactBoldTextAttributes;
	id<AAUICloudKitUpgradeViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AAUICloudKitUpgradeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_upgradeWarningText;
-(id)_warningForAllDevicesBeingIneligibleForUpgrade;
-(id)_warningForSomeDevicesBeingEligibleForUpgrade;
-(id)_commaSeparatedStringWithBoldNamesForDevices:(id)arg1 ;
-(void)_loadListOfDevicesImpactedByMigration;
-(double)_heightForText:(id)arg1 withFont:(id)arg2 constrainedToWidth:(double)arg3 ;
-(double)_heightForAttributedTextInLabel:(id)arg1 ;
-(void)_showFailedUpgradeAlert;
-(void)_handleSaveCompletionForAccount:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(void)_upgradeButtonWasTapped:(id)arg1 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)setDelegate:(id<AAUICloudKitUpgradeViewControllerDelegate>)arg1 ;
-(id)init;
-(id<AAUICloudKitUpgradeViewControllerDelegate>)delegate;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(void)viewDidLoad;
-(void)_dismiss;
-(id)specifiers;
@end
