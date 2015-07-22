/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:38 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/CustomSearchManagerObserver.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <Maps/MapsActivityViewControllerDelegate.h>
#import <Maps/MainChromeModeController.h>
#import <Maps/CollectionsViewControllerDelegate.h>
#import <Maps/DirectionsControllerDelegate.h>
#import <Maps/DirectionsTopBarProviderDelegate.h>
#import <Maps/DirectionsSearchViewControllerDelegate.h>
#import <Maps/DirectionsStepsTableViewControllerDelegate.h>
#import <Maps/MapsDebugViewControllerDelegate.h>
#import <Maps/MKMapViewDelegate.h>
#import <Maps/SearchBarControllerDelegate.h>
#import <Maps/SearchBarDelegate.h>
#import <Maps/SearchManagerObserver.h>
#import <Maps/SearchResultsListViewControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegatePrivate.h>
#import <Maps/AdvisorySheetViewDelegate.h>
#import <Maps/RefinementSelectionDelegate.h>

@class MainChromeViewController, DirectionsSearchViewController, MKMapView, SearchResult, GEOMapRegion, SearchManager, CustomSearchManager, ControlBarView, UIPopoverController, UIButton, UIAlertView, RefinementTableViewController, UIView, CollectionsViewController, NSInvocation, SearchResultsListViewController, UINavigationController, DirectionsStepsTableViewController, TrafficIncidentsViewController, MKAnnotationView, VKLabelMarker, SearchBarController, UILongPressGestureRecognizer, SteppingModeController, NSTimer, PlacePresentationSelectionManagerContext, NSMutableSet, UIWindow, AdaptivePresenter, Presenter, DirectionsTopBarProvider, DirectionsPlan, NSString;

@interface MapsMainModeController : NSObject <CustomSearchManagerObserver, UITableViewDelegate, UIActionSheetDelegate, MapsActivityViewControllerDelegate, MainChromeModeController, CollectionsViewControllerDelegate, DirectionsControllerDelegate, DirectionsTopBarProviderDelegate, DirectionsSearchViewControllerDelegate, DirectionsStepsTableViewControllerDelegate, MapsDebugViewControllerDelegate, MKMapViewDelegate, SearchBarControllerDelegate, SearchBarDelegate, SearchManagerObserver, SearchResultsListViewControllerDelegate, UIGestureRecognizerDelegate, UIPopoverControllerDelegate, UIPopoverControllerDelegatePrivate, AdvisorySheetViewDelegate, RefinementSelectionDelegate> {

