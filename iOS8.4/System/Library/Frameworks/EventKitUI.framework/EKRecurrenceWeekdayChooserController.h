/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:46 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EKRecurrenceChooserController.h>

@class NSMutableArray, NSArray;

@interface EKRecurrenceWeekdayChooserController : EKRecurrenceChooserController {

	NSMutableArray* _selectedRows;
	NSMutableArray* _cells;
	NSArray* _daysOfTheWeek;

}

@property (nonatomic,retain) NSMutableArray * cells;               //@synthesize cells=_cells - In the implementation block
@property (nonatomic,retain) NSArray * daysOfTheWeek;              //@synthesize daysOfTheWeek=_daysOfTheWeek - In the implementation block
-(id)initWithDate:(id)arg1 ;
-(void)setDaysOfTheWeek:(NSArray *)arg1 ;
-(NSArray *)daysOfTheWeek;
-(id)cellForRow:(long long)arg1 ;
-(double)heightForRow:(long long)arg1 ;
-(void)updateRecurrenceRuleBuilder:(id)arg1 ;
-(void)updateFromRecurrenceRule:(id)arg1 ;
-(void)rowTapped:(long long)arg1 ;
-(void)_setCell:(id)arg1 selected:(BOOL)arg2 ;
-(int)_dayMask;
-(void)setCells:(NSMutableArray *)arg1 ;
-(long long)numberOfRows;
-(int)frequency;
-(NSMutableArray *)cells;
@end
