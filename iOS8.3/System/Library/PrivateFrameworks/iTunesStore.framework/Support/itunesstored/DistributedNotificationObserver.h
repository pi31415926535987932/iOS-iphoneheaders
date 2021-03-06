/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:37:04 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SSXPCConnection, NSMutableSet, NSArray;

@interface DistributedNotificationObserver : NSObject {

	SSXPCConnection* _connection;
	NSMutableSet* _notificationNames;

}

@property (nonatomic,readonly) NSArray * observedNotificationNames; 
-(void)addObservedNotificationNames:(id)arg1 ;
-(void)postNotificationName:(id)arg1 message:(id)arg2 ;
-(void)addObservedNotificationName:(id)arg1 ;
-(void)removeObservedNotificationName:(id)arg1 ;
-(NSArray *)observedNotificationNames;
-(void)dealloc;
-(id)initWithServiceName:(id)arg1 ;
@end

