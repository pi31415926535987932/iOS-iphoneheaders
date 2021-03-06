/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:45 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, TopLineView, UILabel, NSArray;

@interface MonthDayNavigationTransitionView : UIView {

	NSMutableArray* _cells;
	TopLineView* _topLine;
	char _hasOverlay;
	char _showWeekNumber;
	UILabel* _weekNumberLabel;
	char _debug;
	NSArray* _weekendIndices;
	int _selectedIndex;
	int _todayIndex;
	NSArray* _eventCounts;
	float _firstDayCellInset;
	int _firstDayCellIndex;
	float _monthRowHeight;
	int _firstMonthCellIndex;
	NSArray* _monthCellFrames;
	int _monthBreakIndex;
	CGSize _dayCellSize;
	CGRect _dayFrame;
	CGRect _monthFrame;

}

@property (nonatomic,retain) NSArray * weekendIndices;               //@synthesize weekendIndices=_weekendIndices - In the implementation block
@property (assign,nonatomic) int selectedIndex;                      //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (assign,nonatomic) int todayIndex;                         //@synthesize todayIndex=_todayIndex - In the implementation block
@property (nonatomic,retain) NSArray * eventCounts;                  //@synthesize eventCounts=_eventCounts - In the implementation block
@property (assign,nonatomic) CGRect dayFrame;                        //@synthesize dayFrame=_dayFrame - In the implementation block
@property (assign,nonatomic) float firstDayCellInset;                //@synthesize firstDayCellInset=_firstDayCellInset - In the implementation block
@property (assign,nonatomic) int firstDayCellIndex;                  //@synthesize firstDayCellIndex=_firstDayCellIndex - In the implementation block
@property (assign,nonatomic) CGSize dayCellSize;                     //@synthesize dayCellSize=_dayCellSize - In the implementation block
@property (assign,nonatomic) CGRect monthFrame;                      //@synthesize monthFrame=_monthFrame - In the implementation block
@property (assign,nonatomic) float monthRowHeight;                   //@synthesize monthRowHeight=_monthRowHeight - In the implementation block
@property (assign,nonatomic) int firstMonthCellIndex;                //@synthesize firstMonthCellIndex=_firstMonthCellIndex - In the implementation block
@property (nonatomic,retain) NSArray * monthCellFrames;              //@synthesize monthCellFrames=_monthCellFrames - In the implementation block
@property (assign,nonatomic) int monthBreakIndex;                    //@synthesize monthBreakIndex=_monthBreakIndex - In the implementation block
@property (assign,nonatomic) char debug;                             //@synthesize debug=_debug - In the implementation block
-(void)setEventCounts:(NSArray *)arg1 ;
-(NSArray *)eventCounts;
-(void)setDayCellSize:(CGSize)arg1 ;
-(void)setTodayIndex:(int)arg1 ;
-(void)setStrings:(id)arg1 overlayStrings:(id)arg2 weekNumberString:(id)arg3 ;
-(void)setUnderlineThickness:(float)arg1 forOverlayStringAtIndex:(int)arg2 ;
-(void)setWeekendIndices:(NSArray *)arg1 ;
-(void)setDayFrame:(CGRect)arg1 ;
-(void)setFirstDayCellInset:(float)arg1 ;
-(void)setFirstDayCellIndex:(int)arg1 ;
-(void)setMonthFrame:(CGRect)arg1 ;
-(void)setFirstMonthCellIndex:(int)arg1 ;
-(void)setMonthCellFrames:(NSArray *)arg1 ;
-(void)setMonthRowHeight:(float)arg1 ;
-(void)setMonthBreakIndex:(int)arg1 ;
-(void)completeSetup;
-(CGSize)dayCellSize;
-(void)animateToDayLayout;
-(void)_animateView:(id)arg1 toPosition:(CGPoint)arg2 ;
-(void)animateToMonthLayout;
-(int)todayIndex;
-(CGRect)dayFrame;
-(CGRect)monthFrame;
-(void)_updateWeekendIndices;
-(void)_updateEventCounts;
-(float)_yOffsetForMonthCells;
-(NSArray *)weekendIndices;
-(void)_setToMonthStateAnimated:(char)arg1 ;
-(void)_setToDayStateAnimated:(char)arg1 ;
-(float)firstDayCellInset;
-(int)monthBreakIndex;
-(id)_todayCell;
-(id)_selectedCell;
-(int)firstMonthCellIndex;
-(NSArray *)monthCellFrames;
-(int)firstDayCellIndex;
-(float)monthRowHeight;
-(char)debug;
-(void)setDebug:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(int)selectedIndex;
-(void)setSelectedIndex:(int)arg1 ;
@end

