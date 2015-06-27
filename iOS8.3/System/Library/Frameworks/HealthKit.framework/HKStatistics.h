/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:52:36 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/NSSecureCoding.h>
#import <HealthKit/NSCopying.h>

@class HKQuantityType, NSDate, NSArray, HKQuantity, NSDictionary;

@interface HKStatistics : NSObject <NSSecureCoding, NSCopying> {

	HKQuantityType* _quantityType;
	NSDate* _startDate;
	NSDate* _endDate;
	NSArray* _sources;
	unsigned _dataCount;
	HKQuantity* _averageQuantity;
	HKQuantity* _minimumQuantity;
	HKQuantity* _maximumQuantity;
	NSDictionary* _averageQuantityBySource;
	NSDictionary* _minimumQuantityBySource;
	NSDictionary* _maximumQuantityBySource;
	NSDictionary* _dataCountBySource;
	HKQuantity* _sumQuantity;
	NSDictionary* _sumQuantityBySource;

}

@property (readonly) HKQuantityType * quantityType; 
@property (readonly) NSDate * startDate; 
@property (readonly) NSDate * endDate; 
@property (readonly) NSArray * sources; 
@property (assign,nonatomic) unsigned dataCount;                                  //@synthesize dataCount=_dataCount - In the implementation block
@property (nonatomic,retain) HKQuantity * averageQuantity;                        //@synthesize averageQuantity=_averageQuantity - In the implementation block
@property (nonatomic,retain) HKQuantity * minimumQuantity;                        //@synthesize minimumQuantity=_minimumQuantity - In the implementation block
@property (nonatomic,retain) HKQuantity * maximumQuantity;                        //@synthesize maximumQuantity=_maximumQuantity - In the implementation block
@property (nonatomic,retain) NSDictionary * averageQuantityBySource;              //@synthesize averageQuantityBySource=_averageQuantityBySource - In the implementation block
@property (nonatomic,retain) NSDictionary * minimumQuantityBySource;              //@synthesize minimumQuantityBySource=_minimumQuantityBySource - In the implementation block
@property (nonatomic,retain) NSDictionary * maximumQuantityBySource;              //@synthesize maximumQuantityBySource=_maximumQuantityBySource - In the implementation block
@property (nonatomic,retain) NSDictionary * dataCountBySource;                    //@synthesize dataCountBySource=_dataCountBySource - In the implementation block
@property (nonatomic,retain) HKQuantity * sumQuantity;                            //@synthesize sumQuantity=_sumQuantity - In the implementation block
@property (nonatomic,retain) NSDictionary * sumQuantityBySource;                  //@synthesize sumQuantityBySource=_sumQuantityBySource - In the implementation block
+(void)_validateOptions:(unsigned)arg1 forDataType:(id)arg2 ;
+(char)supportsSecureCoding;
-(void)_setStartDate:(id)arg1 ;
-(void)_setEndDate:(id)arg1 ;
-(id)_initAsCopyOf:(id)arg1 ;
-(id)averageQuantityForSource:(id)arg1 ;
-(id)minimumQuantityForSource:(id)arg1 ;
-(id)maximumQuantityForSource:(id)arg1 ;
-(id)sumQuantityForSource:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)sources;
-(unsigned)dataCount;
-(void)setDataCount:(unsigned)arg1 ;
-(HKQuantityType *)quantityType;
-(id)_initWithDataType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(void)setSumQuantity:(HKQuantity *)arg1 ;
-(void)setSumQuantityBySource:(NSDictionary *)arg1 ;
-(void)_setSources:(id)arg1 ;
-(HKQuantity *)sumQuantity;
-(NSDictionary *)sumQuantityBySource;
-(void)setAverageQuantity:(HKQuantity *)arg1 ;
-(void)setMinimumQuantity:(HKQuantity *)arg1 ;
-(void)setMaximumQuantity:(HKQuantity *)arg1 ;
-(NSDictionary *)dataCountBySource;
-(void)setAverageQuantityBySource:(NSDictionary *)arg1 ;
-(void)setMinimumQuantityBySource:(NSDictionary *)arg1 ;
-(void)setMaximumQuantityBySource:(NSDictionary *)arg1 ;
-(HKQuantity *)maximumQuantity;
-(HKQuantity *)minimumQuantity;
-(HKQuantity *)averageQuantity;
-(NSDictionary *)averageQuantityBySource;
-(NSDictionary *)minimumQuantityBySource;
-(NSDictionary *)maximumQuantityBySource;
-(void)setDataCountBySource:(NSDictionary *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
@end
