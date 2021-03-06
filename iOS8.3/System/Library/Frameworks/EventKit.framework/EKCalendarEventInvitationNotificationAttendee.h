/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:46:28 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKIdentityProtocol.h>

@class NSString, NSURL;

@interface EKCalendarEventInvitationNotificationAttendee : NSObject <EKIdentityProtocol> {

	char _statusChanged;
	char _commentChanged;
	NSString* _name;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _emailAddress;
	NSURL* _url;
	int _participantStatus;
	NSString* _comment;

}

@property (nonatomic,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * firstName;                 //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,readonly) NSString * lastName;                  //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,readonly) NSString * emailAddress;              //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,readonly) NSURL * url;                          //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) char statusChanged;                   //@synthesize statusChanged=_statusChanged - In the implementation block
@property (nonatomic,readonly) char commentChanged;                  //@synthesize commentChanged=_commentChanged - In the implementation block
@property (nonatomic,readonly) int participantStatus;                //@synthesize participantStatus=_participantStatus - In the implementation block
@property (nonatomic,readonly) NSString * comment;                   //@synthesize comment=_comment - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)commentChanged;
-(char)statusChanged;
-(id)initWithAttendee:(id)arg1 ;
-(void)dealloc;
-(NSString *)name;
-(NSURL *)url;
-(int)participantStatus;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)emailAddress;
-(NSString *)comment;
@end

