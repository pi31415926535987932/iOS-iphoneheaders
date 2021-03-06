/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKCalendarItem.h>

@class NSDateComponents, NSDate, NSURL, EKObjectID, EKAlarm;

@interface EKReminder : EKCalendarItem {

	BOOL hadRecurrences;

}

@property (nonatomic,copy) NSDateComponents * startDateComponents; 
@property (nonatomic,copy) NSDateComponents * dueDateComponents; 
@property (assign,getter=isCompleted,nonatomic) BOOL completed; 
@property (nonatomic,copy) NSDate * completionDate; 
@property (assign,nonatomic) int priority; 
@property (assign,nonatomic) unsigned displayOrder; 
@property (nonatomic,readonly) NSDate * dueDate; 
@property (nonatomic,copy) NSURL * action; 
@property (nonatomic,readonly) EKObjectID * parentID; 
@property (nonatomic,readonly) EKAlarm * bestDisplayAlarm; 
@property (assign,nonatomic) BOOL hadRecurrences; 
+(void)_removeSnoozedAlarmsFromReminder:(id)arg1 usingDueDate:(id)arg2 ;
+(id)reminderWithEventStore:(id)arg1 ;
-(id)initWithPersistentObject:(id)arg1 ;
-(BOOL)commit:(id*)arg1 ;
-(BOOL)validate:(id*)arg1 ;
-(void)setCompleted:(BOOL)arg1 ;
-(id)_persistentReminder;
-(unsigned)displayOrder;
-(void)setDisplayOrder:(unsigned)arg1 ;
-(id)externalURI;
-(void)_sendModifiedNote;
-(void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2 ;
-(id)dueDate;
-(id)dueDateComponents;
-(id)reminderIdentifier;
-(id)startDateComponents;
-(void)setStartDateComponents:(id)arg1 ;
-(id)completionDate;
-(void)setCompletionDate:(id)arg1 ;
-(id)parentID;
-(void)setDueDateComponents:(id)arg1 ;
-(BOOL)isCompleted;
-(void)clearParentID;
-(id)bestDisplayAlarm;
-(BOOL)hadRecurrences;
-(void)setHadRecurrences:(BOOL)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setTimeZone:(id)arg1 ;
-(int)priority;
-(void)setPriority:(int)arg1 ;
@end

