/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:09 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@class EKEventViewController;

@interface CalendarInvitationPopoverWrapperController : UINavigationController {

	EKEventViewController* _eventViewController;

}

@property (nonatomic,retain) EKEventViewController * eventViewController;              //@synthesize eventViewController=_eventViewController - In the implementation block
-(void)setEventViewController:(EKEventViewController *)arg1 ;
-(EKEventViewController *)eventViewController;
-(id)initForEventUID:(int)arg1 ;
@end

