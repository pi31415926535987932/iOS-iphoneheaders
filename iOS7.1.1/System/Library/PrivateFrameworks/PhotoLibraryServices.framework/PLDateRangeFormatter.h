/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:32 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSDateFormatter, NSLocale;

@interface PLDateRangeFormatter : NSObject {

	bool _autoUpdateOnChanges;
	bool _includeDayNumbers;
	bool _includeDayNumbersWhenMonthsDiffer;
	bool _useRelativeDayFormatting;
	bool _useShortMonths;
	bool _useShortDaysInRanges;
	bool _useTime;
	bool _yearOnly;
	NSDateFormatter* __sameDayDateFormatter;
	NSDateFormatter* __sameDayNoYearDateFormatter;
	NSDateFormatter* __dayOfTheWeekDateFormatter;
	NSDateFormatter* __relativeDateFormatterDay;
	NSDateFormatter* __yearDateFormatter;
	UDateIntervalFormatRef __monthDayIntervalFormat;
	UDateIntervalFormatRef __monthDayNoYearIntervalFormat;
	UDateIntervalFormatRef __differentMonthDayIntervalFormat;
	UDateIntervalFormatRef __differentMonthDayNoYearIntervalFormat;
	UDateIntervalFormatRef __dayOfTheWeekIntervalFormat;
	UDateIntervalFormatRef __timeIntervalFormat;
	UDateIntervalFormatRef __yearIntervalFormat;
	NSLocale* __currentLocale;

}

