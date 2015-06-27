/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:31 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalDAV/CalDAVCalendarServerResourceChangeElement.h>

@class CoreDAVItem, NSMutableSet;

@interface CalDAVCalendarServerResourceChangeUpdatedElement : CalDAVCalendarServerResourceChangeElement {

	char _content;
	CoreDAVItem* _prop;
	NSMutableSet* _calendarChanges;

}

@property (assign,nonatomic) char content;                                //@synthesize content=_content - In the implementation block
@property (nonatomic,retain) CoreDAVItem * prop;                          //@synthesize prop=_prop - In the implementation block
@property (nonatomic,retain) NSMutableSet * calendarChanges;              //@synthesize calendarChanges=_calendarChanges - In the implementation block
-(void)dealloc;
-(id)init;
-(char)content;
-(void)setCalendarChanges:(NSMutableSet *)arg1 ;
-(void)addContentItem:(id)arg1 ;
-(void)addCalendarChange:(id)arg1 ;
-(id)copyParseRules;
-(CoreDAVItem *)prop;
-(void)setProp:(CoreDAVItem *)arg1 ;
-(NSMutableSet *)calendarChanges;
-(void)setContent:(char)arg1 ;
@end
