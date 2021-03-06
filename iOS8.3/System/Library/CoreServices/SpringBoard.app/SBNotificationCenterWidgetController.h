/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:39 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/_NCWidgetController_Host_IPC.h>
#import <SpringBoard/NSXPCListenerDelegate.h>

@class NSXPCListener, NSString;

@interface SBNotificationCenterWidgetController : NSObject <_NCWidgetController_Host_IPC, NSXPCListenerDelegate> {

	NSXPCListener* _listener;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_sharedInstanceCreateIfNecessary:(char)arg1 ;
+(id)containingBundleIdentifierForWidgetWithBundleIdentifer:(id)arg1 ;
+(id)defaultWidgetController;
-(void)__setHasContent:(char)arg1 forWidgetWithBundleIdentifier:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

