/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <RadioUI/RUAddSeedViewControllerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UIImage, RUAddSeedViewController, NSArray, RUParallelScrollView, UIView, UIAlertView, MPImageCache, RUMetricsController, NSMutableArray, RadioStation, UITableViewCell, UITextField, RUStationTuningView, _RUStationSettingsTableView;

@interface RUStationSettingsViewController : UIViewController <RUAddSeedViewControllerDelegate, UITableViewDataSource, UITableViewDelegate> {

	UIImage* _addLikeBanImage;
	RUAddSeedViewController* _addSeedViewController;
	BOOL _addingForLike;
	NSArray* _bannedItems;
	RUParallelScrollView* _containerScrollView;
	UIView* _deleteTintView;
	UIAlertView* _deletionAlertView;
	MPImageCache* _imageCache;
	BOOL _isEditing;
	NSArray* _likedItems;
	RUMetricsController* _metricsController;
	NSMutableArray* _orderedSections;
	NSMutableArray* _queuedMetricsOperations;
	int _sharingRow;
	RadioStation* _station;
	UITableViewCell* _stationNameCell;
	UITextField* _stationNameTextField;
	UITableViewCell* _stationTuningCell;
	RUStationTuningView* _stationTuningView;
	_RUStationSettingsTableView* _tableView;
	int _tuningRow;

}
-(id)initWithStation:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)_radioModelDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)contentScrollView;
-(void)viewDidLoad;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/ id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)addSeedViewController:(id)arg1 didSelectStation:(id)arg2 ;
-(void)addSeedViewControllerDidCancel:(id)arg1 ;
-(void)_updateEditingStateAnimated:(BOOL)arg1 ;
-(id)_newPageEvent;
-(void)_addMetricsControllerOperationBlock:(/*^block*/ id)arg1 ;
-(id)_newShadowViewWithFrame:(CGRect)arg1 ;
-(void)_updateLikesAndBans;
-(void)_didSelectLikeBanStation:(id)arg1 ;
-(int)_countOfSettingsSections;
-(BOOL)_isDeletableRowAtIndexPath:(id)arg1 ;
-(int)_settingsSectionForTableViewSection:(int)arg1 ;
-(id)_addLikeBanImage;
-(void)_handleResponseForLikeRequest:(id)arg1 withStation:(id)arg2 responseDictionary:(id)arg3 requestError:(id)arg4 ;
-(int)_tableViewSectionForSettingsSection:(int)arg1 ;
-(void)_presentAddSeedController;
-(id)_titleForSettingsSection:(int)arg1 ;
-(id)_newSectionHeaderWithFrame:(CGRect)arg1 title:(id)arg2 ;
-(void)_populateLikeBanItems:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)_stationNameTextFieldValueDidEndEditingAction:(id)arg1 ;
-(void)_stationNameTextFieldEditingDidBeginAction:(id)arg1 ;
-(void)_toggleEditAction:(id)arg1 ;
-(void).cxx_destruct;
-(id)_newTextField;
@end

