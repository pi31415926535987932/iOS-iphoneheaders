/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:49:40 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVGetAccountPropertiesTaskGroup.h>

@class NSSet;

@interface BookmarkDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup {

	NSSet* _bookmarkHomes;

}

@property (nonatomic,readonly) NSSet * bookmarkHomes;              //@synthesize bookmarkHomes=_bookmarkHomes - In the implementation block
-(void)dealloc;
-(id)description;
-(NSSet *)bookmarkHomes;
-(id)_copyAccountPropertiesPropFindElements;
-(void)_setPropertiesFromParsedResponses:(id)arg1 ;
-(id)homeSet;
@end
