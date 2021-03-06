/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:38 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Maps/SearchCompletionsTableViewControllerDelegate.h>
#import <Maps/StarkSearchBarViewDelegate.h>
#import <UIKit/UIKeyboardImplGeometryDelegate.h>
#import <Maps/StarkContentController.h>

@class StarkSearchKeyboardContainerView, StarkSearchBarView, SearchCompletionsTableViewController, UIKeyboard, StarkChromeViewController, NSString;

@interface StarkSearchKeyboardInputViewController : UIViewController <SearchCompletionsTableViewControllerDelegate, StarkSearchBarViewDelegate, UIKeyboardImplGeometryDelegate, StarkContentController> {

	StarkSearchKeyboardContainerView* _containerView;
	StarkSearchBarView* _searchBar;
	SearchCompletionsTableViewController* _completionsTable;
	UIKeyboard* _keyboard;
	StarkChromeViewController* _chrome;
	char _minimized;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isMinimized,nonatomic) char minimized;              //@synthesize minimized=_minimized - In the implementation block
-(char)shouldTimeoutAfterDisconnect;
-(void)modeWillPop;
-(void)updateKeyboardEnabled;
-(void)activateKeyboardIfNecessary;
-(void)searchCompletionsTableViewController:(id)arg1 didSelectHistoryItem:(id)arg2 forQuery:(id)arg3 ;
-(void)searchCompletionsTableViewController:(id)arg1 didSelectQueryCompletion:(id)arg2 forQuery:(id)arg3 ;
-(void)searchCompletionsTableViewController:(id)arg1 didSelectSearchCompletion:(id)arg2 forQuery:(id)arg3 ;
-(void)starkSearchBar:(id)arg1 willEditSearchTextToString:(id)arg2 ;
-(void)starkSearchBarChosePerformSearch:(id)arg1 ;
-(void)starkSearchBarChoseCancel:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isActive;
-(id)preferredFocusedItem;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(char)isMinimized;
-(char)shouldSaveMinimizationState;
-(void)setMinimized:(char)arg1 ;
-(char)canDismiss;
-(void)prepareForImplBoundsHeightChange:(float)arg1 suppressNotification:(char)arg2 ;
-(void)implBoundsHeightChangeDone:(float)arg1 suppressNotification:(char)arg2 ;
-(char)isAutomatic;
@end