@property (assign,nonatomic) bool includeDayNumbers;                                                       //@synthesize includeDayNumbers=_includeDayNumbers - In the implementation block
@property (assign,nonatomic) bool includeDayNumbersWhenMonthsDiffer;                                       //@synthesize includeDayNumbersWhenMonthsDiffer=_includeDayNumbersWhenMonthsDiffer - In the implementation block
@property (assign,nonatomic) bool useRelativeDayFormatting;                                                //@synthesize useRelativeDayFormatting=_useRelativeDayFormatting - In the implementation block
@property (assign,nonatomic) bool useShortMonths;                                                          //@synthesize useShortMonths=_useShortMonths - In the implementation block
@property (assign,nonatomic) bool useShortDaysInRanges;                                                    //@synthesize useShortDaysInRanges=_useShortDaysInRanges - In the implementation block
@property (assign,nonatomic) bool useTime;                                                                 //@synthesize useTime=_useTime - In the implementation block
@property (assign,nonatomic) bool yearOnly;                                                                //@synthesize yearOnly=_yearOnly - In the implementation block
@property (assign,nonatomic) bool autoUpdateOnChanges; 
@property (setter=_setCurrentLocale:,nonatomic,retain) NSLocale * _currentLocale;                          //@synthesize _currentLocale=__currentLocale - In the implementation block
@property (nonatomic,readonly) NSDateFormatter * _sameDayDateFormatter;                                    //@synthesize _sameDayDateFormatter=__sameDayDateFormatter - In the implementation block
@property (nonatomic,readonly) NSDateFormatter * _sameDayNoYearDateFormatter;                              //@synthesize _sameDayNoYearDateFormatter=__sameDayNoYearDateFormatter - In the implementation block
@property (nonatomic,readonly) NSDateFormatter * _dayOfTheWeekDateFormatter;                               //@synthesize _dayOfTheWeekDateFormatter=__dayOfTheWeekDateFormatter - In the implementation block
@property (nonatomic,readonly) NSDateFormatter * _yearDateFormatter;                                       //@synthesize _yearDateFormatter=__yearDateFormatter - In the implementation block
@property (nonatomic,readonly) NSDateFormatter * _relativeDateFormatterDay;                                //@synthesize _relativeDateFormatterDay=__relativeDateFormatterDay - In the implementation block
@property (nonatomic,readonly) UDateIntervalFormatRef _monthDayIntervalFormat;                             //@synthesize _monthDayIntervalFormat=__monthDayIntervalFormat - In the implementation block
@property (nonatomic,readonly) UDateIntervalFormatRef _monthDayNoYearIntervalFormat;                       //@synthesize _monthDayNoYearIntervalFormat=__monthDayNoYearIntervalFormat - In the implementation block
@property (nonatomic,readonly) UDateIntervalFormatRef _differentMonthDayIntervalFormat;                    //@synthesize _differentMonthDayIntervalFormat=__differentMonthDayIntervalFormat - In the implementation block
@property (nonatomic,readonly) UDateIntervalFormatRef _differentMonthDayNoYearIntervalFormat;              //@synthesize _differentMonthDayNoYearIntervalFormat=__differentMonthDayNoYearIntervalFormat - In the implementation block
@property (nonatomic,readonly) UDateIntervalFormatRef _dayOfTheWeekIntervalFormat;                         //@synthesize _dayOfTheWeekIntervalFormat=__dayOfTheWeekIntervalFormat - In the implementation block
@property (nonatomic,readonly) UDateIntervalFormatRef _timeIntervalFormat;                                 //@synthesize _timeIntervalFormat=__timeIntervalFormat - In the implementation block
@property (nonatomic,readonly) UDateIntervalFormatRef _yearIntervalFormat;                                 //@synthesize _yearIntervalFormat=__yearIntervalFormat - In the implementation block
+(void)_dumpAllDateCombinationsWithFormatters;
-(void)dealloc;
-(id)init;
-(id)_dayOfTheWeekDateFormatter;
-(void)configureForFormatPreset:(unsigned long long)arg1 ;
-(void)_releaseUDateFormatter:(UDateIntervalFormatRef)arg1 ;
-(bool)useShortMonths;
-(bool)includeDayNumbers;
-(bool)includeDayNumbersWhenMonthsDiffer;
-(id)_sameMonthTemplate;
-(id)_dayTemplate;
-(bool)useRelativeDayFormatting;
-(UDateIntervalFormatRef)_newUDateFormatterForLocale:(id)arg1 template:(id)arg2 ;
-(id)_dayDifferentMonthsTemplate;
-(bool)useShortDaysInRanges;
-(bool)_date:(id)arg1 isWithinDaysInThePast:(long long)arg2 fromCurrentDate:(id)arg3 ;
-(bool)_date:(id)arg1 isWithinDaysInThePast:(long long)arg2 ;
-(UDateIntervalFormatRef)_dayOfTheWeekIntervalFormat;
-(id)_formattedDateWithUDateFormatter:(UDateIntervalFormatRef)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(id)_relativeDateFormatterDay;
-(bool)yearOnly;
-(UDateIntervalFormatRef)_yearIntervalFormat;
-(UDateIntervalFormatRef)_differentMonthDayNoYearIntervalFormat;
-(UDateIntervalFormatRef)_differentMonthDayIntervalFormat;
-(UDateIntervalFormatRef)_monthDayNoYearIntervalFormat;
-(UDateIntervalFormatRef)_monthDayIntervalFormat;
-(id)_yearDateFormatter;
-(UDateIntervalFormatRef)_timeIntervalFormat;
-(id)_sameDayNoYearDateFormatter;
-(id)_sameDayDateFormatter;
-(id)formattedDateRangeWithStartDate:(id)arg1 endDate:(id)arg2 currentDate:(id)arg3 ;
-(id)formattedDateRangeWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)_setCurrentLocale:(id)arg1 ;
-(void)_localeChanged:(id)arg1 ;
-(void)_significantTimeChange:(id)arg1 ;
-(void)_invalidateFormats;
-(void)_postChangeNotification;
-(void)setIncludeDayNumbers:(bool)arg1 ;
-(void)setIncludeDayNumbersWhenMonthsDiffer:(bool)arg1 ;
-(void)setUseRelativeDayFormatting:(bool)arg1 ;
-(void)setUseShortMonths:(bool)arg1 ;
-(void)setUseShortDaysInRanges:(bool)arg1 ;
-(void)setUseTime:(bool)arg1 ;
-(void)setYearOnly:(bool)arg1 ;
-(id)_dateCombinationWithStartDate:(id)arg1 endDate:(id)arg2 currentDate:(id)arg3 dateFormatter:(id)arg4 ;
-(void)_updateDateComponents:(id)arg1 withValueValue:(long long)arg2 forCalendarUnit:(unsigned long long)arg3 ;
-(id)_dateCombinationAfterUpdatingCurrentDateWithStartDate:(id)arg1 endDate:(id)arg2 currentDate:(id)arg3 dateFormatter:(id)arg4 calendarUnit:(unsigned long long)arg5 value:(long long)arg6 ;
-(id)_dateCombinationAfterUpdatingStartAndEndDatesWithStartDate:(id)arg1 endDate:(id)arg2 currentDate:(id)arg3 dateFormatter:(id)arg4 calendarUnit:(unsigned long long)arg5 value:(long long)arg6 ;
-(id)_relativeCombinationsForDate:(id)arg1 ;
-(void)_dumpDateCombinations;
-(id)formattedDate:(id)arg1 ;
-(void)setAutoUpdateOnChanges:(bool)arg1 ;
-(bool)autoUpdateOnChanges;
-(void)_dumpDateCombinationWithStartDate:(id)arg1 endDate:(id)arg2 currentDate:(id)arg3 dateFormatter:(id)arg4 ;
-(void)_updateCurrentDateAndDumpDateCombinationWithStartDate:(id)arg1 endDate:(id)arg2 currentDate:(id)arg3 dateFormatter:(id)arg4 calendarUnit:(unsigned long long)arg5 value:(long long)arg6 ;
-(void)_updateStartAndEndDatesAndDumpDateCombinationWithStartDate:(id)arg1 endDate:(id)arg2 currentDate:(id)arg3 dateFormatter:(id)arg4 calendarUnit:(unsigned long long)arg5 value:(long long)arg6 ;
-(bool)useTime;
-(id)_currentLocale;
@end
