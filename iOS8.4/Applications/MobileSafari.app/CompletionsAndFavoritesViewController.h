/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:56 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIViewController.h>

@class BookmarksNavigationController, CompletionListTableViewController, UniversalSearchFirstTimeExperienceViewController;

@interface CompletionsAndFavoritesViewController : UIViewController {

	float _minimumHeight;
	char _showingCompletions;
	BookmarksNavigationController* _favoritesViewController;
	CompletionListTableViewController* _completionListTableViewController;
	UniversalSearchFirstTimeExperienceViewController* _firstTimeExperienceViewController;
	float _requiredPopoverWidth;

}

@property (nonatomic,retain) BookmarksNavigationController * favoritesViewController;                                           //@synthesize favoritesViewController=_favoritesViewController - In the implementation block
@property (nonatomic,retain) CompletionListTableViewController * completionListTableViewController;                             //@synthesize completionListTableViewController=_completionListTableViewController - In the implementation block
@property (nonatomic,retain) UniversalSearchFirstTimeExperienceViewController * firstTimeExperienceViewController;              //@synthesize firstTimeExperienceViewController=_firstTimeExperienceViewController - In the implementation block
@property (assign,getter=isShowingCompletions,nonatomic) char showingCompletions;                                               //@synthesize showingCompletions=_showingCompletions - In the implementation block
@property (assign,nonatomic) float requiredPopoverWidth;                                                                        //@synthesize requiredPopoverWidth=_requiredPopoverWidth - In the implementation block
-(char)isShowingCompletions;
-(void)setShowingCompletions:(char)arg1 ;
-(void)setRequiredPopoverWidth:(float)arg1 ;
-(void)setCompletionListTableViewController:(CompletionListTableViewController *)arg1 ;
-(void)setFavoritesViewController:(BookmarksNavigationController *)arg1 ;
-(void)setFirstTimeExperienceViewController:(UniversalSearchFirstTimeExperienceViewController *)arg1 ;
-(void)setShowingUniversalSearchFirstTimeExperience:(char)arg1 ;
-(BookmarksNavigationController *)favoritesViewController;
-(CompletionListTableViewController *)completionListTableViewController;
-(UniversalSearchFirstTimeExperienceViewController *)firstTimeExperienceViewController;
-(float)requiredPopoverWidth;
-(void)viewWillLayoutSubviews;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(void)viewDidDisappear:(char)arg1 ;
@end
