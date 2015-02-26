/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:40 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSXPCConnection, NSSet;

@interface BBSystemStateProvider : NSObject {

	NSXPCConnection* _connection;
	unsigned long long _currentState;
	NSSet* _sectionIDs;

}
+(id)serverInterface;
+(id)clientInterface;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(void)noteOccurrenceOfEvent:(unsigned long long)arg1 ;
-(void)noteChangeOfState:(unsigned long long)arg1 newValue:(BOOL)arg2 ;
-(void)noteRestrictedSectionIDsDidChange:(id)arg1 ;
-(void)_sendState:(unsigned long long)arg1 value:(BOOL)arg2 ;
@end
