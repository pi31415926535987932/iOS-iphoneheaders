/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASEvent.h>
#import <DAEAS/ASParsingAcceptingTopLevelLeaves.h>
#import <CoreFoundation/NSCoding.h>

@class NSNumber, NSDate, NSMutableDictionary, ASEmailItem, NSString;

@interface ASMeetingRequest : ASEvent <ASParsingAcceptingTopLevelLeaves, NSCoding> {

	NSNumber* _instanceType;
	NSDate* _recurrenceId;
	NSMutableDictionary* _placeHolder;
	int _meetingClassType;
	int _meetingMessageType;
	ASEmailItem* _parentEmailItem;
	NSString* _cachedParentFolderId;
	NSString* _cachedParentServerId;

}

@property (retain) NSNumber * instanceType;                      //@synthesize instanceType=_instanceType - In the implementation block
@property (retain) NSDate * recurrenceId;                        //@synthesize recurrenceId=_recurrenceId - In the implementation block
@property (assign) int meetingClassType;                         //@synthesize meetingClassType=_meetingClassType - In the implementation block
@property (assign) int meetingMessageType;                       //@synthesize meetingMessageType=_meetingMessageType - In the implementation block
@property (retain) NSString * cachedParentFolderId;              //@synthesize cachedParentFolderId=_cachedParentFolderId - In the implementation block
@property (retain) NSString * cachedParentServerId;              //@synthesize cachedParentServerId=_cachedParentServerId - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(void)setOrganizer:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(void)applyPlaceHolder;
-(void)clearPlaceHolder;
-(void)setObject:(id)arg1 forDCCPT:(int)arg2 ;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(id)exceptionDate;
-(void)setExceptionDate:(id)arg1 ;
-(void)postProcessApplicationData;
-(BOOL)saveToCalendarWithExistingRecord:(void*)arg1 intoCalendar:(void*)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 account:(id)arg5 ;
-(id)unactionableICSRepresentationForAccount:(id)arg1 ;
-(void)takeValuesFromParentEmailForAccount:(id)arg1 ;
-(void)setMeetingClassType:(int)arg1 ;
-(int)meetingMessageType;
-(BOOL)cachedOrganizerIsSelfWithAccount:(id)arg1 ;
-(void)setDTStamp:(id)arg1 ;
-(void)_determineSelfnessWithLocalEvent:(void*)arg1 forAccount:(id)arg2 ;
-(BOOL)_bailIfNotNewestDataForAccount:(id)arg1 ;
-(BOOL)shouldUseInMemoryAttendeesForAccount:(id)arg1 numExistingAttendees:(int)arg2 ;
-(void)setInstanceType:(id)arg1 ;
-(void)_setReminderSecsBefore:(id)arg1 ;
-(void)setRecurrenceId:(id)arg1 ;
-(void)setMeetingMessageType:(int)arg1 ;
-(void)setCachedParentFolderId:(id)arg1 ;
-(void)setCachedParentServerId:(id)arg1 ;
-(id)recurrenceId;
-(BOOL)writeInviteToCalDBCreateAsRejected:(BOOL)arg1 defaultCalendar:(void*)arg2 account:(id)arg3 ;
-(id)instanceType;
-(int)meetingClassType;
-(id)cachedParentFolderId;
-(id)cachedParentServerId;
@end

