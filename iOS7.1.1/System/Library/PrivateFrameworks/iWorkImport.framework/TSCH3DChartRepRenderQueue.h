/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:31 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableArray;

@interface TSCH3DChartRepRenderQueue : NSObject {

	NSMutableArray* mQueue;
	long long mCurrentPass;
	long long mPauseLevel;

}
+(id)sharedInstance;
+(id)allocWithZone:(NSZone)arg1 ;
+(id)_singletonAlloc;
-(void)modelInvalidated:(id)arg1 ;
-(void)requestCallbackWithDelay:(float)arg1 ;
-(void)cancelCallback;
-(void)removeRep:(id)arg1 ;
-(void)renderUpdate:(id)arg1 ;
-(void)addRep:(id)arg1 front:(bool)arg2 ;
-(void)threadRemoveRep:(id)arg1 ;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(id)init;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)resume;
-(void)pause;
@end
