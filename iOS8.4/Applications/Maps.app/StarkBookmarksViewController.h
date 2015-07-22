/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:43 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/StarkTableViewController.h>
#import <Maps/StarkContentController.h>

@class UIBarButtonItem, StarkRouteLoadingLabel, NSString;

@interface StarkBookmarksViewController : StarkTableViewController <StarkContentController> {

	/*^block*/id _completion;
	UIBarButtonItem* _doneBarButtonItem;
	char _loading;
	StarkRouteLoadingLabel* _loadingView;

}

@property (nonatomic,readonly) UIBarButtonItem * doneBarButtonItem; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)shouldTimeoutAfterDisconnect;
-(void)modeWillPop;
-(void)_bookmarksDidChange;
-(id)_bookmarkForCellIndex:(int)arg1 ;
-(UIBarButtonItem *)doneBarButtonItem;
-(void)_updateLoading;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(id)noContentView;
-(void)_done;
@end
