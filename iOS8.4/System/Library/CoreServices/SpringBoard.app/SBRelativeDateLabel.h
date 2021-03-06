/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SBDefaultDateLabel.h>
#import <SpringBoard/SBRelativeDateTimerDelegate.h>

@class SBRelativeDateTimer, NSString;

@interface SBRelativeDateLabel : SBDefaultDateLabel <SBRelativeDateTimerDelegate> {

	SBRelativeDateTimer* _relativeDateTimer;
	unsigned long long _value;
	int _resolution;
	long long _comparedToNow;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)timerFiredWithValue:(unsigned long long)arg1 forResolution:(int)arg2 comparedToNow:(long long)arg3 ;
-(void)setTimeZoneRelativeStartDate:(id)arg1 absoluteStartDate:(id)arg2 ;
-(id)constructLabelString;
-(void)dealloc;
-(void)prepareForReuse;
@end

