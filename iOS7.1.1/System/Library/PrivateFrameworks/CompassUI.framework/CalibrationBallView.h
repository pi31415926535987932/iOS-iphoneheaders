/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CompassUI/CompassUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface CalibrationBallView : UIView {

	double _currentAngle;
	UIView* _ballView;
	double _ballRadius;
	double _trackRadius;

}

@property (assign,nonatomic) double trackRadius;                                //@synthesize trackRadius=_trackRadius - In the implementation block
@property (assign,setter=setAngle:,nonatomic) double currentAngle;              //@synthesize currentAngle=_currentAngle - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(void)setAngle:(double)arg1 ;
-(id)ballView;
-(id)initWithFrame:(CGRect)arg1 ballRadius:(double)arg2 ;
-(void)setTrackRadius:(double)arg1 ;
-(double)trackRadius;
-(double)currentAngle;
@end
