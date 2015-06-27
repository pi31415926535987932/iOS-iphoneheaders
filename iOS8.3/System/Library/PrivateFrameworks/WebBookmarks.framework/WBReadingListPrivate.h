/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:14:46 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebBookmarks/WebBookmarksXPCConnectionDelegate.h>

@class WebBookmarksXPCConnection, NSString;

@interface WBReadingListPrivate : NSObject <WebBookmarksXPCConnectionDelegate> {

	WebBookmarksXPCConnection* _connection;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)connection:(id)arg1 didCloseWithError:(id)arg2 ;
-(void)_addReadingListItemWithURL:(id)arg1 title:(id)arg2 previewText:(id)arg3 ;
@end
