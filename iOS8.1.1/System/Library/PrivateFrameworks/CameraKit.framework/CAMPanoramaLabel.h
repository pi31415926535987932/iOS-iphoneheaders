/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:46 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIView.h>
#import <CameraKit/_UIBackdropViewObserver.h>

@class _UIBackdropView, _UILegibilityView, _UILegibilitySettingsProvider, NSString;

@interface CAMPanoramaLabel : UIView <_UIBackdropViewObserver> {

	_UIBackdropView* _backdropView;
	_UILegibilityView* _legibilityView;
	_UILegibilitySettingsProvider* _legibilitySettingsProvider;
	NSString* _text;

}

@property (nonatomic,copy) NSString * text;              //@synthesize text=_text - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)backdropViewDidChange:(id)arg1 ;
-(void)updateToContentSize:(id)arg1 ;
-(void)_updateLegibilityView;
@end

