/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:21 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccountSettings/ASRuntimeFixProtocol.h>

@class NSSet, NSString;

@interface ASRuntimeFixMailAccount : NSObject <ASRuntimeFixProtocol> {

	BOOL _shouldNotifyMobileMail;
	NSSet* _supportedMailClasses;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_cleanupAccountClass:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(int)fixBasicAccountIfNeeded:(id)arg1 loggingMessage:(id)arg2 ;
-(void)accountsHaveBeenSaved:(BOOL)arg1 ;
-(id)supportedAccountTypes;
@end