	MKMapView* _mapView;
	SearchResult* _navigationTarget;
	id _restoreNavigationMarkerOrAnnotation;
	GEOMapRegion* _restoreNavigationRegion;
	SearchManager* _searchManager;
	CustomSearchManager* _customSearchManager;
	int _viewMode;
	DirectionsSearchViewController* _directionsSearchViewController;
	ControlBarView* _controlBar;
	UIPopoverController* _exclusivePopover;
	UIButton* _searchListViewControl;
	UIButton* _shareControl;
	UIButton* _settingsControl;
	char _hasRestoredFromDefaults;
	char _registeredForAddressBookChanges;
	char _displayingError;
	UIAlertView* _multipleRefinementAlertView;
	RefinementTableViewController* _multipleRefinementTableViewController;
	int _postAlertSearchType;
	char _lockOrientation;
	int _lockedOrientation;
	char _isShowingKeyboard;
	char _isRotating;
	UIView* _topButtonBarBorder;
	UIView* _showingPanel;
	CollectionsViewController* _collectionsViewController;
	NSInvocation* _hideSettingsViewDidEndInvocation;
	SearchResult* _bookmarkToShow;
	SearchResultsListViewController* _searchResultsListViewController;
	UINavigationController* _searchResultsNavController;
	UIPopoverController* _searchResultsPopoverController;
	char _isDisplayingSearchResultsPopover;
	DirectionsStepsTableViewController* _directionsStepsTableViewController;
	UINavigationController* _directionsStepsNavController;
	char _isDisplayingDirectionsStepsPopover;
	TrafficIncidentsViewController* _trafficIncidentsViewController;
	UINavigationController* _trafficIncidentsNavigationController;
	MKAnnotationView* _annotationViewToReSelectAfterExpandedPopoverDismissal;
	VKLabelMarker* _labelMarkerToReSelectAfterExpandedPopoverDismissal;
	/*^block*/id _refinementSearchCompletion;
	char _searchModeEnabled;
	SearchBarController* _searchBarController;
	UINavigationController* _directionsSearchNavigationController;
	SearchResult* _pendingSelectedSearchResult;
	char _isShowingBookmarks;
	char _isShowingPanel;
	char _ignoreMapViewPositionChanges;
	char _isShowingCurrentLocationError;
	char _firstDisplayOccurred;
	char _didLoadFromLaunchURL;
	char _didLoadForBackgroundNavigation;
	char _showsSearchResultsInOverview;
	char _dismissDirectionsSheetOnEnterForeground;
	char _skipRegionChangeOnOverviewPop;
	MKMapView* _externalMapView;
	UILongPressGestureRecognizer* _longPress;
	SteppingModeController* _steppingMode;
	char _hasShownDrivingNavModeAdvisory;
	char _hasShownWalkingNavModeAdvisory;
	UILongPressGestureRecognizer* _logTileStateRecognizer;
	int _3DButtonTextVisibilityCount;
	NSTimer* _gestureCoalesceTimer;
	char _flyoverChangedDuringCurrentGestures;
	char _dismissingPlaceCard;
	/*^block*/id _enqueuedFixedProblemViewControllerShowAction;
	PlacePresentationSelectionManagerContext* _placePresentationSelectionManagerContext;
	NSMutableSet* _becomeContainerMapActions;
	char _showTraffic;
	int _displayMode;
	char _labelMarkerSelected;
	UIWindow* _window;
	AdaptivePresenter* _directionsStepsListPresenter;
	AdaptivePresenter* _shareSheetPresenter;
	AdaptivePresenter* _searchResultsListPresenter;
	AdaptivePresenter* _directionsSearchPresenter;
	Presenter* _currentPresenter;
	char _flyoverTourRunning;
	char _showingDirectionsInfoBar;
	DirectionsTopBarProvider* _directionsInfoBar;
	MainChromeViewController* _chromeViewController;

}

