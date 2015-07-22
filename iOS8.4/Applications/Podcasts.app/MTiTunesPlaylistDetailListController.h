/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:04 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/MTOTGPlaylistDetailListController.h>

@class UIButton;

@interface MTiTunesPlaylistDetailListController : MTOTGPlaylistDetailListController {

	UIButton* _deleteButton;
	char _isSmart;
	char _inInitializeFrc;

}
-(void)initializeFrc;
-(void)setPlaylistUuid:(id)arg1 ;
-(void)markSelectedItemsAsSaved:(char)arg1 ;
-(id)toolbarButtons;
-(id)emptyListMessage;
-(void)clearPlaylist;
-(void)popToRootView;
-(id)deletePlaylistButton;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(id)headerView;
-(void)delete:(id)arg1 ;
-(id)footerView;
@end
