/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Podcasts/Podcasts-Structs.h>
@class UIView;

@interface MTCoreTextLabelViewInfo : NSObject {

	UIView* _view;
	UIEdgeInsets _insets;

}

@property (assign,nonatomic) UIEdgeInsets insets;              //@synthesize insets=_insets - In the implementation block
@property (nonatomic,retain) UIView * view;                    //@synthesize view=_view - In the implementation block
+(id)viewInfoWithView:(id)arg1 insets:(UIEdgeInsets)arg2 ;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
@end

