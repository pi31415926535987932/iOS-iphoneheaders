/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:31 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Fitness/FIUIModelObserver.h>

@class NSString;

@interface FitnessThreeRingCache : NSObject <FIUIModelObserver>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)loadWeekFromStartDate:(id)arg1 ;
+(void)loadWeekFromStartDate:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)_cacheQueue_normalizeCachesTo7DayWeek:(id)arg1 date:(id)arg2 ;
+(void)setHealthStore:(id)arg1 ;
+(void)initialize;
@end