@property (nonatomic,readonly) SearchBarController * searchBarController; 
@property (nonatomic,retain) DirectionsTopBarProvider * directionsInfoBar;                                   //@synthesize directionsInfoBar=_directionsInfoBar - In the implementation block
@property (nonatomic,readonly) MKMapView * mapView;                                                          //@synthesize mapView=_mapView - In the implementation block
@property (assign,nonatomic,__weak) MainChromeViewController * chromeViewController;                         //@synthesize chromeViewController=_chromeViewController - In the implementation block
@property (nonatomic,retain) SearchResult * navigationTarget;                                                //@synthesize navigationTarget=_navigationTarget - In the implementation block
@property (nonatomic,readonly) char canPlayTrace; 
@property (assign,nonatomic) char showsSearchResultsInOverview;                                              //@synthesize showsSearchResultsInOverview=_showsSearchResultsInOverview - In the implementation block
@property (assign,nonatomic) char skipRegionChangeOnOverviewPop;                                             //@synthesize skipRegionChangeOnOverviewPop=_skipRegionChangeOnOverviewPop - In the implementation block
@property (assign,nonatomic) char didLoadForBackgroundNavigation;                                            //@synthesize didLoadForBackgroundNavigation=_didLoadForBackgroundNavigation - In the implementation block
@property (nonatomic,copy) id enqueuedFixedProblemViewControllerShowAction;                                  //@synthesize enqueuedFixedProblemViewControllerShowAction=_enqueuedFixedProblemViewControllerShowAction - In the implementation block
@property (getter=isShowingDirectionsInfoBar,nonatomic,readonly) char showingDirectionsInfoBar;              //@synthesize showingDirectionsInfoBar=_showingDirectionsInfoBar - In the implementation block
@property (assign,nonatomic) char lockOrientation;                                                           //@synthesize lockOrientation=_lockOrientation - In the implementation block
@property (assign,nonatomic) int lockedOrientation;                                                          //@synthesize lockedOrientation=_lockedOrientation - In the implementation block
@property (nonatomic,retain) DirectionsPlan * directionsPlan; 
@property (nonatomic,readonly) UIAlertView * multipleRefinementAlertView; 
@property (nonatomic,readonly) float defaultZoomLevelForSearching; 
@property (nonatomic,readonly) SearchResult * customSearchResult; 
@property (nonatomic,retain) SearchResult * bookmarkToShow;                                                  //@synthesize bookmarkToShow=_bookmarkToShow - In the implementation block
@property (nonatomic,retain) SteppingModeController * steppingMode;                                          //@synthesize steppingMode=_steppingMode - In the implementation block
@property (nonatomic,retain) NSMutableSet * becomeContainerMapActions;                                       //@synthesize becomeContainerMapActions=_becomeContainerMapActions - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char hasShownDrivingNavModeAdvisory;                                            //@synthesize hasShownDrivingNavModeAdvisory=_hasShownDrivingNavModeAdvisory - In the implementation block
@property (assign,nonatomic) char hasShownWalkingNavModeAdvisory;                                            //@synthesize hasShownWalkingNavModeAdvisory=_hasShownWalkingNavModeAdvisory - In the implementation block
@property (assign,nonatomic) char locationPulseEnabled; 
@property (nonatomic,readonly) DirectionsSearchViewController * directionsSearchViewController;              //@synthesize directionsSearchViewController=_directionsSearchViewController - In the implementation block
@property (nonatomic,readonly) char isRotating;                                                              //@synthesize isRotating=_isRotating - In the implementation block
-(void)willChangeToMapDisplayStyle:(unsigned)arg1 forChangeToLightLevel:(int)arg2 animation:(id)arg3 ;
-(void)_locationManagerApprovalDidChange:(id)arg1 ;
-(SearchResult *)customSearchResult;
-(void)customSearchManager:(id)arg1 didReplaceCustomSearchResult:(id)arg2 animated:(char)arg3 shouldSelectOnMap:(char)arg4 ;
-(void)customSearchManager:(id)arg1 didModifyCustomSearchResult:(id)arg2 ;
-(void)closeCollectionsViewController:(id)arg1 ;
-(void)collectionsViewController:(id)arg1 choseHistoryItem:(id)arg2 ;
-(void)collectionsViewController:(id)arg1 choseBookmark:(id)arg2 ;
-(int)searchMode;
-(void)collectionsViewController:(id)arg1 choseAddress:(id)arg2 ;
-(void)cancelSearches;
-(void)searchManagerDidClearSearchResults:(id)arg1 ;
-(void)searchManager:(id)arg1 didManuallySetResults:(id)arg2 ;
-(void)searchManager:(id)arg1 willPerformSearchForQuery:(id)arg2 ;
-(void)searchManager:(id)arg1 didReceiveResults:(id)arg2 scrollToResults:(char)arg3 ;
-(void)searchManagerSearchFailed:(id)arg1 withError:(id)arg2 ;
-(void)searchManagerSearchCanceled:(id)arg1 ;
-(void)searchManager:(id)arg1 didReceiveRefinementResults:(id)arg2 ;
-(void)searchForExternalURLQuery:(id)arg1 coordinate:(SCD_Struct_RA2)arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 ;
-(void)searchForString:(id)arg1 traits:(id)arg2 scrollToResults:(char)arg3 source:(int)arg4 ;
-(id)selectedSearchResult;
-(SearchBarController *)searchBarController;
-(void)resetForLaunchURL;
-(void)dismissPlaceCard;
-(void)presentPlaceCardForSearchResult:(id)arg1 animated:(char)arg2 ;
-(int)lockedOrientation;
-(char)lockOrientation;
-(void)setLockedOrientation:(int)arg1 ;
-(void)setLockOrientation:(char)arg1 ;
-(void)debugController:(id)arg1 choseTracePlayer:(id)arg2 startNav:(char)arg3 ;
-(MainChromeViewController *)chromeViewController;
-(void)searchBarDirectionsButtonWasTapped:(id)arg1 ;
-(void)searchBarDidPresentPopover:(id)arg1 shouldReselectAnnotation:(char)arg2 ;
-(void)searchBar:(id)arg1 choseHistoryItem:(id)arg2 ;
-(void)searchBar:(id)arg1 choseBookmark:(id)arg2 ;
-(void)debugControllerDidFinish:(id)arg1 ;
-(void)mapsActivityViewController:(id)arg1 addBookmarkWithSearchResult:(id)arg2 title:(id)arg3 ;
-(void)mapsActivityViewControllerPrint:(id)arg1 ;
-(void)setDidLoadForBackgroundNavigation:(char)arg1 ;
-(float)defaultZoomLevelForSearching;
-(void)searchForAddress:(id)arg1 source:(int)arg2 ;
-(void)searchForAddressString:(id)arg1 source:(int)arg2 ;
-(void)searchForRouteFromAddress:(id)arg1 toAddress:(id)arg2 directionsMode:(unsigned)arg3 withFeedback:(id)arg4 ;
-(void)setShowsSearchResultsInOverview:(char)arg1 ;
-(void)addBecomingContainerMapAction:(/*^block*/id)arg1 ;
-(char)displayNavigationAlertAndShouldContinue;
-(id)placePresentationSelectionManagerContext;
-(void)showRoutingAppsFromSearchResult:(id)arg1 toSearchResult:(id)arg2 ;
-(void)routeFromSearchResult:(id)arg1 toSearchResult:(id)arg2 routeHandle:(id)arg3 withFeedback:(id)arg4 origin:(int)arg5 ;
-(char)canPlayTrace;
-(void)setEnqueuedFixedProblemViewControllerShowAction:(id)arg1 ;
-(void)displayOrScheduleDisplayOfEnqueuedFixedProblem;
-(void)dismissAllModalViewsIfPresentWithCompletion:(/*^block*/id)arg1 ;
-(char)showFlyoverAnnouncement:(id)arg1 tourInfo:(id)arg2 tourId:(const unsigned long long*)arg3 ;
-(char)isShowingDirectionsInfoBar;
-(id)_directionsListViewControl;
-(void)_directionsListViewButtonTapped:(id)arg1 ;
-(void)layoutForUnobscuredBoundsChange;
-(void)directionsControllerDidChangeRoute:(id)arg1 ;
-(id)directionsStepsTableViewController;
-(id)directionsStepsNavController;
-(void)setChromeViewController:(MainChromeViewController *)arg1 ;
-(void)becomeCurrentModeWithViews:(id)arg1 animated:(char)arg2 state:(id)arg3 fromMode:(id)arg4 ;
-(void)resignCurrentModeAnimated:(char)arg1 toMode:(id)arg2 ;
-(void)modeDidAppear:(char)arg1 ;
-(void)dropPin;
-(char)canDisplayTraffic;
-(void)viewModeDidChange;
-(void)trafficDisplayDidChange;
-(char)equalizeTopBottomMapInset;
-(char)canPresentInterruptionOfKind:(int)arg1 ;
-(/*^block*/id)presentInterruptionOfKind:(int)arg1 userInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)shouldShowPlacePresentationOptionInCalloutForLabelMarker:(id)arg1 ;
-(char)shouldShowPlacePresentationOptionInCalloutForAnnotationView:(id)arg1 ;
-(char)shouldShowDirectionsButtonForSearchResult:(id)arg1 ;
-(char)shouldShowFlyoverButtonForLabelMarker:(id)arg1 ;
-(char)shouldShowFlyoverButtonForSearchResult:(id)arg1 ;
-(char)shouldChangeMKApplicationStateForLabelMarker:(id)arg1 ;
-(void)updateMKApplicationStateAfterDeselection;
-(char)placePresentationSelectionManager:(id)arg1 shouldUseDefaultPlaceCardPresentationForViewController:(id)arg2 ;
-(void)directionsStepsTableViewController:(id)arg1 didTapRowForRouteStep:(id)arg2 ;
-(void)directionsStepsTableViewController:(id)arg1 didTapDisclosureForSearchResult:(id)arg2 ;
-(char)directionsStepsTableViewControllerShouldAllowInfoCardsForEndpoints:(id)arg1 ;
-(char)directionsStepsTableViewControllerShouldShowOverview:(id)arg1 ;
-(char)_showingDirections;
-(void)_setShowingDirectionsInfoBar:(char)arg1 animated:(char)arg2 ;
-(void)_updateShowingRouteAnimated:(char)arg1 ;
-(void)_updateControlBarItemsAnimated:(char)arg1 ;
-(void)_updateMapApplicationState;
-(void)_startCurrentLocationUpdate;
-(void)_dismissDirectionsStepsListAnimated:(char)arg1 ;
-(void)directionsInfoBarChoseEndInOverview:(id)arg1 ;
-(void)_resetTracking:(char)arg1 ;
-(void)_refreshShareControlAvailability;
-(void)_stopCurrentLocationUpdate;
-(void)_showBookmark;
-(void)_stopFlyoverTourAnimation;
-(id)calloutPopoverController;
-(void)_presentSearchResultsList:(id)arg1 ;
-(void)_shareControlTapped:(id)arg1 ;
-(char)_showingRoute;
-(id)_selectedSearchResultOrPOI;
-(id)_shareControl;
-(id)_trackingButton;
-(int)_currentProminentAction;
-(id)_settingsControl;
-(void)_routeFromSearchResult:(id)arg1 toSearchResult:(id)arg2 routeHandle:(id)arg3 tracePlayer:(id)arg4 withFeedback:(id)arg5 origin:(int)arg6 ;
-(void)_updateUserSpecifiedZoomLevel:(char)arg1 ;
-(id)refreshedTraits;
-(void)clearRouteAnimated:(char)arg1 ;
-(void)_clearCustomSearchResult;
-(char)_isDisplayingPlaceCard;
-(char)_isDisplayingTrafficIncident;
-(void)_dismissDirectionsSheet:(char)arg1 ;
-(void)_routeUsingDirectionsSearchFieldsWithFeedback:(id)arg1 ;
-(void)_routeUsingDirectionsSearchFieldsWithFeedback:(id)arg1 withUserInfo:(id)arg2 ;
-(void)_clearOverlayRoutesAnimated:(char)arg1 ;
-(DirectionsSearchViewController *)directionsSearchViewController;
-(void)displayAlertWithTitle:(id)arg1 message:(id)arg2 postAlertSearchType:(int)arg3 ;
-(void)_presentDirectionsSheetAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleLogTileState:(id)arg1 ;
-(void)_setupMapView;
-(NSMutableSet *)becomeContainerMapActions;
-(void)setBecomeContainerMapActions:(NSMutableSet *)arg1 ;
-(void)_updateTopBarContentAnimated:(char)arg1 ;
-(void)_prominentActionTapped:(id)arg1 ;
-(void)performIfLocationServicesAvailable:(/*^block*/id)arg1 ;
-(void)_updateRatingsReviewsForAnnotationView:(id)arg1 labelMarker:(id)arg2 searchResult:(id)arg3 animated:(char)arg4 ;
-(void)_restoreFromDefaults;
-(void)_updateTapToHideBehavior;
-(id)_prominentActionButton;
-(DirectionsTopBarProvider *)directionsInfoBar;
-(void)_updateTopBarBackdrop;
-(void)setCustomSearchResult:(id)arg1 animated:(char)arg2 ;
-(void)_restoreDisplayedInfoCard;
-(void)_delayedGoToRouteStepAnimated;
-(void)_removeLegacyDefaults;
-(void)_importLegacyDefaults;
-(unsigned)_transportTypeForControl:(id)arg1 ;
-(char)_showDirectionsToSearchResult:(id)arg1 transportType:(unsigned)arg2 ;
-(void)_startFlyoverTourAnimation:(unsigned long long)arg1 animation:(id)arg2 annotation:(id)arg3 ;
-(void)_createCustomSearchResultForDroppedPinAtPoint:(SCD_Struct_RA2)arg1 animated:(char)arg2 ;
-(void)_dismissSettingsAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)setBookmarkToShow:(SearchResult *)arg1 ;
-(void)_setSearchResult:(id)arg1 forSearchType:(int)arg2 ;
-(void)_presentDirectionsSheetAnimated:(char)arg1 positioning:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)presentationSourceForDirectionsSheet;
-(void)_searchForHistoryItem:(id)arg1 completedQuery:(id)arg2 source:(int)arg3 ;
-(void)setShowingSearch:(char)arg1 animated:(char)arg2 ;
-(void)_choseBookmark:(id)arg1 forSearchType:(int)arg2 ;
-(void)_clearRouteStartAndEnd;
-(void)_routeFromSearchResult:(id)arg1 toSearchResult:(id)arg2 overrideDirectionsMode:(unsigned)arg3 routeHandle:(id)arg4 tracePlayer:(id)arg5 withFeedback:(id)arg6 historyItem:(id)arg7 origin:(int)arg8 ;
-(void)_routeFromSearchResult:(id)arg1 toSearchResult:(id)arg2 routeHandle:(id)arg3 tracePlayer:(id)arg4 withFeedback:(id)arg5 historyItem:(id)arg6 origin:(int)arg7 ;
-(void)_routeFromSearchResult:(id)arg1 toAddressBookAddress:(id)arg2 withFeedback:(id)arg3 ;
-(void)_dismissCollectionsViewControllerAnimated:(char)arg1 ;
-(void)_reportCurrentLocationFailure;
-(void)_startDirectionsRequiringNavigation:(char)arg1 ;
-(void)setSteppingMode:(SteppingModeController *)arg1 ;
-(void)resumeNavigationIfNeeded;
-(SteppingModeController *)steppingMode;
-(void)searchForString:(id)arg1 scrollToResults:(char)arg2 source:(int)arg3 ;
-(void)_searchForResult:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)_showOrUpdateSteppingModeWithSettingsFromBlock:(/*^block*/id)arg1 ;
-(id)searchResultsNavController;
-(void)_goToSearchResult:(id)arg1 ;
-(void)_dismissSearchResultsList;
-(void)_transitionToOverview;
-(void)_dropPinsForSearchResults:(id)arg1 scrollToResults:(char)arg2 ;
-(void)_searchManagerResultsChanged;
-(void)_resolveRefinementForSearch:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)_reportSearchError:(id)arg1 ;
-(UIAlertView *)multipleRefinementAlertView;
-(char)_isFlyoverAvailable;
-(void)_startFlyoverTourFromAdvisorySheet:(id)arg1 ;
-(char)_setupAndStartDirectionsRequiringNavigation:(char)arg1 ;
-(void)_showNavModeAdvisoryIfNecessary;
-(void)directionsControllerDidReset:(id)arg1 ;
-(void)displayCurrentLocationAlertWithMessage:(id)arg1 postAlertSearchType:(int)arg2 ;
-(void)directionsModeDidChange;
-(void)directionsController:(id)arg1 didChangeSelectedRouteIndex:(unsigned)arg2 ;
-(char)_replaceSearchResult:(id)arg1 withSearchResult:(id)arg2 ;
-(void)_showDirectionsFromSearchResult:(id)arg1 orToSearchResult:(id)arg2 directionsMode:(unsigned)arg3 completion:(/*^block*/id)arg4 ;
-(void)routeFromAddress:(id)arg1 toAddress:(id)arg2 withFeedback:(id)arg3 ;
-(id)searchResultsListViewController;
-(void)_searchResultsListClearButtonClicked:(id)arg1 ;
-(void)_presentDirectionsStepsListWithPositioning:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_dismissDirectionsStepsList;
-(id)directionsPlanWithFidelity:(unsigned)arg1 ;
-(void)addBookmarkWithName:(id)arg1 fromSearchResult:(id)arg2 ;
-(void)_presentViewControllerWithShareSheetPresentation:(id)arg1 ;
-(char)_shouldShowDirectionsAffordanceForAnnotation:(id)arg1 ;
-(void)_showDirectionsFromSearchResult:(id)arg1 orToSearchResult:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)directionsController:(id)arg1 displayDirectionsWithoutNavigationToSelectedRouteWithOptions:(int)arg2 ;
-(void)directionsControllerNavigationModeChoseOverview:(id)arg1 ;
-(void)directionsControllerNavigationModeChoseEndNavigation:(id)arg1 ;
-(void)directionsController:(id)arg1 steppingModeChoseOverview:(id)arg2 ;
-(void)directionsController:(id)arg1 steppingModeChoseEnd:(id)arg2 ;
-(void)directionsController:(id)arg1 steppingModeChoseGuideMe:(id)arg2 withTransportType:(int)arg3 ;
-(void)directionsController:(id)arg1 presentDirectionsSheetWithPositioning:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)directionsController:(id)arg1 presentDirectionsStepsListWithPositioning:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)directionsControllerDidStartLoad:(id)arg1 ;
-(void)directionsControllerDidStartNavigationSession:(id)arg1 ;
-(void)directionsControllerDidLoad:(id)arg1 ;
-(void)directionsControllerDidCancelLoad:(id)arg1 ;
-(void)directionsControllerDidProceedWithExternalOverview:(id)arg1 ;
-(void)directionsControllerDidFailToLoad:(id)arg1 withError:(id)arg2 canInterruptUser:(char)arg3 ;
-(void)directionsController:(id)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3 ;
-(void)directionsController:(id)arg1 didSetEndPin:(id)arg2 ;
-(void)directionsControllerUpdatedETA:(id)arg1 ;
-(void)directionsControllerHasArrived:(id)arg1 ;
-(void)directionsControllerHasReachedEndOfLeg:(id)arg1 willContinueGuidance:(char)arg2 ;
-(void)directionsInfoBarDidClearDirections:(id)arg1 ;
-(void)directionsInfoBarDidCancelDirections:(id)arg1 ;
-(void)directionsInfoBarDidStartDirections:(id)arg1 ;
-(void)directionsInfoBarChoseResumeInOverview:(id)arg1 ;
-(void)directionsSearchViewControllerDidCancel:(id)arg1 ;
-(void)directionsSearchViewControllerDidRoute:(id)arg1 ;
-(void)directionsSearchViewControllerDidSelectRoutingApp:(id)arg1 ;
-(void)directionsSearchViewController:(id)arg1 didSelectDirectionsMode:(unsigned)arg2 ;
-(id)directionsSearchViewControllerTraits:(id)arg1 ;
-(id)allVisibleMapViewsForDebugController:(id)arg1 ;
-(char)hasShownDrivingNavModeAdvisory;
-(void)setHasShownDrivingNavModeAdvisory:(char)arg1 ;
-(char)hasShownWalkingNavModeAdvisory;
-(void)setHasShownWalkingNavModeAdvisory:(char)arg1 ;
-(char)locationPulseEnabled;
-(void)setLocationPulseEnabled:(char)arg1 ;
-(void)searchBarController:(id)arg1 didSearchForItem:(id)arg2 source:(int)arg3 ;
-(void)searchBarControllerDidClear:(id)arg1 ;
-(void)searchBarController:(id)arg1 didSelectHistoryItem:(id)arg2 completedQuery:(id)arg3 ;
-(void)searchBarControllerDidBeginEditing:(id)arg1 ;
-(void)searchBarControllerDidEndEditing:(id)arg1 ;
-(id)searchBarControllerTraits:(id)arg1 ;
-(id)searchBarController:(id)arg1 delegateForSearchBar:(id)arg2 ;
-(void)searchBarShareButtonWasTapped:(id)arg1 ;
-(void)searchBarCancelButtonWasTapped:(id)arg1 ;
-(void)searchResultsListViewController:(id)arg1 didTapDisclosureForSearchResult:(id)arg2 ;
-(void)searchResultsListViewController:(id)arg1 didTapRowForSearchResult:(id)arg2 ;
-(void)advisorySheetButtonWasTapped:(id)arg1 ;
-(void)advisorySheetWasTapped:(id)arg1 ;
-(void)advisorySheetWasSupersededByIncidentalInteraction:(id)arg1 ;
-(void)refinementSelected:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)presentActionSheet:(id)arg1 ;
-(id)calloutViewController;
-(id)calloutSearchResult;
-(id)_searchListViewControl;
-(id)fullScreenViewController;
-(void)_gestureCoalesceTimerFired:(id)arg1 ;
-(void)mapDisplayWillSuspend;
-(void)mapDisplayDidResume;
-(char)_isDisplayingCollectionsViewController;
-(void)_routeFromSearchResult:(id)arg1 toSearchResult:(id)arg2 overrideDirectionsMode:(unsigned)arg3 routeHandle:(id)arg4 tracePlayer:(id)arg5 withFeedback:(id)arg6 ;
-(void)_routeFromSearchResult:(id)arg1 toAddress:(id)arg2 withFeedback:(id)arg3 ;
-(char)canPromptToCalibrateHeading;
-(void)screenWasInteractedWith:(id)arg1 ;
-(void)startPreparedBackgroundNavigation;
-(void)modalDismissViewControllerDidComplete:(id)arg1 ;
-(char)supportsSearchingFromURL:(id)arg1 ;
-(SCD_Struct_RA6)regionCenteredAt:(SCD_Struct_RA2)arg1 zoomLevel:(float)arg2 ;
-(void)endBackgroundNavigation;
-(CGRect)visibleMapBounds;
-(CGSize)_contentSizeForDirectionsStepsPopover;
-(DirectionsPlan *)directionsPlan;
-(void)setDirectionsPlan:(DirectionsPlan *)arg1 ;
-(void)presentationController:(id)arg1 showDirctionsToSearchResult:(id)arg2 ;
-(void)presentationController:(id)arg1 showDirectionsFromSearchResult:(id)arg2 ;
-(void)presentationController:(id)arg1 showFlyoverTourForSearchResult:(id)arg2 ;
-(void)presentationController:(id)arg1 removeCustomSearchResult:(id)arg2 ;
-(void)presentationController:(id)arg1 addBookmarkForSearchResult:(id)arg2 title:(id)arg3 ;
-(void)presentationController:(id)arg1 searchForAddress:(id)arg2 ;
-(char)presentationController:(id)arg1 shouldShowDirectionsForSearchResult:(id)arg2 ;
-(char)presentationController:(id)arg1 shouldShowReportAProblemForSearchResult:(id)arg2 ;
-(void)presentationController:(id)arg1 completedActivityOfType:(id)arg2 forSearchResult:(id)arg3 ;
-(void)presentationController:(id)arg1 oldSearchResult:(id)arg2 becameNewSearchResult:(id)arg3 ;
-(SearchResult *)navigationTarget;
-(void)setNavigationTarget:(SearchResult *)arg1 ;
-(void)setDirectionsInfoBar:(DirectionsTopBarProvider *)arg1 ;
-(SearchResult *)bookmarkToShow;
-(char)showsSearchResultsInOverview;
-(char)skipRegionChangeOnOverviewPop;
-(void)setSkipRegionChangeOnOverviewPop:(char)arg1 ;
-(char)didLoadForBackgroundNavigation;
-(id)enqueuedFixedProblemViewControllerShowAction;
-(void)mapView:(id)arg1 canEnter3DModeDidChange:(char)arg2 ;
-(void)mapView:(id)arg1 didChangeUserTrackingMode:(int)arg2 animated:(char)arg3 fromTrackingButton:(char)arg4 ;
-(double)mapView:(id)arg1 shouldDelayTapResponse:(id)arg2 onAnnotationView:(id)arg3 forDuration:(double)arg4 ;
-(id)mapViewCurrentRouteMatch:(id)arg1 ;
-(void)mapViewWillStartFlyoverTour:(id)arg1 ;
-(void)mapView:(id)arg1 didStopFlyoverTourCompleted:(char)arg2 ;
-(void)mapView:(id)arg1 willStartRespondingToGesture:(int)arg2 animated:(char)arg3 ;
-(void)mapView:(id)arg1 didStopRespondingToGesture:(int)arg2 zoomDirection:(int)arg3 didDecelerate:(char)arg4 ;
-(void)mapView:(id)arg1 didBecomePitched:(char)arg2 ;
-(void)mapView:(id)arg1 labelMarker:(id)arg2 calloutAccessoryControlTapped:(id)arg3 ;
-(void)mapView:(id)arg1 didSelectLabelMarker:(id)arg2 ;
-(void)mapView:(id)arg1 didDeselectLabelMarker:(id)arg2 ;
-(void)_handleLongPress:(id)arg1 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(char)arg2 ;
-(void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3 ;
-(void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2 ;
-(void)mapView:(id)arg1 annotationView:(id)arg2 didChangeDragState:(unsigned)arg3 fromOldState:(unsigned)arg4 ;
-(MKMapView *)mapView;
-(void)dealloc;
-(id)init;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(char)shouldAutorotate;
-(unsigned)supportedInterfaceOrientations;
-(void)prepareForDefaultImageSnapshotForScreen:(id)arg1 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(char)isRotating;
-(void)_cleanup;
-(void)viewWillDisappear:(char)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)willPresentAlertView:(id)arg1 ;
-(void)_keyboardDidHide:(id)arg1 ;
-(int)viewMode;
-(void)popoverController:(id)arg1 animationCompleted:(int)arg2 ;
-(void)applicationDidBecomeActive;
-(id)searchManager;
-(void)_countryProvidersDidChange:(id)arg1 ;
-(void)setViewMode:(int)arg1 ;
-(void)_setDisplayMode:(int)arg1 ;
-(void)applicationDidEnterBackground;
@end
