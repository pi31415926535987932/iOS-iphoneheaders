/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:00 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableDictionary, NSTimer, NSRecursiveLock;

@interface IDSTrafficMonitor : NSObject {

	NSMutableDictionary* _traffic;
	NSTimer* _hourlyTimer;
	NSTimer* _dailyTimer;
	NSRecursiveLock* _lock;

}
+(id)sharedInstance;
-(void)logState;
-(void)_setDailyTimer;
-(void)_setHourlyTimer;
-(void)_dailyTimer:(id)arg1 ;
-(void)_hourlyTimer:(id)arg1 ;
-(BOOL)_noteActionType:(id)arg1 forService:(id)arg2 serviceType:(unsigned)arg3 requestor:(id)arg4 ;
-(BOOL)noteQueryForService:(id)arg1 requestor:(id)arg2 ;
-(BOOL)noteQueryRequestForService:(id)arg1 requestor:(id)arg2 ;
-(void)noteIncomingMessageForService:(id)arg1 ;
-(void)noteIncomingLocalMessageForService:(id)arg1 ;
-(BOOL)noteOutgoingMessageForService:(id)arg1 serviceType:(unsigned)arg2 requestor:(id)arg3 ;
-(BOOL)noteOutgoingFallbackMessageForService:(id)arg1 serviceType:(unsigned)arg2 requestor:(id)arg3 ;
-(BOOL)noteOutgoingServerMessageForService:(id)arg1 serviceType:(unsigned)arg2 requestor:(id)arg3 ;
-(void)dealloc;
-(id)init;
@end
