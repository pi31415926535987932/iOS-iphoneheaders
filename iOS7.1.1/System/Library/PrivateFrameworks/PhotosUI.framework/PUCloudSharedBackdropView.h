/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:36 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface PUCloudSharedBackdropView : UIView {

	UIView* _backdropView;
	bool _isMask;
	bool _hasRoundedCorners;

}

@property (assign,nonatomic) bool hasRoundedCorners;              //@synthesize hasRoundedCorners=_hasRoundedCorners - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void).cxx_destruct;
-(id)initWithFrame:(CGRect)arg1 asMask:(bool)arg2 ;
-(void)setHasRoundedCorners:(bool)arg1 ;
-(bool)hasRoundedCorners;
@end
