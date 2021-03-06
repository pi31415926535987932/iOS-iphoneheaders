/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPTransitionController.h>

@class MPVideoViewController, UIImageView;

@interface MPAlternateTracksTransitionController : MPTransitionController {

	MPVideoViewController* _videoController;
	UIImageView* _snapshotCoverImageView;

}

@property (assign,nonatomic,__weak) MPVideoViewController * videoController;              //@synthesize videoController=_videoController - In the implementation block
-(void)performTransition:(unsigned)arg1 ;
-(id)videoController;
-(void)setVideoController:(id)arg1 ;
-(void).cxx_destruct;
@end

