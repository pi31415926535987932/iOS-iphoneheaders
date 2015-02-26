/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:23 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSSet, NSLock, NSDate, NSDateComponents;

@interface HKStatisticsCollection : NSObject {

	/*^block*/id _emptyStatisticsConstructor;
	double _approximateStatisticsInterval;
	NSMutableDictionary* _statisticsByIndex;
	NSSet* _cachedSources;
	NSLock* _statisticsLock;
	NSDate* _anchorDate;
	NSDateComponents* _statisticsInterval;

}

@property (nonatomic,readonly) NSDate * anchorDate;                                //@synthesize anchorDate=_anchorDate - In the implementation block
@property (nonatomic,readonly) NSDateComponents * statisticsInterval;              //@synthesize statisticsInterval=_statisticsInterval - In the implementation block
-(id)sources;
-(id)_initWithAnchorDate:(id)arg1 statisticsInterval:(id)arg2 emptyStatisticsConstructor:(/*^block*/id)arg3 ;
-(BOOL)_insertStatistics:(id)arg1 ;
-(void)_resetStatistics:(id)arg1 ;
-(NSDate *)anchorDate;
-(id)_statisticsPeriodAndIndex:(long long*)arg1 forDate:(id)arg2 ;
-(id)_statisticsForIndex:(long long)arg1 ;
-(void)_enumerateStatisticsIndexesFromDate:(id)arg1 toDate:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)_clearSourcesCache;
-(void)_timePeriodForStatisticsAtIndex:(long long)arg1 startDate:(id*)arg2 endDate:(id*)arg3 ;
-(id)_initWithAnchorDate:(id)arg1 statisticsInterval:(id)arg2 ;
-(id)statisticsForDate:(id)arg1 ;
-(void)enumerateStatisticsFromDate:(id)arg1 toDate:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)_maxSumQuantityStatistics;
-(id)_minSumQuantityStatistics;
-(void)_enumerateTimePeriodsFromDate:(id)arg1 toDate:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)_timePeriodForDate:(id)arg1 ;
-(id)init;
-(NSDateComponents *)statisticsInterval;
-(id)statistics;
@end
