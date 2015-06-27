/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:07:45 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/QuickLook.framework/DisplayBundles/Movie.qldisplay/Movie
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MPMoviePlayerControllerDelegate <NSObject>
@optional
-(char)moviePlayerBookmarkButtonPressed:(id)arg1;
-(char)moviePlayerNextButtonPressed:(id)arg1;
-(char)moviePlayerPreviousButtonPressed:(id)arg1;
-(char)moviePlayerShareButtonPressed:(id)arg1;
-(void)moviePlayer:(id)arg1 willShowOverlayWithDuration:(double)arg2;
-(void)moviePlayerDidShowOverlay:(id)arg1;
-(void)moviePlayer:(id)arg1 willHideOverlayWithDuration:(double)arg2;
-(void)moviePlayerDidHideOverlay:(id)arg1;
-(char)moviePlayer:(id)arg1 shouldDisableButtonForAction:(SEL)arg2;

@end
