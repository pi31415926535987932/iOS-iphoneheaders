/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:31 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class _UIBackdropView;

@interface _UIBackdropViewLayer : CALayer {

	_UIBackdropView* _backdropView;

}

@property (assign,nonatomic) _UIBackdropView * backdropView;              //@synthesize backdropView=_backdropView - In the implementation block
-(void)dealloc;
-(void)renderInContext:(CGContextRef)arg1 ;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(_UIBackdropView *)backdropView;
@end

