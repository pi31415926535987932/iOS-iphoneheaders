/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:06 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSFileHandle, NSMutableData, NSData;

@interface SWVicFileLogger : NSObject {

	NSFileHandle* _vicFileHandle;
	NSMutableData* _vicFileData;
	NSData* _previousPacket;

}
-(void)dealloc;
-(id)init;
-(void)logPacket:(id)arg1 rssi:(char)arg2 ;
@end
