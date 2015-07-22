/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:58 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CalDAV/CoreDAVPropFindTaskDelegate.h>

@class NSURL, CoreDAVPropFindTask, ICSDocument, NSString;

@interface CalDAVGetOfficeHoursTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate> {

	NSURL* _inboxURL;
	CoreDAVPropFindTask* _fetchTask;
	ICSDocument* _calendarAvailability;

}

@property (assign,nonatomic) id<CoreDAVTaskGroupDelegate> delegate; 
@property (nonatomic,retain) ICSDocument * calendarAvailability;                 //@synthesize calendarAvailability=_calendarAvailability - In the implementation block
@property (nonatomic,retain) NSURL * inboxURL;                                   //@synthesize inboxURL=_inboxURL - In the implementation block
@property (nonatomic,retain) CoreDAVPropFindTask * fetchTask;                    //@synthesize fetchTask=_fetchTask - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_finishWithError:(id)arg1 ;
-(void)dealloc;
-(void)setCalendarAvailability:(ICSDocument *)arg1 ;
-(id)initWithAccountInfoProvider:(id)arg1 inboxURL:(id)arg2 taskManager:(id)arg3 ;
-(ICSDocument *)calendarAvailability;
-(void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3 ;
-(void)startTaskGroup;
-(void)setFetchTask:(CoreDAVPropFindTask *)arg1 ;
-(CoreDAVPropFindTask *)fetchTask;
-(NSURL *)inboxURL;
-(void)setInboxURL:(NSURL *)arg1 ;
@end
